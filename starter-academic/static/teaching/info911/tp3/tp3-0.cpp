#include <iostream>
#include <set>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/core.hpp>

using namespace cv;

///////////////////////////////////////////////////////////////////////////////
// Useful functions

/// Given an image of labels, draw contours onto the image at region boundaries with
/// given color.
cv::Mat drawContours( cv::Mat labelled_img, cv::Vec3b color )
{
  cv::Mat contours( labelled_img.rows, labelled_img.cols, CV_8UC3, Scalar( 0,0,0 ) );
  for ( auto y = 1; y < labelled_img.rows; y++ )
    for ( auto x = 1; x < labelled_img.cols; x++ )
      {
	auto v  = labelled_img.at< int >( y, x );
	auto vg = labelled_img.at< int >( y, x-1 );
	auto vh = labelled_img.at< int >( y-1, x );
	if ( v != vg || v != vh )
	  contours.at< cv::Vec3b >( y, x ) = color;
      }
  return contours;
}
/// Resizes the input image to have a resolution divided by 2 along each axis.
cv::Mat downSample( cv::Mat input )
{
  cv::Mat output;
  cv::pyrDown( input, output, cv::Size( input.cols / 2, input.rows / 2));
  return output;
}
/// Returns a resized version of image img so that it has the size of image target.
cv::Mat rescaleLinear( cv::Mat target, cv::Mat img )
{
  int w  = target.cols;
  int h  = target.rows;
  cv::Mat  output;
  cv::resize( img, output, cv::Size2i( w, h ), 0, 0, cv::INTER_LINEAR );
  return output;
}
/// Displays a text into the input image.
void printText( cv::Mat input, std::string text,
                double x, double y,
                double font_scale = 1.0,
                int thickness = 1,
                cv::Scalar color = cv::Scalar( 255, 255, 255 ) )
{
  x = std::min( 0.99, std::max( 0.01, x ) );
  y = std::min( 0.99, std::max( 0.01, y ) );
  int j = round( x * input.cols );
  int i = round( y * input.rows );
  char buffer[ 128 ];
  snprintf( buffer, 128, "%s", text.c_str() );
  cv::putText( input, buffer,
               cv::Point( j, i ),
               cv::FONT_HERSHEY_COMPLEX_SMALL, // Font
               font_scale, // Scale. 2.0 = 2x bigger
               color, // BGR Color
               thickness, // Line Thickness (Optional)
               cv:: LINE_AA); 
}
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Global class storing the hierarchy of partitions and optimisation methods.
///////////////////////////////////////////////////////////////////////////////
struct Hierarchy {

  /// Pixel
  struct Pixel {
    int x; int y;
  };

  /// A connected region of pixels.
  struct Region {
    int   index;
    Pixel start;
    std::vector< int > pixel_indices;
    std::vector< std::pair< int, int > > boundary;
    std::set< int > neighbors;
    Vec3f sum;

    /// Default constructor. The object is invalid
    Region() : index( -1 ){}

    /// Construct a region that is the pixel p of index idx in image img.
    Region( int idx, Pixel p, const cv::Mat& img )
      : index( idx ), start( p )
    {
      pixel_indices.push_back( idx );
      if ( p.x > 0 ) { // west
        boundary.push_back( { idx, idx-1 } );
        neighbors.insert( idx - 1 );
      }
      if ( p.x < img.cols-1 ) { // east
        boundary.push_back( { idx, idx + 1 } );
        neighbors.insert( idx + 1 );
      }
      if ( p.y > 0 ) { // north
        boundary.push_back( { idx, idx - img.cols } );
        neighbors.insert( idx - img.cols );
      }
      if ( p.y < img.rows-1 ) { // sourth
        boundary.push_back( { idx, idx + img.cols } );
        neighbors.insert( idx + img.cols );
      }
      Vec3b color = img.at<Vec3b>( p.y, p.x );
      sum = Vec3f { float( color[0] ) / 256.0f,
                    float( color[1] ) / 256.0f,
                    float( color[2] ) / 256.0f };
    }

    /// Resets the region, which becomes invalid.
    void clear()
    {
      index = -1;
      pixel_indices.clear();
      boundary.clear();
      neighbors.clear();
    }

    /// return the (discrete) perimeter of the region.
    int perimeter() const
    {
      return boundary.size();
    }
  
    /// return the area of the region.
    int   area() const
    {
      return pixel_indices.size();
    }

    /// return the average color of the region.
    Vec3b averageColor() const
    {
      Vec3f c  = sum / float( pixel_indices.size() );
      return Vec3b{ cv::saturate_cast<uchar>( c[0]*256.0 ),
                    cv::saturate_cast<uchar>( c[1]*256.0 ),
                    cv::saturate_cast<uchar>( c[2]*256.0 ) };
    }

    /// return the variance of the colors within the region.
    float variance() const
    {
      // TO DO
      return 0.0f;
    }
    
    /// returns a new region that is the fusion of this region with
    /// region \a other.
    Region virtualMerge( const Region& other,
                         std::vector<int>& linlabels ) const
    {
      Region R;
      R.sum  = sum  + other.sum;
      // Remove common boundary
      std::vector< std::pair< int, int > > nboundary;
      nboundary.reserve( boundary.size() + other.boundary.size() );
      for ( int i = 0; i < boundary.size(); i++ )
        {
          if ( linlabels[ boundary[i].second ] != other.index )
            nboundary.push_back( boundary[i] );
        }
      for ( int i = 0; i < other.boundary.size(); i++ )
        {
          if ( linlabels[ other.boundary[i].second ] != index )
            nboundary.push_back( other.boundary[i] );
        }
      std::swap( R.boundary, nboundary );
      R.pixel_indices = pixel_indices;
      R.pixel_indices.reserve( pixel_indices.size() + other.pixel_indices.size() );
      for ( auto k : other.pixel_indices )
        R.pixel_indices.push_back( k );
      return R;
    }

    /// (Definitely) merges this region with region \a other.
    /// @return the boundary that was lying between the two regions before fusion.
    std::vector< std::pair< int, int > >
    merge( const Region& other, std::vector<int>& linlabels )
    {
      sum  += other.sum;
      // Remove other from list of neighbors
      neighbors.erase( other.index );
      // Add neighbors of other to this region
      for ( auto n : other.neighbors )
        if ( n != index ) neighbors.insert( n );
      // Remove common boundary
      std::vector< std::pair< int, int > > nboundary;
      std::vector< std::pair< int, int > > cboundary;
      cboundary.reserve( std::min( boundary.size(), other.boundary.size() ) );
      nboundary.reserve( boundary.size() + other.boundary.size() );
      for ( int i = 0; i < boundary.size(); i++ )
        {
          if ( linlabels[ boundary[i].second ] != other.index )
            nboundary.push_back( boundary[i] );
          else
            cboundary.push_back( boundary[i] );
        }
      for ( int i = 0; i < other.boundary.size(); i++ )
        {
          if ( linlabels[ other.boundary[i].second ] != index )
            nboundary.push_back( other.boundary[i] );
        }
      std::swap( boundary, nboundary );
      // put other pixels them into this region
      pixel_indices.reserve( pixel_indices.size() + other.pixel_indices.size() );
      for ( auto k : other.pixel_indices )
        {
          pixel_indices.push_back( k );
          linlabels[ k ] = index;
        }
      return cboundary;
    }

    /// Displays information about this region.
    void display()
    {
      std::cout << "Region " << index << ": (" << start.x << "," << start.y << ")"
                << " #R=" << pixel_indices.size()
                << " #B=" << boundary.size()
                << " #V=" << neighbors.size() << "\n";
    }
  }; // end of struct Region

  /// Type for energy functions (takes a hierarchy and a region and ouputs a float).
  typedef std::function< float ( const Hierarchy&, const Region& ) > EnergyFct;

  /// data
  cv::Mat             input;
  std::vector<Region> regions;
  std::vector<int>    linlabels;
  std::set<int>       active_regions;
  double              last_lambda;
  cv::Mat             saliency;
  int                 nb_fusions;
  EnergyFct           Dfct;
  EnergyFct           Cfct;
  
  /// Constructor from image, homogeneity function D and boundary
  /// function C.
  Hierarchy( cv::Mat image, EnergyFct D, EnergyFct C )
  {
    init( image, D, C );
  }
  
  /// Initializer from image, homogeneity function D and boundary
  /// function C.
  void init( cv::Mat image, EnergyFct D, EnergyFct C )
  {
    Dfct = D;
    Cfct = C;
    input = image;
    linlabels.resize( input.rows * input.cols );
    regions.reserve( input.rows * input.cols );
    int idx = 0;
    for ( auto y = 0; y < input.rows; y++ )
      for ( auto x = 0; x < input.cols; x++ )
        {
          regions.emplace_back( idx, Pixel{ x, y }, input );
          linlabels[ idx ] = idx;
          active_regions.insert( idx );
          idx++;
        }
    saliency   = cv::Mat( input.rows*2, input.cols*2, CV_32SC1, Scalar(0));
    nb_fusions = 0;
  }

  /// Contour energy of region r.
  float C( const Region& R ) const
  {
    return Cfct( *this, R );
  }
  
  /// Homogeneity energy of region r.
  float D( const Region& R ) const
  {
    return Dfct( *this, R );
  }

  /// Total energy of region r at scale lambda.
  float Energy( const Region& R, float lambda ) const
  {
    return Dfct( *this, R ) + lambda * Cfct( *this, R );
  }
  
  /// Relabels region R2 in all its neighbors as the region R.
  void relabel( int R2, int R )
  {
    // Relabel for each region
    // std::cout << "update neighbors\n";    
    for ( auto Rv : regions[ R2 ].neighbors )
      {
        if ( regions[ Rv ].index != R )
          {
            regions[ Rv ].neighbors.erase( R2 );
            regions[ Rv ].neighbors.insert( R );
          }
      }
  }

  /// Returns the image giving for each pixel its label (i.e. region index).
  cv::Mat getLabels() const
  {
    cv::Mat labels( input.rows, input.cols, CV_32SC1 );
    int idx = 0;
    for ( auto y = 0; y < input.rows; y++ )
      for ( auto x = 0; x < input.cols; x++ )
        {
          auto l = linlabels[ idx ];
          labels.at<int>( y, x ) = l;
          idx++;
        }
    return labels;
  }

  /// Main method merging region R2 into R et scale lambda.
  void merge( int R, int R2, float lambda )
  {
    if ( active_regions.count( R ) == 0
         || active_regions.count( R2 ) == 0 )
      {
        std::cout << "Merge between bad regions:\n";
        std::cout << R << " : ";
        regions[ R ].display();
        std::cout << R2 << " : ";
        regions[ R2 ].display();
        return;
      }
    auto bdry = regions[ R ].merge( regions[ R2 ], linlabels );
    relabel( R2, R );
    regions[ R2 ].clear();
    active_regions.erase( R2 );
    nb_fusions += 1;
    updateSaliency( bdry, nb_fusions );
  }

  void stupidMerge( int N, float lambda )
  {
    while ( N > 0 && regions.size() > 1 )
      {
        std::vector<int> AR( active_regions.cbegin(), active_regions.cend() );
        for ( auto k = 0; k < AR.size(); k++ )
          {
            const int R = AR[ k ];
            if ( regions[ R ].index < 0 ) continue;
            if ( regions[ R ].neighbors.empty() ) continue;
            float min_E = std::numeric_limits<float>::infinity();
            int   min_R = -1;
            for ( auto v : regions[ R ].neighbors ) // for each neighbor
              {
                Region fusion = regions[ R ].virtualMerge( regions[ v ], linlabels );
                float  E      = C( fusion );           // computes its energy
                if ( E < min_E )
                  {
                    min_R = v;
                    min_E = E;
                  }
              }
            merge( R, min_R, 0.0 );
          }
        N--;
      }
  }

  /// Pixels are indexed/numbered, so this method returns the
  /// index/number associated to the given pixel.
  int number( Pixel p ) const
  {
    return input.cols * p.y + p.x;
  }

  /// Pixels are indexed/numbered, so this method returns the
  /// pixel associated to the given index/number.
  Pixel pixel( int idx ) const
  {
    return Pixel { idx % input.cols, idx / input.cols };
  }

  /// Updates the saliency image by setting the given range of
  /// boundary linels to value.
  void updateSaliency( const std::vector< std::pair< int, int > >& bdry,
                       int value )
  {
    for ( auto surfel : bdry )
      {
        Pixel p = pixel( surfel.first  );
        Pixel q = pixel( surfel.second );
        int   x = p.x + q.x;
        int   y = p.y + q.y;
        saliency.at<int>( y, x ) = value;
      }
  }
  
  /// If you do not build the hierarchy to the top (one region), it draws
  /// the saliency of the current partition.
  void finishSaliency( int value )
  {
    for ( auto r : active_regions )
      {
        updateSaliency( regions[ r ].boundary, value );
      }
  }

  /// Draws the saliency on top of the doubled input image.
  cv::Mat getSaliency( double level_cut, double power = 10.0 ) const
  {
    level_cut = pow( level_cut, 0.25 ); // favor the visibility of big regions.
    const int min_lvl = std::min( nb_fusions - 1,
                                  int( round( nb_fusions * level_cut ) ) );
    const double    m = double(1.0/(nb_fusions-min_lvl));
    cv::Mat output = rescaleLinear( saliency, input );
    for ( auto y = 0; y < output.rows; y += 2 )
      for ( auto x = 1; x < output.cols-1; x += 2 )
        {
          double lvl = double( saliency.at<int>( y, x ) - min_lvl )*m;
          if ( lvl <= 0.0 ) continue;
          double l   = pow( lvl, power );
          Vec3b  v   = output.at<Vec3b>( y, x );
          output.at<Vec3b>( y, x ) = Vec3b{ uchar(round(v[0]*(1.0-l) + 255.0*l)),
                                            uchar(round(v[1]*(1.0-l) + 255.0*l)),
                                            uchar(round(v[2]*(1.0-l) + 255.0*l)) };
        }
    for ( auto y = 1; y < output.rows-1; y += 2 )
      for ( auto x = 0; x < output.cols; x += 2 )
        {
          double lvl = double( saliency.at<int>( y, x ) - min_lvl )*m;
          if ( lvl <= 0.0 ) continue;
          double l   = pow( lvl, power );
          Vec3b  v   = output.at<Vec3b>( y, x );
          output.at<Vec3b>( y, x ) = Vec3b{ uchar(round(v[0]*(1.0-l) + 255.0*l)),
                                            uchar(round(v[1]*(1.0-l) + 255.0*l)),
                                            uchar(round(v[2]*(1.0-l) + 255.0*l)) };
        }
    for ( auto y = 1; y < output.rows-1; y += 2 )
      for ( auto x = 1; x < output.cols-1; x += 2 )
        {
          int z = std::max( std::max( saliency.at<int>( y-1, x ),
                                        saliency.at<int>( y+1, x ) ),
                              std::max( saliency.at<int>( y, x-1 ),
                                        saliency.at<int>( y, x+1 ) ) );
          double lvl = double( z - min_lvl ) * m;
          if ( lvl <= 0.0 ) continue;
          double l   = pow( lvl, power );
          Vec3b  v   = output.at<Vec3b>( y, x );
          output.at<Vec3b>( y, x ) = Vec3b{ uchar(round(v[0]*(1.0-l) + 255.0*l)),
                                            uchar(round(v[1]*(1.0-l) + 255.0*l)),
                                            uchar(round(v[2]*(1.0-l) + 255.0*l)) };
        }
    return output;
  }

}; // end of struct Hierarchy

///////////////////////////////////////////////////////////////////////////////
/// Main program.
///////////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv)
{
  using namespace cv;
  // Usage
  std::cout << "Usage: " << argv[ 0 ] << " [image]" << std::endl
            << "\tShows the scale sets hierarchical segmentation algorithm,\n"
            << "\teither on the given image or on the camera if no image was given."
            << std::endl
            << "\t(l) Jacques-Olivier Lachaud, LAMA, CNRS, Université Savoie Mont Blanc."
            << std::endl
            << "\tPressing keys have the following effects:" << std::endl
            << "\t's': toggle saliency/contour display." << std::endl
            << "\t'w': writes the current result into 'output.jpg'." << std::endl
            << "\t'q': quit the application." << std::endl;

  int ilambdaSP    = 0;
  int ilambda      = 0;
  int iSuperPixels = 5;
  int iCut         = 75;
  namedWindow("Segmentation", WINDOW_NORMAL);
  createTrackbar("lambda (SP) / 1000", "Segmentation", &ilambdaSP, 1000, NULL );
  createTrackbar("N superpixels", "Segmentation", &iSuperPixels, 20, NULL );
  createTrackbar("% level cut", "Segmentation", &iCut, 100, NULL );
  Mat input, video_input, output, output_image;
  VideoCapture* pCap = nullptr;
  if ( argc > 1 )
    input = imread( argv[ 1 ] );
  else {
    pCap = new VideoCapture( 0 );
    pCap->set( CAP_PROP_FRAME_WIDTH, 640 );
    pCap->set( CAP_PROP_FRAME_HEIGHT, 480 );
    if( ! pCap->isOpened() ) return -1;
    (*pCap) >> input; //video_input;
    input = downSample( input );
  }
  if( input.empty() )
    {
      std::cout << "Couldn't open image or video stream.\n";
      return 0;
    }

  // Example of an energy characterizing the homogeneity of a region
  // (here the variance of colors times the area).
  Hierarchy::EnergyFct D1 = [] ( const Hierarchy& H, const Hierarchy::Region& R ) -> float
  {
    return R.variance() * ( R.pixel_indices.size() );
  };

  // Example of an energy characterizing the boundary of a
  // region. here the perimeter of the region.
  Hierarchy::EnergyFct C1 = [] ( const Hierarchy& H, const Hierarchy::Region& R ) -> float
  {
    return R.boundary.size();
  };

  int wait_time = 100; 
  bool saliency = false;

  /// Main loop
  while ( true ) {
    int keycode   = cv::waitKey( wait_time );
    int asciicode = keycode & 0xff;
    if ( asciicode == 'q' ) break;
    if ( asciicode == 's' ) saliency  = ! saliency;

    /// Get new frame in video in video stream mode.
    if ( pCap != nullptr ) {
      (*pCap) >> input; 
      input = downSample( input );
    }

    int  length_n  = 2.0 * ( input.cols + input.rows );
    float lambdaSP = float(ilambdaSP) / 20.0f / length_n;
    float lambda   = float(ilambda)   / 20.0f / length_n;

    /// Main segmentation process.
    double t = (double)getTickCount();
    Hierarchy H( input, D1, C1 );
    H.stupidMerge( iSuperPixels, lambdaSP );
    t = (double)getTickCount() - t;
    int t_ms = round( t*1000./getTickFrequency() );

    /// Display contours or saliency.
    if ( ! saliency )
      {
        cv::Mat L = H.getLabels();
        cv::Mat contours = drawContours( L, cv::Vec3b { 255,255,255 } );
        addWeighted( contours, 1.0, input, 1.0, 0, output_image);
      }
    else
      {
        double cut = double( iCut ) / 100.0;
        H.finishSaliency( H.nb_fusions );
        output_image = H.getSaliency( cut );
      }
    
    /// Display some information on output and output afterwards.
    int nR = H.active_regions.size();
    std::string sR = "#R=" + std::to_string( H.active_regions.size() );
    std::string sT = "T=" + std::to_string( t_ms ) + "ms";
    printText( output_image, sR, 0.5, 0.9,   1, 1, Vec3b{ 255, 0, 255 } );
    printText( output_image, sT, 0.5, 0.98,  1, 1, Vec3b{ 255, 0, 0 } );
    imshow( "Segmentation", output_image );
    if ( asciicode == 'w' ) imwrite( "output.jpg", output_image );
  } // while (true ) {
  return 0;
}
