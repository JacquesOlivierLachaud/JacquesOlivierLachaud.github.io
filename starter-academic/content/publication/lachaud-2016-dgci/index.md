---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Computation of the Normal Vector to a Digital Plane by Sampling Significant
  Points
subtitle: ''
summary: ''
authors:
- admin
- X. Provençal
- T. Roussillon
tags: [ "digital geometry", "digital planarity", "recognition", "normal estimation", "lattice reduction" ]
categories: []
date: '2016-01-01'
lastmod: 2022-11-03T17:39:58+01:00
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
projects: [ "digital-snow" ]
publishDate: '2022-11-03T16:39:58.066531Z'
publication_types:
- '1'
abstract: 'Digital planes are sets of integer points located between two
parallel planes. We present a new algorithm that computes the normal
vector of a digital plane given only a predicate “is a point x in the digital
plane or not”. In opposition with the algorithm presented in [7], the
algorithm is fully local and does not explore the plane. Furthermore its
worst-case complexity bound is O(ω), where ω is the arithmetic thickness
of the digital plane. Its only restriction is that the algorithm must start
just below a Bezout point of the plane in order to return the exact
normal vector. In practice, our algorithm performs much better than
the theoretical bound, with an average behavior close to O(log ω). We
show further how this algorithm can be used to analyze the geometry of
arbitrary digital surfaces, by computing normals and identifying convex,
concave or saddle parts of the surface.'
publication: '*Discrete Geometry for Computer Imagery - 19th IAPR International Conference,
  DGCI 2016, Nantes, France, April 18-20, 2016. Proceedings*, volume 9647 of Lecture Notes in Computer Science, pp 194-205, 2016. Springer'
doi: 10.1007/978-3-319-32360-2_15
links:
- name: URL
  url: http://dx.doi.org/10.1007/978-3-319-32360-2_15
---
