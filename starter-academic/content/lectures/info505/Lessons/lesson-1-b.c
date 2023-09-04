/*
  1.b Hello the world (en C)
      en couleur !
*/
#include <stdio.h>

int main()
{
  printf( "\033[1;31m" );      // rouge bold
  printf( "\033[40m" );        // fond noir
  printf( "Hello the World!");
  printf( "\033[0m" );         // reset
  printf( "\n" );
  return 0;
}
