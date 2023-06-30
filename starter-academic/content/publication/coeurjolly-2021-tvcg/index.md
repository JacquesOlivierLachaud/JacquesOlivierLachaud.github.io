---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Digital Surface Regularization With Guarantees
subtitle: ''
summary: ''
authors:
- David Coeurjolly
- admin
- Pierre Gueth
tags: [ "digital surface",  "reconstruction", "variational model", "digital geometry", "discrete geometric estimator", "piecewise smooth reconstruction" ]
categories: []
date: '2021-01-01'
lastmod: 2022-11-03T17:39:46+01:00
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
publishDate: '2022-11-03T16:39:45.955468Z'
publication_types:
- '2'
abstract: 'Digital objects and digital surfaces are isothetic structures
per se. Such surfaces are thus not adapted to direct visualization with
isothetic quads, or to many geometry processing methods. We propose
a new regularization technique to construct a piecewise smooth quadrangulated surface from a digital surface. More formally we propose a
variational formulation which efficiently regularizes digital surface vertices while complying with a prescribed, eventually anisotropic, input
normal vector field estimated on the digital structure. Beside visualization purposes, such regularized surface can then be used in any geometry
processing tasks which operates on triangular or quadrangular meshes
(e.g. compression, texturing, anisotropic smoothing, feature extraction).'

publication: '*IEEE Trans. Vis. Comput. Graph.*, 27(6): 2896-2907, 2021'
doi: 10.1109/TVCG.2021.3055242
links:
- name: Supplementary (PDF)
  url: 'supplementary.pdf'
- name: Code (DGtal)
  url: 'https://dgtal-team.github.io/doc-nightly/moduleRegularization.html'
- name: Code shrouds (DGtal)
  url: 'https://dgtal-team.github.io/doc-nightly/moduleShrouds.html'
- name: URL
  url: https://doi.org/10.1109/TVCG.2021.3055242
---
