//---------------------------------------------------------------------
// 2.b Traitement de 2 listes de valeurs de type différent (POO)
// ---------------------------------------------------------------------
// La programmation objet permet de manipuler des objets uniformément,
// alors qu'ils sont en réalité de type différent.
// => on utilise l'héritage et le polymorphisme
// ---------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

class Affichable
{
public:
  virtual void afficheMoi() = 0;
};

class Double : public Affichable
{
  double _val;
public:
  Double( double v ) : _val( v ) {}
  virtual void afficheMoi()
  {
    cout << "(d:" << _val << ")";
  }
};

class String : public Affichable
{
  string _val;
public:
  String( string v ) : _val( v ) {}
  virtual void afficheMoi()
  {
    cout << "(s:" << _val << ")";
  }
};

void affiche( Affichable* t[], int n )
{
  for ( int i = 0; i < n; ++i )
    {
      t[ i ]->afficheMoi(); // notez le -> plutôt que le .
      cout << " ";
    }
  cout << endl;
}

int main( int argc, char** argv )
{
  double vals[] = { 3.5, 17.2, -20.0, 40.3, 10.5, 14.3, 13.1, 11.0 };
  // Tableau de pointeurs vers des objets (tous des instances de Double).
  Affichable* objets1[ 8 ];
  for ( int i = 0; i < 8; i++ )
    objets1[ i ] = new Double( vals[ i ] );

  string noms[] = { "Jean", "Bertrand", "Robert", "Alice", "Léa", "Paul", "Bob", "Cindy" };
  // Tableau de pointeurs vers des objets (tous des instances de String).
  Affichable* objets2[ 8 ];
  for ( int i = 0; i < 8; i++ )
    objets2[ i ] = new String( noms[ i ] );

  affiche( objets1, 8 );
  affiche( objets2, 8 );
  return 0;
}
  
