//---------------------------------------------------------------------
// 1.d Hello World "à la C++"
//---------------------------------------------------------------------
// Notez la syntaxe dite des flux, beaucoup plus concise et lisible.
// - ici << affiche sur la sortie standard des chaînes et des entiers
// - ici >> lit des entiers, double et caractères sur l'entrée standard
//---------------------------------------------------------------------

#include <cstdio>
#include <iostream>

int main( int argc, char** argv )
{
  int         nb = 2;
  const char* worlds[] = { "Earth", "Mars" };

  printf( "Hello %d worlds : %s, %s\n",
	  nb, worlds[ 0 ], worlds[ 1 ] );
  
  std::cout << "Hello " << nb << " worlds : "
            << worlds[ 0 ] << ", " << worlds[ 1 ]
            << std::endl;

  int x;
  double y;
  char s[ 10 ];
  // int n = scanf( "%d %lf %s", &x, &y, s );
  std::cin >> x >> y >> s;
  std::cout << " x=" << x << " y=" << y << " s=" << s << std::endl;

  return 0;
}
