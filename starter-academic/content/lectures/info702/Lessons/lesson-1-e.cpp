//---------------------------------------------------------------------
// 1.e Hello World avec des strings
//---------------------------------------------------------------------
// Le traitement des chaînes de caractères se fait via la classe string
//---------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

int main( int argc, char** argv )
{
  int    nb       = 2;
  string worlds[] = { "Earth", "Mars" };
  string fg_red   = "\033[1;31m";
  string bg_yellow= "\033[43m";
  string reset    = "\033[0m";
  cout << fg_red
            << "Hello " << nb << " worlds : "
            << bg_yellow
            << ( worlds[ 0 ] + ", " + worlds[ 1 ] )
            << reset << endl;
  return 0;
}
