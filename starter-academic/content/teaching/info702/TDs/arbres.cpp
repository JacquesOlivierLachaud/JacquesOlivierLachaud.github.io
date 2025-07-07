#include <iostream>
#include <vector>

/// Arbre represents a binary tree.
///
/// @tparam T represents the type of a value and is any model of
/// DefaultConstructible, Assignable
template <typename T>
struct Arbre {
  // type interne Arbre<T>::Node
  struct Node {
    T     value;
    Node* father;
    Node* left;
    Node* right;
    Node( const T& val, Node* pere = nullptr, Node* gauche = nullptr,
          Node* droite = nullptr )
      : value( val ), father( pere ), left( gauche ), right( droite ) {}
  };

  /// mutable Iterator on nodes of the tree
  struct Iterator {
    Iterator( Node* n = nullptr ) : current( n ) {}
    // Iterator( const Iterator& other ) = default;
    Iterator( const Iterator& other ) = default;
    Iterator& operator=( const Iterator& other ) = default;
    bool operator==( const Iterator& other ) const
    { return current == other.current; }
    bool operator!=( const Iterator& other ) const
    { return current != other.current; }

    // Indirection (non mutable)
    T operator*() const { return current->value; }
    // Indirection (mutable)
    T& operator*() { return current->value; }
    // Indirection -> to access a member
    T* operator->() { return &(current->value); }
    
    // pre-increment ++it;
    Iterator& operator++()
    {
      next();
      return *this;
    }
    // post-increment it++;
    Iterator operator++( int )
    {
      Iterator tmp( *this );
      next();
      return tmp;
    }

    void next()
    { // current doit etre != nullptr.
      if ( current->right != nullptr ) {
        // On descend le plus a gauche de son fils droit
        current = current->right;
        while ( current->left != nullptr ) current = current->left;
      }
      else {
        // On remonte tant qu'on etait le fils droit de son pere
        while ( current != nullptr ) {
          if ( current->father != nullptr && current->father->left == current ) {
            current = current->father;
            return;
          }
          current = current->father;
        }
      }
    }
    Node* current;
  };
  
  // On souhaite pouvoir cr ́eer un arbre l’arbre vide, ainsi que
  // l’arbre `a 1 ́el ́ement. L’arbre doit pouvoir donner sa taille.

  /// Default constructor. The tree is empty.
  Arbre() : _root( nullptr ), _nb( 0 ) {}
  /// Constructor with one element.
  Arbre( const T& val )
  {
    _nb   = 1;
    _root = new Node( val );
  }
  /// Destructor. Not trivial
  ~Arbre()
  {
    destroy( _root );
  }
  /// @return the number of nodes in the tree
  int size() const { return _nb; }

  /// @return an iterator on the root
  Iterator root()
  { return Iterator( _root ); }

  /// @pre \a it is not end()
  /// ..
  Iterator left( Iterator it )
  {
    return Iterator( it.current->left );
  }
  Iterator right( Iterator it )
  {
    return Iterator( it.current->right );
  }
  
  /// @return the iterator on the first infixed node (leftmost node).
  Iterator begin()
  {
    Node* n = _root;
    if ( n != nullptr )
      while ( n->left != nullptr ) n = n->left;
    return Iterator( n );
  }
  /// @return the past-the-end iterator
  Iterator end()
  { return Iterator( nullptr ); }
  
    
  void insertLeft( Iterator it, T value )
  {
    destroy( it.current->left );
    it.current->left = new Node( value, it.current );
    ++_nb;
  }
  void insertRight( Iterator it, T value )
  {
    destroy( it.current->right );
    it.current->right = new Node( value, it.current );
    ++_nb;
  }

  // destruction
  void destroy( Node* n )
  {
    if ( n != nullptr ) {
      destroy( n->left );
      destroy( n->right );
      delete n;
      --_nb;
    }
  }
  
  private:
  Node* _root;
  int   _nb;
};


// Plusieurs solutions: avoir une donnee membre de type Arbre<T>
// ou deriver de Arbre<T>. C'est ce qu'on choisit ici. On cache la
// classe Arbre car on ne veut pas que l'utilisateur ait acces a
// toutes les methodes de la classe arbre.
template <typename T>
struct ABR : protected Arbre<T> {
  typedef typename Arbre<T>::Iterator Iterator;
  using Arbre<T>::root;
  using Arbre<T>::begin;
  using Arbre<T>::end;
  using Arbre<T>::left;
  using Arbre<T>::right;
  using Arbre<T>::insertLeft;
  using Arbre<T>::insertRight;
  
  ABR( T val ) : Arbre<T>( val ) {}
  void insert( T val )
  {
    Iterator it = root();
    while ( true ) {
      if ( val < *it ) {
        if ( left( it ) != end() ) it = left( it );
        else { insertLeft( it, val ); break; }
      } else {
        if ( right( it ) != end() ) it = right( it );
        else { insertRight( it, val ); break; }
      }        
    }
  }
};

int main()
{
  ABR<int> A( 20 );
  std::vector<int> V { 12, 29, 4, 8, 17, 34, 25, 11, 10, 14, 2, 25 };
  std::cout << "Insertion... " << std::endl;
  for ( auto v : V ) A.insert( v );
  std::cout << "Affichage... " << std::endl;
  for ( auto i : A ) std::cout << " " << i;
  std::cout << std::endl;
  return 0;  
}
