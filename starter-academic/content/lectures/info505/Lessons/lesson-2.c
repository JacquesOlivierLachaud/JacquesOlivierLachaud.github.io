/* /\* */
/*   2.a Affichage d'un damier... sans boucles */
/* *\/ */
/* #include <stdio.h> */

/* int main() */
/* { */
/*   printf( "# # # # # \n"); */
/*   printf( " # # # # #\n"); */
/*   printf( "# # # # # \n"); */
/*   printf( " # # # # #\n"); */
/*   printf( "# # # # # \n"); */
/*   printf( " # # # # #\n"); */
/*   printf( "# # # # # \n"); */
/*   printf( " # # # # #\n"); */
/*   printf( "# # # # # \n"); */
/*   printf( " # # # # #\n"); */
/*   return 0; */
/* } */





/* /\* */
/*   2.b Affichage d'un damier... boucle while */
/* *\/ */
/* #include <stdio.h> */

/* int main() */
/* { */
/*   int i = 0; // définit une variable nommée i de type int (entier 32bits) */
/*   while ( i < 5 ) */
/*     { */
/*       printf( "# # # # # \n"); */
/*       printf( " # # # # #\n"); */
/*       i++; */
/*     } */
/*   return 0; */
/* } */



/* /\* */
/*   2.c Affichage d'un damier... boucle for */
/* *\/ */
/* #include <stdio.h> */

/* int main() */
/* { */
/*   for ( int i = 0; i < 3; i++ ) */
/*     { */
/*       printf( "# # # # # \n"); */
/*       printf( " # # # # #\n"); */
/*     } */
/*   return 0; */
/* } */



/* /\* */
/*   2.d Affichage d'un damier... */
/*   - récupération de paramètres */
/*   - boucle for */
/* *\/ */
/* #include <stdlib.h> */
/* #include <stdio.h> */

/* int main( int youpi, char* hiphop[] ) */
/* { */
/*   printf( "nb args   = %d \n", youpi ); */
/*   printf( "args[ 0 ] = %s \n", hiphop[ 0 ] ); */
/*   printf( "args[ 1 ] = %s \n", hiphop[ 1 ] ); */
/*   int nblignes = atoi( hiphop[ 1 ] ); */
/*   for ( int i = 0; i < nblignes; i++ ) */
/*     { */
/*       printf( "# # # # # \n"); */
/*       printf( " # # # # #\n"); */
/*     } */
/*   return 0; */
/* } */





/* /\* */
/*   2.e Affichage d'un damier de taille quelconque */
/*   - récupération de paramètres */
/*   - boucle for */
/*   - test if */
/* *\/ */
/* #include <stdlib.h> */
/* #include <stdio.h> */

/* int main( int argc, char* argv[] ) */
/* { */
/*   int nblignes = atoi( argv[ 1 ] ); */
/*   int nbcolonnes = atoi( argv[ 2 ] ); */
/*   for ( int i = 0; i < nblignes; i++ ) */
/*     { */
/*       for ( int j = 0; j < nbcolonnes; j++ ) */
/*         { */
/*           if ( i = 0 ) printf( "#" ); */
/*           else                  printf( " " ); */
/*         } */
/*       printf( "\n" ); */
/*     } */
/*   return 0; */
/* } */


/*
  2.e Affichage d'un damier de taille quelconque
  - récupération de paramètres
  - boucle for
  - test if
  - avec des couleurs
*/
#include <stdlib.h>
#include <stdio.h>
#define COLOR(X) printf("\033["X"m")

void usage( int argc, char* argv[] )
{
  printf( "Usage: %s <nblignes> <nbcolonnes> \n", argv[ 0 ] );
  printf( "       - affiche un damier de taille nblignes x nbcolonnes.\n" );
}
int main( int argc, char* argv[] )
{
  if ( argc < 3 )
    {
      usage( argc, argv );
      return 0;
    }
  int nblignes = atoi( argv[ 1 ] );
  int nbcolonnes = atoi( argv[ 2 ] );
  for ( int i = 0; i < nblignes; i++ )
    {
      for ( int j = 0; j < nbcolonnes; j++ )
        {
          if ( (i+j) % 2 == 0 ) COLOR("40");
          else                  COLOR("0");
          printf("  ");
        }
      COLOR("0");
      printf( "\n" );
    }
  return 0;
}
