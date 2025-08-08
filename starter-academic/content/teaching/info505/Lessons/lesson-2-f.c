/*
  2.e Affichage d'un damier de taille quelconque
  - récupération de paramètres 
  - boucle for
  - test if
  - avec des couleurs
*/
#include <stdlib.h>
#include <stdio.h>
//#define COLOR(X) printf("\033["X"m")
#define COLORBG(X) printf("\e[48;"X"m")
#define COLORFG(X) printf("\e[38;"X"m")

int main( int argc, char* argv[] )
{
  if ( argc < 3 ) {
    printf( "Usage: %s nblignes nbcolonnes\n", argv[ 0 ] );
    printf( " Too few arguments: %d < 3\n", argc );
    return 1;
  }
  int   nblignes = atoi( argv[ 1 ] );
  int nbcolonnes = atoi( argv[ 2 ] );
  for ( int i = 0; i < nblignes; i++ )
    {
      for ( int j = 0; j < nbcolonnes; j++ )
        {
          if ( (i+j) % 2 == 0 ) COLORBG("2;255;250;240");
          else                  COLORBG("2;50;35;25");
          printf("  ");
        }
      COLOR("0");
      printf( "\n" );
    }
  return 0;
}
