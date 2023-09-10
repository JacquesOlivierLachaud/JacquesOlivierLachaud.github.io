//---------------------------------------------------------------------
// 2.g Traitement de listes différentes mais dont toutes les valeurs
// sont de même type (PG), lambda-expression
// ---------------------------------------------------------------------
// Le c++11 permet de faire très facilement de la programmation
// fonctionnelle (sans même passer par des classes) grâce aux
// lambda-expressions.
// ---------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

// Fonction générique. Il y a autant de fonctions que de type T et P utilisés.
template <typename T, typename P>
void affiche( T t[], int n, P pred )
{
  for ( int i = 0; i < n; ++i )
    {
      if ( pred( t[ i ] ) )
        cout << t[ i ] << " "; // ne marche que si le type T a défini <<
    }
  cout << endl;
}

int main( int argc, char** argv )
{
  double vals[] = { 3.5, 17.2, -20.0, 40.3, 10.5, 14.3, 13.1, 11.0 };
  string noms[] = { "Jean", "Bertrand", "Robert", "Alice", "Léa", "Paul", "Bob", "Cindy" };
  auto note_valide =
    [] (double x) -> bool { return x >= 0.0 && x <= 20.0; };
  auto dumb_true = 
    [] (double x) -> bool { return true; };
  affiche( vals, 8, dumb_true );
  affiche( vals, 8, note_valide );
  affiche( noms, 8,
	   [] (string s) -> bool { return s.size() > 3; } );
  return 0;
}
  
