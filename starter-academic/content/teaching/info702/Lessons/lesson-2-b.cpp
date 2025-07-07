//---------------------------------------------------------------------
// 2.b Traitement de 2 listes de valeurs de type différent
//---------------------------------------------------------------------
// La surcharge de fonctions permet de donner un même nom à plusieurs fonctions,
// du moment qu'on peut les distinguer par leurs paramètres.
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
void affiche( string t[], int n )
{
  for ( int i = 0; i < n; ++i )
    cout << t[ i ] << " ";
  cout << endl;
}

int main( int argc, char** argv )
{
  double vals[] = { 3.5, 17.2, -20.0, 40.3, 10.5, 14.3, 13.1, 11.0 };
  string noms[] = { "Jean", "Bertrand", "Robert", "Alice", "Léa", "Paul", "Bob", "Cindy" };
  affiche( vals, 8 );
  affiche( noms, 8 );
  return 0;
}
  
