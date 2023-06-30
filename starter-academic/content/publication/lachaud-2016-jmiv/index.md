---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Properties of Gauss Digitized Shapes and Digital Surface Integration
subtitle: ''
summary: ''
authors:
- admin
- B. Thibert
tags:
- digital geometry
- gauss digitization
- geometric inference
- digital integral
- digital surface
- digital topology
- multigrid convergence
- set with positive reach
- 65D18
- 68U05
- 65D30

categories: []
date: '2016-01-01'
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
projects: []
publishDate: '2022-11-03T16:39:48.540613Z'
publication_types:
- '2'
abstract: '
This paper presents new topological and geometric
properties of Gauss digitizations of Euclidean shapes,
most of them holding in arbitrary dimension d. We focus
on r-regular shapes sampled by Gauss digitization at gridstep
h. The digitized boundary is shown to be close to the
Euclidean boundary in the Hausdorff sense, the minimum
distance h&radic;d/2 being achieved by the projection map &xi; induced
by the Euclidean distance. Although it is known that Gauss
digitized boundaries may not be manifold when d >= 3, we
show that non-manifoldness may only occur in places where
the normal vector is almost aligned with some digitization
axis, and the limit angle decreases with h. We then have a
closer look at the projection of the digitized boundary onto
the continuous boundary by &xi;. We show that the size of its
non-injective part tends to zero with h. This leads us to study
the classical digital surface integration scheme, which allocates
a measure to each surface element that is proportional
to the cosine of the angle between an estimated normal vector
and the trivial surface element normal vector. We show that
digital integration is convergent whenever the normal estimator
is multigrid convergent, and we explicit the convergence
speed. Since convergent estimators are now available in the
literature, digital integration provides a convergent measure
for digitized objects.
'
publication: '*Journal of Mathematical Imaging and Vision*, 54(2): 162-180, 2016'
doi: 10.1007/s10851-015-0595-7
links:
- name: Tutorial (DGtal)
  url: 'https://codimd.math.cnrs.fr/s/s2pNRQuga'
- name: URL
  url: http://dx.doi.org/10.1007/s10851-015-0595-7
---
