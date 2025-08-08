/*
Pile d'exécution
*/
#include <stdlib.h>
#include <stdio.h>

void f( int t[ 4 ] )
{
  printf( "&t[0] : %p %d\n", &t[0],  t[0] );
  printf( "&t[1] : %p %d\n", &t[1],  t[1] );
  printf( "&t[2] : %p %d\n", &t[2],  t[2] );
  printf( "&t[3] : %p %d\n", &t[3],  t[3] );
  printf( "&t    : %p %p\n", &t   ,  t    );
  printf( " t    : %p %d\n",  t   , *t    );
  // t += 1; /* valide !!!! */
}

int main( int argc, char** argv )
{
  int u[ 4 ] = { 5, 8, 13, 21 };
  printf( "&u[0] : %p %d\n", &u[0],  u[0] );
  printf( "&u[1] : %p %d\n", &u[1],  u[1] );
  printf( "&u[2] : %p %d\n", &u[2],  u[2] );
  printf( "&u[3] : %p %d\n", &u[3],  u[3] );
  printf( "&u    : %p %p\n", &u   ,  u    );
  printf( " u    : %p %d\n",  u   , *u    );
  // u += 1; /* invalide */
  printf( "------ appel  f( u ) ------\n" );
  f( u );
  printf( "------ retour f( u ) ------\n" );
}
