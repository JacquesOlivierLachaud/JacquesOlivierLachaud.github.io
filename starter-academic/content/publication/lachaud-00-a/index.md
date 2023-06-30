---
# Documentation: https://wowchemy.com/docs/managing-content/

title: 'Continuous analogs of digital boundaries: A topological approach to iso-surfaces'
subtitle: ''
summary: ''
authors:
- admin
- A. Montanvert
tags: [ "digital topology", "isosurface extraction", "marching cubes", "digital surface tracking", "Jordan-Brouwer theorem", "Jordan pair", "simplicial complex", "3D", "nD" ]
categories: []
date: '2000-01-01'
lastmod: 2022-11-03T17:39:54+01:00
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
publishDate: '2022-11-03T16:39:53.891504Z'
publication_types:
- '2'
abstract: 'The definition and extraction of objects and their boundaries within an
  image are essential in many imaging applications. Classically, two approaches are
  followed. The first considers the image as a sample of a continuous scalar field:
  boundaries are implicit surfaces in this field; they are often called iso-surfaces.
  The second considers the image as a digital space with adjacency relations and classifies
  elements of this space as inside or outside: boundaries are pairs composed of one
  inside element and one outside element; they are called digital boundaries. In this
  paper, we show that these two approaches are closely related. This statement holds
  for arbitrary dimensions. To do so, we propose a local method to construct a continuous
  analog of a digital boundary. The continuous analog is designed to satisfy properties
  in the Euclidean space that are similar to the properties of its counterpart in
  the digital space (e.g., connectedness, closeness, separation). It appears that
  this continuous analog is indeed a piecewise linear approximation of an iso-(hyper)surface
  (i.e., a triangulated iso-surface in the three-dimensional case). Furthermore, we
  derive significant digital boundary properties from its continuous analog using
  the Jordan-Brouwer separation theorem: new Jordan pairs, new adjacencies between
  boundary elements, new Jordan triples. We conclude this paper by illustrating the
  3D case more precisely. In particular, we show that a digital boundary can be transformed
  directly into a triangulated iso-surface. The implementation of this transformation
  and its efficiency are discussed with a comparison with the classical marching-cubes
  algorithm. '
publication: '*Graphical Models*, 62(3): 129--164, 2000'
links:
- name: URL
  url: https://doi.org/10.1006/gmod.2000.0522
---
