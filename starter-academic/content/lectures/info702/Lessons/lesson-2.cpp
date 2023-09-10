// //---------------------------------------------------------------------
// // 2.a Traitement de listes de valeurs
// //---------------------------------------------------------------------
// // On peut faire comme en C
// //---------------------------------------------------------------------

// #include <iostream>
// #include <string>
// using namespace std;

// void affiche( double t[], int n )
// {
//   for ( int i = 0; i < n; ++i )
//     cout << t[ i ] << " ";
//   cout << endl;
// }

// int main( int argc, char** argv )
// {
//   double vals[] = { 3.5, 17.2, -20.0, 40.3, 10.5, 14.3, 13.1, 11.0 };
//   affiche( vals, 8 );
//   return 0;
// }
  
// //---------------------------------------------------------------------
// // 2.b Traitement de 2 listes de valeurs de type différent
// //---------------------------------------------------------------------
// // La surcharge de fonctions permet de donner un même nom à plusieurs fonctions,
// // du moment qu'on peut les distinguer par leurs paramètres.
// //---------------------------------------------------------------------

// #include <iostream>
// #include <string>
// using namespace std;

// void affiche( double t[], int n )
// {
//   for ( int i = 0; i < n; ++i )
//     cout << t[ i ] << " ";
//   cout << endl;
// }
// void affiche( string t[], int n )
// {
//   for ( int i = 0; i < n; ++i )
//     cout << t[ i ] << " ";
//   cout << endl;
// }

// int main( int argc, char** argv )
// {
//   double vals[] = { 3.5, 17.2, -20.0, 40.3, 10.5, 14.3, 13.1, 11.0 };
//   string noms[] = { "Jean", "Bertrand", "Robert", "Alice", "Léa", "Paul", "Bob", "Cindy" };
//   affiche( vals, 8 );
//   affiche( noms, 8 );
//   return 0;
// }
  
// //---------------------------------------------------------------------
// // 2.b Traitement de 2 listes de valeurs de type différent (POO)
// // ---------------------------------------------------------------------
// // La programmation objet permet de manipuler des objets uniformément,
// // alors qu'ils sont en réalité de type différent.
// // => on utilise l'héritage et le polymorphisme
// // ---------------------------------------------------------------------

// #include <iostream>
// #include <string>
// using namespace std;

// class Affichable
// {
// public:
//   virtual void afficheMoi() = 0;
// };

// class Double : public Affichable
// {
// public:
//   double _val;
//   Double( double v ) : _val( v ) {}
//   virtual void afficheMoi()
//   {
//     cout << _val;
//   }
// };

// class String : public Affichable
// {
// public:
//   string _val;
//   String( string v ) : _val( v ) {}
//   virtual void afficheMoi()
//   {
//     cout << _val;
//   }
// };

// void affiche( Affichable* t[], int n )
// {
//   for ( int i = 0; i < n; ++i )
//     {
//       t[ i ]->afficheMoi(); // notez le -> plutôt que le .
//       cout << " ";
//     }
//   cout << endl;
// }

// int main( int argc, char** argv )
// {
//   double vals[] = { 3.5, 17.2, -20.0, 40.3, 10.5, 14.3, 13.1, 11.0 };
//   // Tableau de pointeurs vers des objets (tous des instances de Double).
//   Affichable* objets1[ 8 ];
//   for ( int i = 0; i < 8; i++ )
//     objets1[ i ] = new Double( vals[ i ] );

//   string noms[] = { "Jean", "Bertrand", "Robert", "Alice", "Léa", "Paul", "Bob", "Cindy" };
//   // Tableau de pointeurs vers des objets (tous des instances de String).
//   Affichable* objets2[ 8 ];
//   for ( int i = 0; i < 8; i++ )
//     objets2[ i ] = new String( noms[ i ] );

//   affiche( objets1, 8 );
//   affiche( objets2, 8 );
//   return 0;
// }
  
// //---------------------------------------------------------------------
// // 2.d Traitement de listes de valeurs de type différent (POO)
// // ---------------------------------------------------------------------
// // L'intérêt de l'héritage et du polymorphisme est de pouvoir manipuler
// // des collections d'objets de types variés de façon homogène.
// // Les inconvénients sont: lourdeur de déclarer plusieurs types, type réel
// // déduit à l'exécution, pointeurs nécessaires pour le polymorphisme.
// // ---------------------------------------------------------------------

// #include <iostream>
// #include <string>
// using namespace std;

// class Affichable
// {
// public:
//   virtual void afficheMoi() = 0;
// };

// class Double : public Affichable
// {
// public:
//   double _val;
//   Double( double v ) : _val( v ) {}
//   virtual void afficheMoi()
//   {
//     cout << _val;
//   }
// };

// class String : public Affichable
// {
// public:
//   string _val;
//   String( string v ) : _val( v ) {}
//   virtual void afficheMoi()
//   {
//     cout << _val;
//   }
// };

// void affiche( Affichable* t[], int n )
// {
//   for ( int i = 0; i < n; ++i )
//     {
//       t[ i ]->afficheMoi(); // notez le -> plutôt que le .
//       cout << " ";
//     }
//   cout << endl;
// }

// int main( int argc, char** argv )
// {
//   double vals[] = { 3.5, 17.2, -20.0, 40.3, 10.5, 14.3, 13.1, 11.0 };
//   string noms[] = { "Jean", "Bertrand", "Robert", "Alice", "Léa", "Paul", "Bob", "Cindy" };
//   // Tableau de pointeurs vers des objets Double.
//   Affichable* objets[ 16 ];
//   for ( int i = 0; i < 8; i++ )
//     {
//       objets[ 2*i ]   = new Double( vals[ i ] );
//       objets[ 2*i+1 ] = new String( noms[ i ] );
//     }
//   affiche( objets, 16 );
//   return 0;
// }
  
// //---------------------------------------------------------------------
// // 2.e Traitement de listes différentes mais dont toutes les valeurs
// // sont de même type (PG)
// // ---------------------------------------------------------------------
// // La programmation générique permet de faire des fonctions et des
// // classes paramétrés par des types. Cela évite les copier/coller. Le
// // compilateur trouve (souvent) tout seul le bon type.
// // ---------------------------------------------------------------------

// #include <iostream>
// #include <string>
// using namespace std;

// // Fonction générique. Il y a autant de fonctions que de type T utilisés.
// template <typename T>
// void affiche( T t[], int n )
// {
//   for ( int i = 0; i < n; ++i )
//     {
//       cout << t[ i ] << " "; // ne marche que si le type T a défini <<
//     }
//   cout << endl;
// }


// int main( int argc, char** argv )
// {
//   double vals[] = { 3.5, 17.2, -20.0, 40.3, 10.5, 14.3, 13.1, 11.0 };
//   string noms[] = { "Jean", "Bertrand", "Robert", "Alice", "Léa", "Paul", "Bob", "Cindy" };
//   affiche( vals, 8 );
//   affiche( noms, 8 );
//   return 0;
// }
  
// //---------------------------------------------------------------------
// // 2.f Traitement de listes différentes mais dont toutes les valeurs
// // sont de même type (PG), utilisation de prédicats
// // ---------------------------------------------------------------------
// // La programmation générique permet de faire des fonctions et des
// // classes paramétrés par des types. Cela évite les copier/coller. Le
// // compilateur trouve (souvent) tout seul le bon type.
// // ---------------------------------------------------------------------

// #include <iostream>
// #include <string>
// using namespace std;

// // Fonction générique. Il y a autant de fonctions que de type T et P utilisés.
// template <typename T, typename P>
// void affiche( T t[], int n, P pred )
// {
//   for ( int i = 0; i < n; ++i )
//     {
//       if ( pred( t[ i ] ) )
//         cout << t[ i ] << " "; // ne marche que si le type T a défini <<
//     }
//   cout << endl;
// }

// struct NoteValide {
//   bool operator()( double v )
//   { return v >= 0.0 && v <= 20.0; }
// };

// struct PlusDe3Lettres {
//   bool operator()( string v )
//   { return v.size() > 3; }
// };

// int main( int argc, char** argv )
// {
//   double vals[] = { 3.5, 17.2, -20.0, 40.3, 10.5, 14.3, 13.1, 11.0 };
//   string noms[] = { "Jean", "Bertrand", "Robert", "Alice", "Léa", "Paul", "Bob", "Cindy" };
//   affiche( vals, 8, NoteValide() );
//   affiche( noms, 8, PlusDe3Lettres() );
//   return 0;
// }
  
//---------------------------------------------------------------------
// 2.g Traitement de listes différentes mais dont toutes les valeurs
// sont de même type (PG), lambda-expression
// ---------------------------------------------------------------------
// Le c++11 permet de faire très facilement de la programmation
// fonctionnelles (sans même passer par des classes) grâce aux
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
  affiche( vals, 8,
           [] (double x) { return x >= 0.0 && x <= 20.0; }
           );
  affiche( noms, 8,
           [] (string s) { return s.size() <= 4; }
           );
  return 0;
}
  
