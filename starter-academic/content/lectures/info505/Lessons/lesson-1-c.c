/*
  1.c Hello the world (en C)
      les macros
*/
#include <stdio.h>
#define COLOR(X) printf( "\033["X"m" )

int main()
{
  COLOR("1;31");      // rouge 
  COLOR("40");        // bold
  printf( "Hello the World!");
  COLOR("0");         // reset
  printf( "\n" );
  return 0;
}
