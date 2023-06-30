---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Two linear-time algorithms for computing the minimum length polygon of a digital
  contour
subtitle: ''
summary: ''
authors:
- admin
- X. Provençal
tags: [ "digital geometry", "minimum length polygon", "minimum perimeter polygon", "digital straightness", "Christoffel word", "length estimator", "word combinatorics", "2D", "computational complexity" ]
categories: []
date: '2011-01-01'
lastmod: 2022-11-03T17:39:50+01:00
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
projects: [ "fogrimmi" ]
publishDate: '2022-11-03T16:39:50.698907Z'
publication_types:
- '2'
abstract: '
The Minimum Length Polygon (MLP) is an interesting first order
approximation of a digital contour. For instance, the convexity of the
MLP is characteristic of the digital convexity of the shape, its
perimeter is a good estimate of the perimeter of the digitized
shape. We present here two novel equivalent definitions of MLP, one
arithmetic, one combinatorial, and both definitions lead to two
different linear time algorithms to compute them. This paper extends
the work presented in Provençal and Lachaud (2009), by detailing
the algorithms and providing full proofs. It includes also a
comparative experimental evaluation of both algorithms showing that
the combinatorial algorithm is about 5 times faster than the other. We
also checked the multigrid convergence of the length estimator based
on the MLP.  
'
publication: '*Discrete Applied Mathematics*, 159(18): 2229-2250, 2011'
---
