//---------------------------------------------------------------------
// 1.b Hello World en couleur version C
//---------------------------------------------------------------------
// C++ a toujours le système de macros de C, mais on s'en sert le moins
// possible
//---------------------------------------------------------------------

#include <cstdio>
#define COLOR(X) printf("\033[%sm",X)
#define RESET COLOR("0")

int main( int argc, char** argv )
{
  COLOR("1;31"); // Gras et Rouge
  COLOR("43");   // Jaune
  printf( "Hello World !" );
  RESET;
  printf("\n");
  return 0;
}
