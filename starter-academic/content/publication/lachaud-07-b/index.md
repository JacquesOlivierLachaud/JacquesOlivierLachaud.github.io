---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Géométrie discréte et images numériques
subtitle: '3 - Topologie, courbes et surfaces discrètes'
summary: ''
authors:
- admin
- R. Malgouyres
tags: [ "digital topology", "digital surface", "digital surface tracking", "Jordan pairs", "digital homotopy", "Jordan theorem", "curve index", "nD" ]
categories: []
date: '2007-01-01'
lastmod: 2022-11-03T17:40:11+01:00
featured: false
draft: false

# Featured image
# To use, add an image named `featured.jpg/png` to your page's folder.
# Focal points: Smart, Center, TopLeft, Top, TopRight, Left, Right, BottomLeft, Bottom, BottomRight.
image:
  caption: ''
  focal_point: ''
  preview_only: false

# Projects (optional).
#   Associate this post with one or more of your projects.
#   Simply enter your project's folder or file name without extension.
#   E.g. `projects = ["internal-project"]` references `content/project/deep-learning/index.md`.
#   Otherwise, set `projects = []`.
projects: []
publishDate: '2022-11-03T16:40:11.043115Z'
publication_types:
- '6'
abstract: "
La topologie digitale est l'étude des propriétés des objets discrets
qui sont indépendantes de leurs propriétés métriques. L'existence d'un
trou dans un objet (au sens où un anneau a un trou et un pantalon a
deux trous) n'est pas modifiée par une déformation ``continue'' de
l'objet.  D'un point de vue algorithmique, on cherche souvent à
concevoir des méthodes de traitement d'image qui ne modifient pas la
topologie des objets (connexité, existence d'un trou, etc).  Le
formalisme mathématique nécessaire pour définir de telles méthodes est
assez abstrait.

Au sens de la topologie,
on peut dire que toutes les courbes fermées simples
sont équivalentes (ou homéomorphes),
et toute courbe fermée simple dans le plan
possède un trou, au sens où elle sépare le plan
(théorème de Jordan).
La notion de déformation continue est formalisée dans
la notion d'homotopie. Cette notion permet d'associer
aux objets discrets des objets algébriques
(des groupes), de manière qu'à deux objets topologiquement
équivalents soient associés deux groupes équivalents.
Ces invariants algébriques sont fondamentaux dans l'étude des
propriétés topologiques des objets. Cette même notion d'homotopie
permet de définir les points simples, qui sont les points qu'on peut
enlever d'un objet sans en modifier la topologie. Les points simples
sont en particulier à la base des algorithmes de squelettisation
topologique.

D'autres notions fondamentales en topologie sont les frontières et les
surfaces. Par exemple, la frontière d'un objet connexe sans cavité est
connexe. Une telle frontière doit satisfaire la propriété de
séparation de Jordan. En topologie digitale, on se donne les outils
pour définir des frontières et surfaces discrètes qui ont une bonne
propriété de séparation. Ces frontières sont ensuite munies de
structures de graphes, qui permettent de les construire et de les
parcourir efficacement. Des outils existent ensuite pour estimer la
géométrie de ces objets ou pour
en fabriquer des modèles géométriques.
"
publication: 'Géométrie discréte et images numériques, 3 - Topologie, courbes et surfaces discrètes, *Hermès*, 2007'
---
