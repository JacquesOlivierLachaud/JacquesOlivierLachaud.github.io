// Vecteur.cpp
#include "Vecteur.hpp"

// d�clare le vecteur nul (0,0)
Vecteur::Vecteur()
{
  comp[ 0 ] = comp[ 1 ] = 0.0;
}
// d�clare un vecteur (u,v)
Vecteur::Vecteur( double u, double v )
{
  comp[ 0 ] = u;
  comp[ 1 ] = v;
}
// accesseur � la composante x
double Vecteur::x() const
{
  return comp[ 0 ];
}
// accesseur � la composante y
double Vecteur::y() const
{
  return comp[ 1 ];
}
// les vecteurs s'additionnent (v3 = v1 + v2)
Vecteur Vecteur::operator+( const Vecteur & v ) const
{
  return Vecteur( x() + v.x(), y() + v.y() );
}
// Permet v2 += v1
Vecteur& Vecteur::operator+=( const Vecteur & v )
{
  comp[ 0 ] += v.x();
  comp[ 1 ] += v.y();
  return *this;
}
// les vecteurs se multiplie par un scalaire (v2 = v1 * k)
Vecteur Vecteur::operator*( double k ) const
{
  return Vecteur( k * x(), k * y() );
}
// permet v1 *= k
Vecteur& Vecteur::operator*=( double k )
{
  comp[ 0 ] *= k;
  comp[ 1 ] *= k;
  return *this;
}
// On note qu'il s'agit d'une faction, pas d'une m�thode de la classe
// Vecteur. Permet v2 = k * v1
Vecteur operator*( double k, const Vecteur & v )
{
  return Vecteur( k * v.x(), k * v.y() );
}
