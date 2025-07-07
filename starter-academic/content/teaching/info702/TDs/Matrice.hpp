// Matrice.hpp
#ifndef _MATRICE_HPP_
#define _MATRICE_HPP_

#include <iostream>
#include "Vecteur.hpp"

class Matrice {
  // ----- Attributs -------------------
  double data[ 2 ][ 2 ];
public:
  // ----- Constructeurs ---------------
  // Matrice nulle ((0,0),(0,0))
  Matrice(); 
  // copy ctor Matrice m2( m1 );
  Matrice( const Matrice& ) = default; 
  // move ctor Matrice m2( m0 + m1 );
  Matrice( Matrice&& ) = default;
  // ctor from coefs
  Matrice( double c00, double c01,
           double c10, double c11 );
  // ctor from column vectors
  Matrice( const Vecteur& u,
           const Vecteur& v );
  // assigment m2 = m1
  Matrice& operator=( const Matrice &  )
    = default;
  // move assigment m2 = Matrice( ... )
  Matrice& operator=( Matrice && )
    = default;     
  // accès lecture à m( i, j )
  double   operator()( int i, int j ) const; 
  // accès écriture à m( i, j )
  double&  operator()( int i, int j );
  // ----- arithmetic operators --------
  // m3  = m1 + m2
  Matrice  operator+ ( const Matrice & v ) const;
  // m2 += m1
  Matrice& operator+=( const Matrice & v );
  // m2  = m1 * 3.0
  Matrice  operator* ( double k ) const;
  // m2 *= 3.0
  Matrice& operator*=( double k );
  // m3 = m1 * m2
  Matrice  operator* ( const Matrice & M ) const;
  //  v = M * u
  Vecteur  operator* ( const Vecteur & u ) const;
  // ----- inverse services ------------
  // déterminant de la matrice.
  double   det() const;
  // inverse de la matrice.
  Matrice  inverse() const;
  // ----- static services -------------
  // matrice de rotation d'angle theta
  static Matrice rotation( double theta );
};
// A = k * B
Matrice operator*( double k, const Matrice & B );
// display matrix v
std::ostream& operator<<( std::ostream& out, const Matrice & v ); 
#endif


