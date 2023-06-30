---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Piecewise smooth reconstruction of normal vector field on digital data
subtitle: ''
summary: ''
authors:
- D. Coeurjolly
- M. Foare
- P. Gueth
- admin
tags: [ "ambrosio-tortorelli functional", "discrete calculus", "feature detection", "piecewise smooth reconstruction", "digital surface", "normal estimator" ]
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
projects: [ "comedic" ]
publishDate: '2022-11-03T16:39:48.063871Z'
publication_types:
- '2'
abstract: '
We propose a novel method to regularize a normal vector field defined
on a digital surface (boundary of a set of voxels).  When the digital
surface is a digitization of a piecewise smooth manifold, our method
localizes sharp features (edges) while regularizing the input normal
vector field at the same time. It relies on the optimisation of a
variant of the Ambrosio-Tortorelli functional, originally defined for
denoising and contour extraction in image processing [AT90]. We
reformulate this functional to digital surface processing thanks to
discrete calculus operators. Experiments show that the output normal
field is very robust to digitization artifacts or noise, and also
fairly independent of the sampling resolution. The method allows the
user to choose independently the amount of smoothing and the length of
the set of discontinuities.  Sharp and vanishing features are
correctly delineated even on extremely damaged data. Finally, our
method can be used to enhance considerably the output of state-of-the-art normal field estimators like Voronoi Covariance Measure [MOG11] or
Randomized Hough Transform [BM12].  '

publication: '*Comput. Graph. Forum*, 35(7): 157-167, 2016'
doi: 10.1111/cgf.13013
links:
- name: Code (DGtal)
  url: 'https://dgtal-team.github.io/doc-nightly/moduleGenericAT.html'
- name: URL
  url: http://dx.doi.org/10.1111/cgf.13013
---
