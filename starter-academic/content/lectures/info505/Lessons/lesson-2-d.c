/*
  2.d Affichage d'un damier... 
  - récupération de paramètres 
  - boucle for
*/
#include <stdlib.h>
#include <stdio.h>

int main( int argc, char* argv[] )
{
  printf( "argc=%d\n",    argc      );
  printf( "argv[0]=%s\n", argv[ 0 ] );
  // int nblignes = ( argc >= 2 ) ? atoi( argv[ 1 ] ) : 0;

  int nblignes;
  if ( argc >= 2 ) nblignes = atoi( argv[ 1 ] );
  else             nblignes = 0;

  for ( int i = 0; i < nblignes; i++ )
    {
      printf( "# # # # # \n");
      printf( " # # # # #\n");
    }
  return 0;
}
