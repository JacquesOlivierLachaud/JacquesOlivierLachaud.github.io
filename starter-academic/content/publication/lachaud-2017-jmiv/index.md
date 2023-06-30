---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Two Plane-Probing Algorithms for the Computation of the Normal Vector to a
  Digital Plane
subtitle: ''
summary: ''
authors:
- admin
- X. Provençal
- T. Roussillon
tags: [ "digital geometry", "digital planarity", "digial plane recognition", "normal vector estimation", "lattice reduction", "plane probing", "discrete geometric estimator", "parameter-free estimator" ]
categories: []
date: '2017-01-01'
lastmod: 2022-11-03T17:39:48+01:00
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
projects: [ "paradis", "comedic" ]
publishDate: '2022-11-03T16:39:47.813833Z'
publication_types:
- '2'
abstract: 'Digital planes are sets of integer points located
between two parallel planes. We present a new algorithm
that computes the normal vector of a digital plane given only
a predicate “is a point x in the digital plane or not”. In opposition
to classical recognition algorithm, this algorithm decides
on-the-fly which points to test in order to output at the end
the exact surface characteristics of the plane.We present two
variants: the H-algorithm, which is purely local, and the R-algorithm
which probes further along rays coming out from
the local neighborhood tested by the H-algorithm. Both algorithms
are shown to output the correct normal to the digital
planes if the starting point is a lower leaning point.
The worst case time complexity is in O(ω) for the H-algorithm and
O(ω log ω) for the R-algorithm, where ω is the arithmetic
thickness of the digital plane. In practice, the H-algorithm
often outputs a reduced basis of the digital plane while the
R-algorithm always returns a reduced basis. Both variants
perform much better than the theoretical bound, with an average
behavior close to O(log ω). Finally, we show how this
algorithm can be used to analyze the geometry of arbitrary
digital surfaces, by computing normals and identifying
convex, concave or saddle parts of the surface. This paper is an
extension of Lachaud et al. (Proceedings of 19th IAPR international
conference discrete geometry for computer imagery
(DGCI’2016), Nantes, France. Springer, Cham, 2016).
'
publication: '*Journal of Mathematical Imaging and Vision*, 59(1):23-39, 2017'
doi: 10.1007/s10851-017-0704-x
---
