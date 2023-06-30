---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Multigrid Convergence of Discrete Geometric Estimators
subtitle: ''
summary: ''
authors:
- D. Coeurjolly
- admin
- T. Roussillon
tags: [ "digital geometry", "discrete geometric estimators", "multigrid convergence", "2D", "tangent estimator", "length estimator", "curvature estimator" ]
categories: []
date: '2012-01-01'
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
projects: [ "dgtal" ]
publishDate: '2022-11-03T16:40:10.777405Z'
publication_types:
- '6'
abstract: '
The analysis of digital shapes requires tools to determine accurately their geometric characteristics. Their boundary is by essence discrete and is seen by continuous geometry as a jagged continuous curve, either straight or not derivable. Discrete geometric estimators are specific tools designed to determine geometric information on such curves. We present here global geometric estimators of area, length, moments, as well as local geometric estimators of tangent and curvature. We further study their multigrid convergence, a fundamental property which guarantees that the estimation tends toward the exact one as the sampling resolution gets finer and finer. Known theorems on multigrid convergence are summarized. A representative subsets of estimators have been implemented in a common framework (the library DGtal), and have been experimentally evaluated for several classes of shapes. Thus, the interested users have all the information for choosing the best adapted estimators to their applications, and readily dispose of an efficient implementation.
'
publication: '*Digital Geometry Algorithms*, volume 2 of Lecture Notes in Computational Vision and Biomechanics, pp 395-424, 2012, Springer, Cham.'
doi: 10.1007/978-94-007-4174-4_13
links:
- name: URL
  url: http://dx.doi.org/10.1007/978-94-007-4174-4_13
---
