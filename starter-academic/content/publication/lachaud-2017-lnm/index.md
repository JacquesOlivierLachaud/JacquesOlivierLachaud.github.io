---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Robust and Convergent Curvature and Normal Estimators with Digital Integral
  Invariants
subtitle: ''
summary: ''
authors:
- admin
- D. Coeurjolly
- J. Levallois
tags: [ "digital geometry", "curvature estimation", "normal estimation", "multigrid convergence", "integral invariants", "digital moments", "discrete geometric estimator" ]
categories: []
date: '2017-01-01'
lastmod: 2022-11-03T17:40:10+01:00
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
projects: [ "digital-snow", "dgtal" ]
publishDate: '2022-11-03T16:40:10.277142Z'
publication_types:
- '6'
abstract: '
We present, in details, a generic tool to estimate differential geometric
quantities on digital shapes, which are subsets of {{< math >}}$\mathbb{Z}^d${{< /math >}}. This tool, called
digital integral invariant, simply places a ball at the point of interest, and
then examines the intersection of this ball with input data to infer local
geometric information. Just counting the number of input points within
the intersection provides curvature estimation in 2D and mean curvature
estimation in 3D. The covariance matrix of the same point set allows
to recover principal curvatures, principal directions and normal direction
estimates in 3D. We show the multigrid convergence of all these estimators, which means that their estimations tend toward the exact geometric
quantities on *smooth enough* Euclidean shapes digitized with finer
and finer gridsteps. During the course of the chapter, we establish several
multigrid convergence results of digital volume and moments estimators in
arbitrary dimensions. Afterwards, we show how to set automatically the
radius parameter while keeping multigrid convergence properties. Our estimators are then demonstrated to be accurate in practice, with extensive
comparisons with state-of-the-art methods. To conclude the exposition,
we discuss their robustness to perturbations and noise in input data and
we show how such estimators can detect features using scale-space arguments.
'
publication: '*Modern Approaches to Discrete Curvature*, Chapter - Robust and Convergent Curvature and Normal Estimators with Digital Integral Invariants, pp 293-348, volume 2184 of Lecture Notes in Mathematics, 2017'
doi: 10.1007/978-3-319-58002-9_9
links:
- name: Code (DGtal)
  url: 'https://dgtal-team.github.io/doc-nightly/moduleShortcuts.html'
- name: URL
  url: https://doi.org/10.1007/978-3-319-58002-9_9
---
