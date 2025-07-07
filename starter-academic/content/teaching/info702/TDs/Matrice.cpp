// Matrice.cpp
#include <cassert>
#include <cmath>
#include "Matrice.hpp"

Matrice Matrice::rotation( double theta )
{
  return Matrice( cos( theta ), -sin( theta ),
                  sin( theta ),  cos( theta ) );
}
Matrice::Matrice()
  : data { 0.0, 0.0, 0.0, 0.0 } 
{
}
Matrice::Matrice( double c00, double c01, double c10, double c11 )
  : data { c00, c01, c10, c11 }
{
}
Matrice::Matrice( const Vecteur& u, const Vecteur& v )
  : data { u.x(), v.x(), u.y(), v.y() }
{
}
double Matrice::operator()( int i, int j ) const
{
  assert( 0 <= i && i <= 1 && 0 <= j && j <= 1 );
  return data[ i ][ j ];
}
double& Matrice::operator()( int i, int j )
{
  assert( 0 <= i && i <= 1 && 0 <= j && j <= 1 );
  return data[ i ][ j ];
}
// les matrices s'additionnent (v3 = v1 + v2)
Matrice Matrice::operator+( const Matrice & v ) const
{
  return Matrice( data[ 0 ][ 0 ] + v.data[ 0 ][ 0 ],
                  data[ 0 ][ 1 ] + v.data[ 0 ][ 1 ],
                  data[ 1 ][ 0 ] + v.data[ 1 ][ 0 ],
                  data[ 1 ][ 1 ] + v.data[ 1 ][ 1 ] );
}
// Permet v2 += v1
Matrice& Matrice::operator+=( const Matrice & v )
{
  data[ 0 ][ 0 ] += v.data[ 0 ][ 0 ];
  data[ 0 ][ 1 ] += v.data[ 0 ][ 1 ];
  data[ 1 ][ 0 ] += v.data[ 1 ][ 0 ];
  data[ 1 ][ 1 ] += v.data[ 1 ][ 1 ];
  return *this;
}
// les matrices se multiplie par un scalaire (v2 = v1 * k)
Matrice Matrice::operator*( double k ) const
{
  return Matrice( k * data[ 0 ][ 0 ], k * data[ 0 ][ 1 ],
                  k * data[ 1 ][ 0 ], k * data[ 1 ][ 1 ] );
}
// permet v1 *= k
Matrice& Matrice::operator*=( double k )
{
  data[ 0 ][ 0 ] *= k;
  data[ 0 ][ 1 ] *= k;
  data[ 1 ][ 0 ] *= k;
  data[ 1 ][ 1 ] *= k;
  return *this;
}
Matrice Matrice::operator*( const Matrice & M ) const
{
  Matrice N;
  for ( int i = 0; i < 2; i++ )
    for ( int j = 0; j < 2; j++ )
      {
        double c = 0.0;
        for ( int k = 0; k < 2; k++ )
          c += (*this)( i, k ) * M( k, j );
        N( i, j ) = c;
      }
  return N;
}

Vecteur Matrice::operator* ( const Vecteur & u ) const
{
  return Vecteur( data[ 0 ][ 0 ] * u.x() + data[ 0 ][ 1 ] * u.y(),
                  data[ 1 ][ 0 ] * u.x() + data[ 1 ][ 1 ] * u.y() );
}

double Matrice::det() const
{
  return data[ 0 ][ 0 ] * data[ 1 ][ 1 ] - data[ 1 ][ 0 ] * data[ 0 ][ 1 ];
}

Matrice Matrice::inverse() const
{
  double d = det();
  double c = d == 0.0 ? NAN : 1.0 / d;
  return c * Matrice( data[ 1 ][ 1 ], - data[ 0 ][ 1 ],
                      - data[ 1 ][ 0 ],  data[ 0 ][ 0 ] );
}
// On note qu'il s'agit d'une faction, pas d'une méthode de la classe
// Matrice. Permet v2 = k * v1
Matrice operator*( double k, const Matrice & v )
{
  Matrice tmp( v );
  return tmp * k;
}

std::ostream& operator<<( std::ostream& out, const Matrice & v )
{
  out << "[ [ " << v( 0, 0 ) << " , " << v( 0, 1 ) << " ]"
      <<  " [ " << v( 1, 0 ) << " , " << v( 1, 1 ) << " ] ]" << std::endl;
  return out;
}
