//---------------------------------------------------------------------
// 2.e Traitement de listes différentes mais dont toutes les valeurs
// sont de même type (PG)
// ---------------------------------------------------------------------
// La programmation générique permet de faire des fonctions et des
// classes paramétrés par des types. Cela évite les copier/coller. Le
// compilateur trouve (souvent) tout seul le bon type.
// ---------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

// Fonction générique. Il y a autant de fonctions que de type T utilisés.
template <typename T>
void affiche( T t[], int n )
{
  for ( int i = 0; i < n; ++i )
    cout << t[ i ] << " "; // ne marche que si le type T a défini <<
  cout << endl;
}

/*
struct Pair {
  double x;
  double y;
};

std::ostream&
operator<<( std::ostream& out, Pair p )
{
  out << "(" << p.x << "," << p.y << ")";
  return out;
}
*/

int main( int argc, char** argv )
{
  double vals[] = { 3.5, 17.2, -20.0, 40.3, 10.5, 14.3, 13.1, 11.0 };
  string noms[] = { "Jean", "Bertrand", "Robert", "Alice", "Léa", "Paul", "Bob", "Cindy" };
  int       t[] = { 3, 17, -20, 40, 10, 14, 13, 11 };
  // Pair      p[] = { { 3.2, 4.5 }, {0.0, -1.0 }, { -1.2, 3.1} };
  affiche( vals, 8 );
  affiche( noms, 8 );
  affiche(    t, 8 );
  // affiche(    p, 3 );
  return 0;
}
  
