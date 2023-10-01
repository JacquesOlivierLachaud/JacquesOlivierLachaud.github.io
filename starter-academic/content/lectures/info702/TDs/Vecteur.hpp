// Vecteur.hpp
#ifndef _VECTEUR_HPP_
#define _VECTEUR_HPP_

class Vecteur {
  double comp[ 2 ];
public:
  Vecteur(); // déclare le vecteur nul (0,0)
  Vecteur( const Vecteur&  ) = default; // constructeur par copie
  Vecteur( Vecteur&& ) = default; // constructeur par déplacement
  Vecteur& operator=( const Vecteur& ) = default; // v2 = v1
  Vecteur& operator=( Vecteur&& ) = default;      // v2 = Vecteur( ... )
  Vecteur( double u, double v ); // déclare un vecteur (u,v)
  double x() const; // const = indique que la méthode ne 
  double y() const; // change pas les données membres.
  // les vecteurs s'additionnent
  Vecteur  operator+ ( const Vecteur & v ) const; // v3 = v1 + v2
  Vecteur& operator+=( const Vecteur & v );     // v2 += v1
  // les vecteurs se multiplie par un scalaire
  Vecteur  operator* ( double k ) const; // permet v2 = v1 * k
  Vecteur& operator*=( double k );     // permet v1 *= k
};
Vecteur operator*( double k, const Vecteur & v ); // permet v2 = k * v1

#endif
