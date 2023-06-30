---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Interactive Curvature Tensor Visualization on Digital Surfaces
subtitle: ''
summary: ''
authors:
- H. Perrier
- J. Levallois
- D. Coeurjolly
- J. -P. Farrugia
- J. -C. Iehl
- admin
tags: [ "gpu", "interactive visualisation", "digital geometry", "3D", "curvature estimation", "integral invariant" ]
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
publishDate: '2022-11-03T16:39:58.332593Z'
publication_types:
- '1'
abstract: 'Interactive visualization is a very convenient tool to explore
complex scientific data or to try different parameter settings for a given
processing algorithm. In this article, we present a tool to efficiently analyze
the curvature tensor on the boundary of potentially large and dynamic
digital objects (mean and Gaussian curvatures, principal curvatures,
principal directions and normal vector field). More precisely, we
combine a fully parallel pipeline on GPU to extract an adaptive triangulated
isosurface of the digital object, with a curvature tensor estimation
at each surface point based on integral invariants. Integral invariants being
parametrized by a given ball radius, our proposal allows to explore
interactively different radii and thus select the appropriate scale at which
the computation is performed and visualized.'
publication: '*Discrete Geometry for Computer Imagery - 19th IAPR International Conference,
  DGCI 2016, Nantes, France, April 18-20, 2016. Proceedings*, 282--294, volume 9647 of Lecture Notes in Computer Science, 2016'
doi: 10.1007/978-3-319-32360-2_22
links:
- name: GitHub
  url:  https://github.com/dcoeurjo/ICTV
  icon: github
  icon_pack: fab
- name: URL
  url: http://dx.doi.org/10.1007/978-3-319-32360-2_22
---
