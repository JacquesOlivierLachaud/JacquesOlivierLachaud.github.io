---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Scale-space feature extraction on digital surfaces
subtitle: ''
summary: ''
authors:
- J. Levallois
- D. Coeurjolly
- admin
tags: [ "feature detection", "asymptotic digital geometry", "digital surface", "3D" ]
categories: []
date: '2015-01-01'
lastmod: 2022-11-03T17:39:49+01:00
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
publishDate: '2022-11-03T16:39:49.022985Z'
publication_types:
- '2'
abstract: '
A classical problem in many computer graphics applications consists in extracting significant zones or points on an object surface,
like loci of tangent discontinuity (edges), maxima or minima of curvatures, inflection points, etc. These places have specific local
geometrical properties and often called generically features. An important problem is related to the scale, or range of scales,
for which a feature is relevant. We propose a new robust method to detect features on digital data (surface of objects in Z3),
which exploits asymptotic properties of recent digital curvature estimators. In [1, 2], authors have proposed curvature estimators
(mean, principal and Gaussian) on 2D and 3D digitized shapes and have demonstrated their multigrid convergence (for C 3-smooth
surfaces). Since such approaches integrate local information within a ball around points of interest, the radius is a crucial parameter.
In this article, we consider the radius as a scale-space parameter. By analyzing the behavior of such curvature estimators as the ball
radius tends to zero, we propose a tool to efficiently characterize and extract several relevant features (edges, smooth and flat parts)
on digital surfaces.
'
publication: '*Computers & Graphics*, 51: 177-189, 2015'
doi: http://dx.doi.org/10.1016/j.cag.2015.05.023
links:
- name: URL
  url: http://www.sciencedirect.com/science/article/pii/S0097849315000709
---
