//---------------------------------------------------------------------
// 1.a Hello World "à la C"
//---------------------------------------------------------------------
// C++ contient C à 99%. 
//---------------------------------------------------------------------
// Rq:
// - Même code qu'en C, sauf le préfixe c devant l'include d'un header C.
//
// - C++ est juste plus strict sur les types que C, ce qui rend
// - parfois les codes incompatibles

// #include <iostream>

// using namespace std; // pas dans les headers

// int main( int argc, char** argv )
// {
//   cout << "Hello World !" << endl;
//   return 0;
// }


// //---------------------------------------------------------------------
// // 1.b Hello World en couleur version C
// //---------------------------------------------------------------------
// // C++ a toujours le système de macros de C, mais on s'en sert le moins
// // possible
// //---------------------------------------------------------------------

// #include <cstdio>
// #define COLOR(X) printf("\033[%sm",X)
// #define RESET COLOR("0")

// int main( int argc, char** argv )
// {
//   COLOR("1;31"); // Gras et Rouge
//   COLOR("43");   // Jaune
//   printf( "Hello World !" );
//   RESET;
//   printf("\n");
//   return 0;
// }



// //---------------------------------------------------------------------
// // 1.c Hello World "à la C++"
// //---------------------------------------------------------------------
// // Notez la syntaxe dite des flux, beaucoup plus concise et lisible.
// // - possible grâce à la surcharge d'opérateurs
// //---------------------------------------------------------------------

// #include <iostream>

// int main( int argc, char** argv )
// {
//   std::cout << "Hello World !" << std::endl;
//   return 0;
// }


// //---------------------------------------------------------------------
// // 1.d Hello World "à la C++"
// //---------------------------------------------------------------------
// // Notez la syntaxe dite des flux, beaucoup plus concise et lisible.
// // - ici << affiche des chaînes et des entiers
// //---------------------------------------------------------------------

// #include <iostream>
// #include <string>

// int main( int argc, char** argv )
// {
//   int         nb = 3;
//   const char* worlds[3] = { "Earth", "Mars", "Toto" };
//   std::cout << "Entrez un nom de planète et son rayon :";
//   String str; // c'est un objet !! déclarer sur la pile d'exécution
//   std::string str;
//   double rayon;
//   std::cin >> str >> rayon;
//   std::cout << "Hello " << nb << " worlds : "
//             << worlds[ 0 ] << ", " << worlds[ 1 ]
//             << ", " << str << " de rayon " << rayon
//             << std::endl;
//   return 0;
// }


// //---------------------------------------------------------------------
// // 1.e Hello World avec des strings
// //---------------------------------------------------------------------
// // Le traitement des chaînes de caractères se fait via la classe string
// //---------------------------------------------------------------------

// #include <iostream>
// #include <string>

// int main( int argc, char** argv )
// {
//   using namespace std;
//   int    nb       = 2;
//   string worlds[] = { "Earth", "Mars" };
//   string fg_red   = "\033[1;31m";
//   string bg_yellow= "\033[43m";
//   string reset    = "\033[0m";
//   cout << fg_red << bg_yellow
//        << "Hello " << nb << " worlds : "
//        << worlds[ 0 ] + ", " + worlds[ 1 ]
//        << reset << endl;
//   return 0;
// }

//---------------------------------------------------------------------
// 1.f Hello World avec fonction et string + auto
//---------------------------------------------------------------------
// - les fonctions peuvent prendre en entrée n'importe quel type, comme en sortie.
// - dans certains cas, C++ peut deviner le type lui-même.
// - auto: C++11
//---------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

string console( string code )
{
  return "\033[" + code + "m";
}

int main( int argc, char** argv )
{
  int    nb       = 2;
  string worlds[] = { "Earth", "Mars" };
  auto   fg_red   = console("1;31");
  auto   bg_yellow= console("43");
  auto   reset    = console("0");
  cout << fg_red << bg_yellow
       << "Hello " << nb << " worlds : "
       << worlds[ 0 ] + ", " + worlds[ 1 ]
       << reset << endl;
  return 0;
}
