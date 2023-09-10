//---------------------------------------------------------------------
// 2.a Traitement de listes de valeurs
//---------------------------------------------------------------------
// On peut faire comme en C
//---------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

void affiche( double t[], int n )
{
  for ( int i = 0; i < n; ++i )
    cout << t[ i ] << " ";
  cout << endl;
}

int main( int argc, char* argv[] )
{
  double vals[] = { 3.5, 17.2, -20.0, 40.3, 10.5, 14.3, 13.1, 11.0 };
  affiche( vals, 8 );
  return 0;
}
  
