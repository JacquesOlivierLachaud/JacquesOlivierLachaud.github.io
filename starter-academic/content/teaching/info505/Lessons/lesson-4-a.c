/*
Pile d'exécution
*/
#include <stdlib.h>
#include <stdio.h>

// - paramètres et variables locales sont proches en mémoire.
// - les cases d'un tableau se suivent en mémoire
// - un entier prend 4 octets
// - l'adresse d'un tableau est l'adresse de sa première case et sa valeur
// => un tableau n'est pas une variable, mais un pointeur non déplaçable
int main( int argc, char** argv )
{
  int a = 42;
  int u[ 4 ] = { 5, 8, 13, 21 };
  printf( "&argc : %p %d\n", &argc,  argc );
  printf( "&argv : %p %p\n", &argv,  argv );
  printf( " argv : %p %s\n",  argv, *argv ); // idem argv[ 0 ]
  printf( "&a    : %p %d\n", &a   ,  a    );
  printf( "&u[0] : %p %d\n", &u[0],  u[0] );
  printf( "&u[1] : %p %d\n", &u[1],  u[1] );
  printf( "&u[2] : %p %d\n", &u[2],  u[2] );
  printf( "&u[3] : %p %d\n", &u[3],  u[3] );
  printf( "&u    : %p %p\n", &u   ,  u    );
  printf( " u    : %p %d\n",  u   , *u    );
  // u += 1; /* operation invalide */
  return 0;
}
