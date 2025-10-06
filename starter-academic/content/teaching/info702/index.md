---
title: INFO702
summary: Programmation générique en C++
date: 2025-08-01
type: docs
tags:
  - lecture
  - c++
---

## INFO702 - Programmation générique en C++

> Cours du semestre 7 de Master Informatique, CMI4 Informatique.
> <a style="color:#907bf7;">[Jacques-Olivier Lachaud, August 2025]</a>

Ces ressources sont des outils de travail et de révision. Elles ne
remplacent pas les cours et/ou les td, qui peuvent contenir d'autres
informations.

### Cours

* [Notes de cours (PDF)](Cours/notes-de-cours.pdf), mise à jour en
  9/2023. Intègre notamment les concepts du standard c++20.

### Fiches de TDs

* [TD1  (PDF)](TDs/td-1.pdf) Références, POO, surcharge d'opérateurs, polymorphisme
  - correction matrices, vecteurs: [Vecteur.hpp](TDs/Vecteur.hpp) [Vecteur.cpp](TDs/Vecteur.cpp) [Matrice.hpp](TDs/Matrice.hpp) [Matrice.cpp](TDs/Matrice.cpp) [spirograph.cpp](TDs/spirograph.cpp)
  - correction damier [damier.cpp](TDs/damier.cpp)

* [TD sur les rationnels](td-rationnels) POO, surcharge d'opérateurs

* [TD2  (PDF)](TDs/td-2.pdf) Fonctions génériques, classes génériques, spécialisation, lambdas
  - correction arbres/ABR [arbres.cpp](TDs/arbres.cpp)

### TPs

* Aller à la [Pages des TPs](Tests/html/index.html).

### Annales

* [Examen 2022-2023 (PDF)](Annales/examen-2022-2023.pdf) / [Corrigé (PDF)](Annales/examen-2022-2023-sol.pdf)


### Exemples de code C++

Les codes sont compilés à l'aide de la commande:
```shell
g++ -std=c++11 lesson-x-y.cpp
```

1. Premiers exemples de code C++, similitudes avec le C, couleurs dans la console, flux d'entrée/sortie, classe `std::string`
    [lesson-1-a.cpp](Lessons/lesson-1-a.cpp)
    [lesson-1-b.cpp](Lessons/lesson-1-b.cpp)
    [lesson-1-c.cpp](Lessons/lesson-1-c.cpp)
    [lesson-1-d.cpp](Lessons/lesson-1-d.cpp)
    [lesson-1-e.cpp](Lessons/lesson-1-e.cpp)
    [lesson-1-f.cpp](Lessons/lesson-1-f.cpp)

2. Traitement de tableaux, à la C, surcharge de fonctions
    [lesson-2-a.cpp](Lessons/lesson-2-a.cpp)
    [lesson-2-b.cpp](Lessons/lesson-2-b.cpp)

3. programmation objet et polymorphisme
    [lesson-2-c.cpp](Lessons/lesson-2-c.cpp)
    [lesson-2-d.cpp](Lessons/lesson-2-d.cpp)

4. fonctions génériques (template) à 1 ou plusieurs paramètres de type. 
    [lesson-2-e.cpp](Lessons/lesson-2-e.cpp)
    [lesson-2-f.cpp](Lessons/lesson-2-f.cpp)

5. Programmation fonctionnelle avec des lambda-expressions.
    [lesson-2-g.cpp](Lessons/lesson-2-g.cpp)

### Ancien site web

* [INFO702](http://os-vps418.infomaniak.ch:1250/mediawiki/index.php/INFO702_:_Programmation_générique_et_C%2B%2B) Generic programming in C++, (Lectures/Seminars/Practicals)

### History

* Responsable 2023-2024 Cours/TD/TP : J.-O. Lachaud
