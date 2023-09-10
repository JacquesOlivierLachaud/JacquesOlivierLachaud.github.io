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
  const string worlds[] = { "Earth", "Mars" };
  const auto   fg_red   = console("1;31");
  const auto   bg_yellow= console("43");
  const auto   reset    = console("0");
  cout << fg_red << bg_yellow
       << "Hello " << nb << " worlds : "
       << worlds[ 0 ] + ", " + worlds[ 1 ]
       << reset << endl;
  return 0;
}
