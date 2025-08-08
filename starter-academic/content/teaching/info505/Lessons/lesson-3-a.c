/*
  3.a Labyrinthe
  - récupération de paramètres 
  - boucle for
  - test if
  - avec des couleurs
  - récursivité
  - fonctions bits à bits
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define COLOR(X) printf("\033["X"m")
#define COLORBG(X) printf("\e[48;"X"m")
#define COLORFG(X) printf("\e[38;"X"m")

#define LIGNES   21
#define COLONNES 37

/* Déclaration des types et fonctions */
int  aleatoire  ( int N );
void afficheCase( char c );

typedef char Labyrinthe[ LIGNES ][ COLONNES ];

void Labyrinthe_init   ( Labyrinthe L );
void Labyrinthe_affiche( Labyrinthe L );
void Labyrinthe_update ( Labyrinthe L );
void Labyrinthe_setCase( Labyrinthe L, char c, int x, int y );

/* Définition des fonctions */

// Retourne un nombre aleatoire entre 0 et N-1
int aleatoire( int N )
{
  return rand() % N;
}

// Affiche une case en couleur selon c
void afficheCase( char c )
{
  switch( c ) {
  case ' ': COLORBG("0");  break;
  case '#': COLORBG("2;100;100;200"); break;
  case 'E': COLORBG("41"); break;
  case 'O': COLORBG("42"); break;
  case 'T': COLORBG("43"); break;
  case '.': COLORBG("45"); break;
  }
  printf( "  " );
}

// Initialise L a une grille de cellules avec toutes les portes fermees
void Labyrinthe_init( Labyrinthe L )
{
  for ( int i = 0; i < LIGNES; i++ )
    for ( int j = 0; j < COLONNES; j++ )
      L[ i ][ j ] = '#';
  for ( int i = 1; i < LIGNES; i += 2 )
    for ( int j = 1; j < COLONNES; j += 2 )
      L[ i ][ j ] = ' ';
}

// Affiche le labyrinthe L
void Labyrinthe_affiche( Labyrinthe L )
{
  for ( int i = 0; i < LIGNES; i++ )
    {
      for ( int j = 0; j < COLONNES; j++ )
        {
          afficheCase( L[ i ][ j ] );
        }
      COLORBG( "0" );
      printf("\n");
    }
}

// Ouvre aleatoirement une porte dans le labyrinthe L
void Labyrinthe_update( Labyrinthe L )
{
  int x = 1+aleatoire( COLONNES-3 );  
  int y = 1+aleatoire( LIGNES-3 );  
  if ( aleatoire(2) == 0 )
    {
      x = (x+1) & 0xfffffffe; // rend (x+1) pair
      y = y | 0x1;            // rend y impair
    }
  else
    {
      x = x | 0x1;            // rend x impair
      y = (y+1) & 0xfffffffe; // rend (y+1) pair
    }
  L[ y ][ x ] = ' ';
}

// Change a c la valeur de la case x,y du labyrinthe L
void Labyrinthe_setCase( Labyrinthe L, char c, int x, int y )
{
  L[ y ][ x ] = c;
}

// Explore L a partir de (x,y) en regardant d'abord si on est a la sortie,
// sinon regarde recursivement les cases a cote.
int Labyrinthe_explore( Labyrinthe L, int x, int y )
{
  if ( L[ y ][ x ] == 'O' ) return 1;
  L[ y ][ x ] = '.';
  int val = 0;
  if ( L[ y-1 ][ x ] == ' ' || L[ y-1 ][ x ] == 'O' )
    val = val || Labyrinthe_explore( L, x, y-1 );
  if ( val == 0 && ( L[ y+1 ][ x ] == ' ' || L[ y+1 ][ x ] == 'O' ) )
    val = val || Labyrinthe_explore( L, x, y+1 );
  if ( val == 0 && ( L[ y ][ x-1 ] == ' ' || L[ y ][ x-1 ] == 'O' ) )
    val = val || Labyrinthe_explore( L, x-1, y );
  if ( val == 0 && ( L[ y ][ x+1 ] == ' ' || L[ y ][ x+1 ] == 'O' ) )
    val = val || Labyrinthe_explore( L, x+1, y );
  if ( val == 1 ) /* trouve */
    L[ y ][ x ] = 'T';
  return val;
}

// Programme principal.
// argv[1] donne le nombre de portes à ouvrir.
int main( int argc, char* argv[] )
{
  time_t t;
  srand( time( &t ) );
  int nb = argc > 1 ? atoi( argv[ 1 ] ) : (LIGNES*COLONNES / 4);
  /* Initialise le labyrinthe */
  Labyrinthe M;
  Labyrinthe_init( M );
  /* Enlève nb murs. */
  for (int i = 0; i < nb; ++i ) Labyrinthe_update( M );
  /* Définit une position de départ. */
  int enter_x = ( 1+aleatoire( COLONNES-2 ) ) | 0x1;
  int enter_y = ( 1+aleatoire( LIGNES-2 ) ) | 0x1;
  /* Définit une position d'arrivée. */
  Labyrinthe_setCase( M, 'O',
                      ( 1+aleatoire( COLONNES-2 ) ) | 0x1,
                      ( 1+aleatoire( LIGNES-2 ) ) | 0x1 );
  /* Explore à partir du point de départ. */
  Labyrinthe_explore( M, enter_x, enter_y );
  /* Marque le point de départ et affiche le labyrinthe et le chemin
     pris */
  Labyrinthe_setCase( M, 'E', enter_x, enter_y );
  Labyrinthe_affiche( M );
  return 0;
}
