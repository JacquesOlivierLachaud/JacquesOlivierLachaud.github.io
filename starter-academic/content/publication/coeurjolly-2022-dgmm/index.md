---
# Documentation: https://wowchemy.com/docs/managing-content/

title: A Simple Discrete Calculus for Digital Surfaces
subtitle: ''
summary: ''
authors:
- David Coeurjolly
- admin
tags: [ "discrete calculus", "digital surface", "3D", "discrete differential operator", "multigrid convergence" ]
categories: []
date: '2022-01-01'
lastmod: 2022-11-03T17:39:54+01:00
featured: false
draft: false
url_code: 'https://dgtal-team.github.io/doc-nightly/modulePolygonalCalculus.html'
  
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
projects: [ "comedic" ]
publishDate: '2022-11-03T16:39:54.380753Z'
publication_types:
- '1'
abstract: 'Computing differential quantities or solving partial derivative
equations on discrete surfaces is at the core of many geometry
processing and simulation tasks. For digital surfaces in
{{< math >}}$\mathbb{Z}^3${{< /math >}} (boundary of voxels), several challenges arise when
trying to define a discrete calculus framework on such surfaces
mimicking the continuous one: the vertex positions and the geometry of
faces do not capture well the geometry of the underlying smooth
Euclidean object, even when refined asymptotically. Furthermore, the
surface may not be a combinatorial 2-manifold even for discretizations
of smooth regular shape. In this paper, we adapt a discrete
differential calculus defined on polygonal meshes to the specific case
of digital surfaces. We show that this discrete differential calculus
accurately mimics the continuous calculus operating on the underlying
smooth object, through several experiments: convergence of gradient
and weak Laplace operators, spectral analysis and geodesic
computations, mean curvature approximation and tolerance to
non-manifold locii.'

publication: '*Discrete Geometry and Mathematical Morphology - Second International
  Joint Conference, DGMM 2022, Strasbourg, France, Oct 24-27, 2022, Proceedings*, pp 341-353, volume 13493 of Lecture Notes in Computer Science, 2022, Springer, Cham.'
---
