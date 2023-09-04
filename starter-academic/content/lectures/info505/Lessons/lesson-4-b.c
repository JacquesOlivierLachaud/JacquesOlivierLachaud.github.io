/*
Pile d'exécution
*/
#include <stdlib.h>
#include <stdio.h>

void f( int i, int k, double x )
{
  int    j = i*i;
  double y = x*x;
  printf( "&i    : %p %d\n", &i   , i   );
  printf( "&k    : %p %d\n", &k   , k   );
  printf( "&x    : %p %f\n", &x   , x   );
  printf( "&j    : %p %d\n", &j   , j   );
  printf( "&y    : %p %f\n", &y   , y   );
}

int main( int argc, char** argv )
{
  int a = 42;
  int u[ 4 ] = { 5, 8, 13, 21 };
  printf( "&a    : %p %d\n", &a   ,  a    );
  printf( "&u[0] : %p %d\n", &u[0],  u[0] );
  printf( "&u[1] : %p %d\n", &u[1],  u[1] );
  printf( "&u[2] : %p %d\n", &u[2],  u[2] );
  printf( "&u[3] : %p %d\n", &u[3],  u[3] );
  printf( "--- appel  f( a, 5, 3.0 ) -----\n" );
  f( a, 5, 3.0 );
  printf( "--- retour f( a, 5, 3.0 ) -----\n" );
  printf( "&u[0] : %p %d\n", &u[0],  u[0] );
  return 0;
}
