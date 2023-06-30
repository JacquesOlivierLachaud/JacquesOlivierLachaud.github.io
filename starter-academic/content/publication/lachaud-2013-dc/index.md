---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Multigrid convergence of digital curvature estimators
subtitle: ''
summary: ''
authors:
- admin
tags: []
categories: []
date: '2013-11-01'
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
projects: [ "digital-snow" ]
publishDate: '2022-11-03T16:40:11.567503Z'
publication_types:
- '1'
abstract: 'Many methods have been proposed to estimate differential geometric
quantities like curvature on discrete data. A common characteristics
is that they require (at least) one user-given scale parameter, that
smooths data to take care of both the sampling rate and possible
perturbations.  Digital shapes are specific discrete approximation of
Euclidean shapes, which come from their digitization at a given grid
step. They are thus subsets of the digital plane Z^d. A digital
geometric estimator is called multigrid convergent whenever the
estimated quantity tends towards the expected geometric quantity as
the grid step gets finer and finer. The problem is then: can we define
curvature estimators that are multigrid convergent without such
user-given parameter ? If so, what speed of convergence can we achieve
? We present here three digital curvature estimators that aim at this
objective: a first one based on maximal digital circular arc, a second
one using a global optimisation procedure, a third one that is a
digital counterpart to integral invariants and that works on 2D and 3D
shapes.'
publication: '*Proceedings of the CIRM Meeting: Discrete curvature, theory and applications*, Luminy, France, Nov. 18-22 2013, 3(1): 171-181, 2013'
links:
- name: Slides (PDF)
  url: 'slides.pdf'  
- name: URL
  url: 'https://acirm.centre-mersenne.org/item/ACIRM_2013__3_1_171_0/'
---
