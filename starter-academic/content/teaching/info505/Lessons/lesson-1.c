/* /\* */
/*   1.a Hello the world (en C) */
/* *\/ */
/* #include <stdio.h> */

/* int main() */
/* { */
/*   printf( "Hello the World!\n"); */
/*   return 0; */
/* } */


/* /\* */
/*   1.b Hello the world (en C) */
/*       en couleur ! */
/* *\/ */
/* #include <stdio.h> */

/* int main() */
/* { */
/*   printf( "\033[1;31m" );      // rouge bold */
/*   printf( "\033[43m" );        // fond noir */
/*   printf( "Hello the World!"); */
/*   printf( "\033[0m" );         // reset */
/*   printf( "\n" ); */
/*   return 0; */
/* } */


/*
  1.c Hello the world (en C)
      les macros
*/
#include <stdio.h>
#define COLOR(X) printf("\033["X"m")
int main()
{
  COLOR("1;31");      // rouge bold
  printf( "Hello the World!");
  COLOR("0");         // reset
  printf( "\n" );
  return 0;
}
