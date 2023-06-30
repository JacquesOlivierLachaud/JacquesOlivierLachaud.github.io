---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Géométrie discréte et images numériques
subtitle: '12 - Approximation par triangulation'
summary: ''
authors:
- admin
- S. Valette
tags: [ "image analysis", "marching-cubes", "deformable models", "surface reconstruction", "mesh reconstruction", "remeshing", "mesh simplification", "triangulation", "3D" ]
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
publishDate: '2022-11-03T16:40:11.280240Z'
publication_types:
- '6'
abstract: "

Dans ce chapitre, nous traitons de l'approximation des surfaces
discrètes par des maillages. Cette transformation ne sera pas
forcément réversible. La relaxation de cette
contrainte offre en effet plus de flexibilité. Nous aborderons
plusieurs problématiques :

<ul>

<li> <i>Volumique vers surfacique</i>. Les surfaces discrètes ne sont pas
  toujours exploitables directement, et la transformation de l'image
  3D directement en une représentation surfacique (un maillage) est parfois
  souhaitable, notamment pour le rendu ou l'extraction quantitative de
  caractéristiques. Nous verrons une
  technique d'extraction de surfaces d'intérêt directement à partir
  d'une image 3D, binaire ou non. 

<li> <i>Surface discrète vers surface triangulée</i>. Il est parfois commode
  de passer d'une représentation par surface discrète à une
  représentation par surface triangulée. Nous présenterons deux
  techniques complémentaires : la
  dualité surface discrète et isosurface pour construire une surface
  triangulée approchant la surface discrète (approximation
  réversible), une technique
  non réversible d'approximation de surface discrète sous forme d'une
  surface triangulée, qui est basée sur de la triangulation de points
  caractérisques par amincissement homotopique.

<li> <i>Simplification et remaillage de surfaces</i>. Un maillage possède
  parfois trop d'éléments pour être affiché ou traité sur une machine
  possédant des ressources limitées (mémoire, vitesse). La
  simplification du maillage résout ce problème en réduisant son
  nombre d'éléments tout en conservant au mieux les caractérisques
  géométriques initiales. Plusieurs critères peuvent être
  pris en compte lors de la simplification : type des éléments crées
  (triangles, quadrangles, polygones), qualité de l'approximation
  (distance de Hausdorff), qualité des éléments générés
  (rapport d'aspect, régularité de la triangulation). D'autre part,
  l'efficacité de certaines applications est parfois dépendante de la
  qualité du maillage (régularité de l'échantillonnage, facteur de
  forme des éléments). En particulier, la précision des applications
  de simulation par éléments finis est directement dépendante du
  facteur de forme des éléments du maillage. Dans ce cas, remailler un
  modèle permet de rester fidèle à la forme initiale de l'objet, tout
  en améliorant les résultats d'une éventuelle simulation numérique.
</ul>
"
publication: 'Géométrie discréte et images numériques, 12 - Approximation par triangulation, *Hermès*, 2007'
links:
---
