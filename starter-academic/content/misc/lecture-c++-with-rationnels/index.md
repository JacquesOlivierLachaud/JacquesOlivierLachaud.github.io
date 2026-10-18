---
title: INFO702 - Cours 1 (POO, surcharge) C++ / rationnels
summary: Cours C++ POO/surcharge
date: 2026-10-18
type: docs
tags:
  - lecture
  - c++
---

## POO/surcharge via la construction d'une classe représentant les rationnels

<a style="color:#907bf7;">[Jacques-Olivier Lachaud, August 2025]</a>

L'objectif de cette série d'exercices est de construire progressivement une classe en C++ représentant les rationnels (`Rational`), en introduisant pas à pas les concepts de programmation orientée objet et de surcharge d'opérateurs.

---

### Niveau 1 : Bases de la classe Rational

1. **Structures, classes en C++**

> **Structures, classes en C++** Comme beaucoup de langages, le C++
> offre un moyen de définir de nouveaux types complexes en agrégeant
> les types déjà créés via des structures (enregistrements, record,
> classes). Il offre deux mot-clés très similaires pour le faire:
> `struct` et `class`.

> La différence réside uniquement dans le fait que, par défaut, une
> structure est *publique*, et que donc des fonctions extérieures
> à la structure peuvent accéder aux champs et aux méthodes de la
> structure, tandis qu'une classe est par défaut *privée* et
> interdit à toute fonction extérieure d'accéder à ses données :
> seules ses méthodes ont ce droit-là. On voit donc que les deux
> mot-clés ont été conservés uniquement pour que les structures aient
> par défaut les mêmes propriétés qu'en langage C, tandis que les
> classes poussent le programmeur à préserver l'*encapsulation*
> des données.

```
// C             | C++            
struct Point {   | class Point {
double _x;     |   double _x; // en fait privé
double _y;     |   double _y; // en fait privé
};               | };
...             | ...
Point p = {3,2}; | Point p = {3,2}; // invalide
p._x = 17; // ok | p._x = 17; // invalide
```

> L'initialisation des données membres d'une classe se fait via des
> méthodes, soit à la construction de l'objet via un constructeur,
> soit après via d'autres méthodes (type setter ou autres).

```
// Les constructeurs et destructeurs sont des méthodes sans valeur de retour
class A {
public:  // essentiel sinon non accessibles
~A()     { ... } // destructeur
A()      { ... } // constructeur par défaut
A(int i) { ... } // constructeur avec un entier
A(A& a)  { ... } // constructeur par copie
};
```

1.1 **Définir une classe `Rational`** avec deux attributs privés `num` (numérateur) et `den` (dénominateur).  
   Ajouter :
   - un constructeur prenant deux entiers `(p, q)` ;
   - un constructeur par défaut représentant `0/1`.
   - créer un code qui instancie les rationnels 1/2 et 4/3.
   
   >
   > :thinking: Pourquoi n'a-t-on pas besoin d'écrire un constructeur par copie ?
   >

> **Chaînes de caractères** On peut utiliser en C++ le même mécanisme
> que le C pour les chaînes de caractères, c'est-à-dire les tableaux
> de caractères terminés par le caractère 0 (ou `'\0'`). Néanmoins, on
> sait que ce n'est pas toujours pratique, notamment si on veut
> augmenter ou diminuer la taille de la chaîne. La STL fournit une
> classe `string` (dans le namespace `std`) extrêmement pratique pour
> manipuler les chaînes de caractères. Grâce à elle, il n'y a aucun
> risque de dépassement de capacité, et on peut concaténer, découper,
> dupliquer les chaînes très facilement.  On dispose des méthodes
> `std::to_string(...)` pour convertir des types de base vers un
> `string`.

1.2. **Ajouter une méthode `toString()`** qui retourne une chaîne de caractères de la forme `"num/den"`.  
   Tester la création et l’affichage de quelques rationnels.

   **Ajouter deux accesseurs `n()` et `d()`** en lecture pour le numérateur et dénominateur.

   > :thinking: Pourquoi veut-on que `num` et `den` soit privé ? On
   > pourrait juste les rendre publique et ne pas faire
   > d'accesseur. Quel(s) serai(en)t le(s) défaut(s) de cette approche
   > ?

---

### Niveau 2 : Invariants et simplification

3. **Modifier la classe** pour que le signe soit toujours porté par le numérateur (le dénominateur doit rester positif).


4. **Écrire une méthode statique privée `gcd(int a, int b)`** qui calcule le PGCD.  
   Ajouter une méthode `reduce()` qui simplifie le rationnel.  
   Appeler `reduce()` dans le constructeur.

   > :memo: On rappelle qu'on utilise la formule `gcd(a,b)=gcd(b, a % b)`
   > si `b > a > 0` et `gcd(a,0)=a` sinon.

   > :warning: Faut-il faire attention au signe de a ou b dans la
   > fonction `gcd` ? Si oui ou non, pourquoi ?

   > :thinking: Pourquoi veut-on réduire la fraction (e.g. 3/10) plutôt
   > que de la laisser telle quelle (e.g 15/50) ? Y voyez-vous un ou des
   > avantages ?


---

### Niveau 3 : Surcharge d’opérateurs arithmétiques

6. **Surcharger les opérateurs `+=`, `-=, `*=`, `/=`**.

   Pour rappel  le prototype de la surcharge de l'opérateur `+` est :
   ```
   class Rational { ...
   // en tant que méthode
   Rational& operator+=( const Rational& other );
   ... };
   ```

   Exemple : On pourra vérifier que
   ```
   Rational r(1,2);
   r += Rational(1,3);
   std::cout << r.toString() << "\n"; // == Rational(5,6)
   ```

   > :warning: Attention à la gestion de la division par zéro. On
   > pourra aussi laisser l'état du rationnel à `1/0` ou `-1/0` (si le
   > numérateur n'était pas nul) ou `0/0`. Cela permet de distinguer
   > si le rationnel est infini ou non-valide.

5. **Surcharger les opérateurs `+`, `-`, `*` et `/`.** .

   Pour rappel, le prototype de la surcharge de l'opérateur `+` est :
   ```
   class Rational { ...
   // en tant que méthode
   Rational operator+( const Rational& other ) const;
   ... };
   // en tant que fonction
   Rational operator+( const Rational& r1, const Rational& r2 ) const;
   ```
   
   Exemple : On pourra vérifier que `Rational(1,2) + Rational(1,3) == Rational(5,6)`.

   > 💡 On utilisera opportunément les surcharges précedentes.


---

### Niveau 4 : Surcharge des opérateurs relationnels

7. **Implémenter `operator==` et `operator!=`.**

   Vérifier que `Rational(3,4) == Rational(9,12)`.

8. **Implémenter `<`, `<=`, `>`, `>=`** en comparant les produits croisés.  
   Exemple : `Rational(1,2) < Rational(2,3)`.

   - Vérifier que la classe est compatible avec `std::sort`.

---

### Niveau 5 : Opérateurs d’E/S et conversions

9. **Surcharger `operator<<`** pour afficher un rationnel dans un flux `ostream`.  
   **Surcharger `operator>>`** pour lire un rationnel depuis un flux `istream`.

   > :warning: Ces opérateurs sont forcéments des fonctions, pas des
   > méthodes. Par exemple, le prototype de `operator<<` est
   > ```
   > std::ostream& operator<<( std::ostream& out, const Rational& r );
   > ```
   > :thinking: pourquoi ne peut-on écrire ces opérateurs comme méthodes ?

10. **Ajouter un constructeur prenant un `int`.**

   > :thinking: Peut-on maintenant écrire les lignes suivantes ?
   > ```
   > Rational r(9,4);
   > Rational s = r + 2;
   > s += -2;
   > Rational t = 3 + r; 
   > ```
   
11. Ajouter un `operator double()` pour convertir en flottant.
    `x = double( Rational(4,3) )` donne 1.333333334.
    
---

### Niveau 6 : Construction d'un rationnel approchant un nombre réel

12. On cherche à écrire une méthode statique `approx( double x, int den )` qui
   construit le rationnel qui est la meilleure approximation de `x` de
   dénominateur inférieur ou égal à `den`. Comment faire ?

   > :thinking: La notion de [fraction continue](https://fr.wikipedia.org/wiki/Fraction_continue) sera explorée, voir aussi [Fraction continue et approximation diophantienne](https://fr.wikipedia.org/wiki/Fraction_continue_et_approximation_diophantienne).
   
---

### Bonnes pratiques et extensions

12. **Lever une exception** si le dénominateur vaut zéro (dans le constructeur et dans `/`).

13. **Rendre les méthodes et opérateurs `const`** lorsque c’est pertinent.  

14. **Exercices bonus :**
    - Implémenter `operator++` et `operator--` (préfixe et suffixe).
    - Ecrire une version générique de `Rational` où l'utilisateur peut choisir sont type d'entier (donc avoir une précision supérieure par exemple).

---

💡 **Objectif final :** obtenir une classe `Rational` robuste, sûre et efficace, capable de s’intégrer dans un code C++ moderne.

