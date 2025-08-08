/*
  2.e Affichage d'un damier de taille quelconque
  - récupération de paramètres 
  - boucle for
  - test if
*/
#include <stdlib.h>
#include <stdio.h>

int main( int argc, char* argv[] )
{
  if ( argc < 3 ) return 1;
  int   nblignes = atoi( argv[ 1 ] );
  int nbcolonnes = atoi( argv[ 2 ] );
  for ( int i = 0; i < nblignes; i++ )
    {
      for ( int j = 0; j < nbcolonnes; j++ )
        {
          /* char* s = ( (i+j) % 2 == 0 ) ? "##" : ".."; */
          /* printf( "%s", s ); */
          if ( (i+j) % 2 == 0 ) printf( "##" );
          else                  printf( "  " );
        }
      printf( "\n" );
    }
  return 0;
}
