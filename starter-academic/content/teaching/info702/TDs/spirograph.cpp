#include <cmath>
#include <string>
#include <iostream>
#include "Matrice.hpp"

// Petit spirographe: trace des lignes entre des points sur un cercle
// régulièrement espacés
int main( int argc, char* argv[] )
{
  int a = argc > 1 ? std::stoi( argv[ 1 ] ) : 22; 
  int b = argc > 2 ? std::stoi( argv[ 2 ] ) : 37; 
  Vecteur p( 1, 0 );
  Matrice R = Matrice::rotation( a * M_PI / b );
  int n = a * b;
  for ( int i = 0; i < n; i++ )
    {
      std::cout << p.x() << " " << p.y() << std::endl;
      p = R * p;
    }
  return 0;
}
