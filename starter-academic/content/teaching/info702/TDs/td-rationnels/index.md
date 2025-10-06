---
title: INFO702 - TD rationnels
summary: Ecrire une classe Rationnel en C++
date: 2025-10-06
type: docs
tags:
  - td
  - c++
---

## INFO702 - TD - POO/surcharge via la construction d'une classe représentant les rationnels

<a style="color:#907bf7;">[Jacques-Olivier Lachaud, August 2025]</a>

L'objectif de cette série d'exercices est de construire progressivement une classe en C++ représentant les rationnels (`Rational`), en introduisant pas à pas les concepts de programmation orientée objet et de surcharge d'opérateurs.

---

## Niveau 1 : Bases de la classe

1. **Définir une classe `Rational`** avec deux attributs privés `num` (numérateur) et `den` (dénominateur).  
   Ajouter :
   - un constructeur prenant deux entiers `(p, q)` ;
   - un constructeur par défaut représentant `0/1`.

2. **Ajouter une méthode `toString()`** qui retourne une chaîne de caractères de la forme `"num/den"`.  
   Tester la création et l’affichage de quelques rationnels.

---

## Niveau 2 : Invariants et simplification

3. **Écrire une fonction privée `gcd(int a, int b)`** qui calcule le PGCD.  
   Ajouter une méthode `reduce()` qui simplifie le rationnel.  
   Appeler `reduce()` dans le constructeur.

4. **Modifier la classe** pour que le signe soit toujours porté par le numérateur (le dénominateur doit rester positif).

---

## Niveau 3 : Surcharge d’opérateurs arithmétiques

5. **Surcharger les opérateurs `+` et `-`.**  
   Exemple : `Rational(1,2) + Rational(1,3) == Rational(5,6)`.

6. **Surcharger les opérateurs `*` et `/`.**  
   Vérifier la division par zéro dans `/`.

---

## Niveau 4 : Surcharge des opérateurs relationnels

7. **Implémenter `operator==` et `operator!=`.**

8. **Implémenter `<`, `<=`, `>`, `>=`** en comparant les produits croisés.  
   Exemple : `Rational(1,2) < Rational(2,3)`.

---

## Niveau 5 : Opérateurs d’E/S et conversions

9. **Surcharger `operator<<`** pour afficher un rationnel dans un flux `ostream`.  
   **Surcharger `operator>>`** pour lire un rationnel depuis un flux `istream`.

10. **Ajouter un constructeur prenant un `int`.**  
    Ajouter un `operator double()` pour convertir en flottant.

---

## Niveau 6 : Bonnes pratiques et extensions

11. **Lever une exception** si le dénominateur vaut zéro (dans le constructeur et dans `/`).

12. **Rendre les méthodes et opérateurs `const`** lorsque c’est pertinent.  
    Utiliser `friend` pour certains opérateurs.

13. **Exercices bonus :**
    - Implémenter `operator++` et `operator--` (préfixe et suffixe).
    - Rendre la classe compatible avec `std::sort`.
    - Écrire une version générique de `gcd` avec des `templates`.

---

💡 **Objectif final :** obtenir une classe `Rational` robuste, sûre et efficace, capable de s’intégrer dans un code C++ moderne.

