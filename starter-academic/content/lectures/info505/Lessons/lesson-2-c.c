/*
  2.c Affichage d'un damier... boucle for
*/
#include <stdio.h>

int main()
{
  // i++ post-increment : valeur retournee puis la variable est incrementée
  // ++i pre-increment  : la variable est incrementée puis la valeur est retournée
  for ( int i = 0; i < 5; ++i )
    {
      printf( "# # # # # \n");
      printf( " # # # # #\n");
    }
  return 0;
}
