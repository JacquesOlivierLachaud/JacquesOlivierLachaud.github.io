//---------------------------------------------------------------------
// 2.d Traitement de listes de valeurs de type différent (POO)
// ---------------------------------------------------------------------
// L'intérêt de l'héritage et du polymorphisme est de pouvoir manipuler
// des collections d'objets de types variés de façon homogène.
// Les inconvénients sont: lourdeur de déclarer plusieurs types, type réel
// déduit à l'exécution, pointeurs nécessaires pour le polymorphisme.
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
public:
  double _val;
  Double( double v ) : _val( v ) {}
  virtual void afficheMoi()
  {
    cout << "(double:" << _val << ")";
  }
};

class String : public Affichable
{
public:
  string _val;
  String( string v ) : _val( v ) {}
  virtual void afficheMoi()
  {
    cout << "(string: " << _val << ")";
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
  string noms[] = { "Jean", "Bertrand", "Robert", "Alice", "Léa", "Paul", "Bob", "Cindy" };
  // Tableau de pointeurs vers des objets Double.
  Affichable* objets[ 16 ];
  for ( int i = 0; i < 8; i++ )
    {
      objets[ 2*i ]   = new Double( vals[ i ] );
      objets[ 2*i+1 ] = new String( noms[ i ] );
    }
  affiche( objets, 16 );
  return 0;
}
  
