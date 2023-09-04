/*
  1.c Hello the world (en C)
      les macros
*/
#include <stdio.h>

void color( char* str )
{
  printf( "\033[%sm", str );
}

int main()
{
  color("1;31");      // rouge 
  color("40");        // bold
  printf( "Hello the World!");
  color("0");         // reset
  printf( "\n" );
  return 0;
}
