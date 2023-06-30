---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Numerical implementation of the Ambrosio-Tortorelli functional using discrete
  calculus and application to image restoration and inpainting
subtitle: ''
summary: ''
authors:
- M. Foare
- admin
- H. Talbot
tags: [ "discrete calculus", "ambrosio-tortorelli functional", "image analysis", "image restoration", "image inpainting", "piecewise smooth reconstruction" ]
categories: []
date: '2016-01-01'
lastmod: 2022-11-03T17:39:57+01:00
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
projects: [ "comedic" ]
publishDate: '2022-11-03T16:39:57.080580Z'
publication_types:
- '1'
abstract: 'The Mumford-Shah (MS) functional is one of the most influential
variational model in image segmentation, restoration, and cartooning.
Difficult to solve, the Ambrosio-Tortorelli (AT) functional is of
particular interest, because minimizers of AT can be shown to converge
to a minimizer of MS. This paper takes an interest in a new method for
numerically solving the AT model [11]. This method formulates the AT
functional in a discrete calculus setting, and by this way is able to capture
the set of discontinuities as a one-dimensional set. It is also shown
that this model is competitive with total variation restoration methods.
We present here the discrete AT models in details, and compare
its merit with recent convex relaxations of AT and MS functionals. We
also examine the potential of this model for inpainting, and describe its
implementation in the DGtal library, an open-source project.'

publication: '*International Workshop on Reproducible Research in Pattern Recognition*, Proc. RRPR2016, 91-103, volume 10214 of Lecture Notes in Computer Science, 2016'
links:
- name: Code (DGtal)
  url: 'https://dgtal-team.github.io/doctools-nightly/moduleAT.html'
---
