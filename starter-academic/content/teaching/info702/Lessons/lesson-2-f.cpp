//---------------------------------------------------------------------
// 2.f Traitement de listes différentes mais dont toutes les valeurs
// sont de même type (PG), utilisation de prédicats
// ---------------------------------------------------------------------
// La programmation générique permet de faire des fonctions et des
// classes paramétrés par des types. Cela évite les copier/coller. Le
// compilateur trouve (souvent) tout seul le bon type.
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

struct NoteValide {
  bool operator()( double v )
  { return v >= 0.0 && v <= 20.0; }
};

struct PlusDe3Lettres {
  bool operator()( string v )
  { return v.size() > 3; }
};

int main( int argc, char** argv )
{
  double vals[] = { 3.5, 17.2, -20.0, 40.3, 10.5, 14.3, 13.1, 11.0 };
  string noms[] = { "Jean", "Bertrand", "Robert", "Alice", "Lea", "Paul", "Bob", "Cindy" };
  affiche( vals, 8, NoteValide() );
  affiche( noms, 8, PlusDe3Lettres() );
  return 0;
}
  
