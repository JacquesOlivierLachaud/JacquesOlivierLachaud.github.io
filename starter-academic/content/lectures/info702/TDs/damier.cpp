#include <string>
#include <iostream>

using namespace std;

string console( string code )
{
  return "\033[" + code + "m";
}

auto   normal      = console("0"); // revient à normal
auto   clignotant  = console("5"); // clignotant
auto   texte_rouge = console("1;31"); // rouge gras
auto   texte_jaune = console("1;33"); // jaune gras
auto   texte_cyan  = console("1;36"); // cyan gras
auto   fond_noir   = console("40");   // fond noir
auto   fond_gris   = console("47");   // fond gris

struct Piece {
  virtual ~Piece() {}
  virtual void affiche() const = 0;
};


class Case {
  bool   m_color;  // couleur
  Piece* m_piece;
public:
  Case() : m_piece( nullptr ) {}
  Case( bool color )
    : m_color( color ), m_piece( nullptr ) {}
  ~Case()
  {
    if ( m_piece != nullptr ) delete m_piece;
  }
  void change( Piece* p )
  { m_piece = p; }
  void affiche() const
  {
    cout << normal << ( m_color ? fond_gris : fond_noir );
    if ( m_piece != nullptr ) m_piece->affiche();
    else cout << "  ";
    cout << normal;
  }
};

class Pion : public Piece {
  int m_joueur;
public:
  Pion( int joueur )
    : m_joueur( joueur ) {}
  virtual void affiche() const override
  {
    cout << ( m_joueur ? texte_rouge : texte_jaune )
         << "()";
  }
};
class Dame : public Piece {
  int m_joueur;
public:
  Dame( int joueur ) // Joueur 0 ou 1
    : m_joueur( joueur ) {}
  virtual void affiche() const override
  {
    cout << ( m_joueur ? texte_rouge : texte_jaune )
         << clignotant << "@@" << normal;
  }
};

struct Damier {
  Case cases[10][10];
  Damier()
  {
    for ( int i = 0; i < 10; i++ )
      for ( int j = 0; j < 10; j++ )
        cases[ i ][ j ] = Case( (i+j) % 2 == 0 );
  }
  void initJoueur( int joueur )
  {
    for ( int i = 0; i < 4; i++ )
      for ( int j = 0; j < 5; j++ )
        {
          int l = joueur ? 9 - i : i;
          int c = i % 2 != joueur ? 2*j : 2*j+1;
          cases[ l ][ c ].change( new Pion( joueur ) );
        }
  }
  void affiche() const
  {
    for ( int i = 0; i < 10; i++ )
      {
        for ( int j = 0; j < 10; j++ )
          cases[ i ][ j ].affiche();
        cout << std::endl;
      }
  }
};


int main()
{
  Damier D;
  D.initJoueur( 0 );
  D.initJoueur( 1 );
  D.cases[0][3].change( new Dame( 0 ) );
  D.affiche();
  // cout << std::endl;
  // D.affiche();
  // cout << texte_rouge << "Youpi les amis" << endl;
  return 0;
}
