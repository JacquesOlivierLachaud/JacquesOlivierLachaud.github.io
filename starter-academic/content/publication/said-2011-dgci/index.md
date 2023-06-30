---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Computing the Characteristics of a SubSegment of a Digital Straight Line in
  Logarithmic Time
subtitle: ''
summary: ''
authors:
- M. Said
- admin
tags: [ "discrete geometry", "digital straight segment recognition", "digital straightness", "2D", "Christoffel word", "pattern", "continued fraction", "digital geometry" ]
categories: []
date: '2011-04-01'
lastmod: 2022-11-03T17:40:01+01:00
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
projects: [ "geodib" ]
publishDate: '2022-11-03T16:40:01.248141Z'
publication_types:
- '1'
abstract: '
We address the problem of computing the exact characteristics
of any subsegment of a digital straight line with known characteristics.
We present a new algorithm that solves this problem, whose
correctness is proved. Its principle is to climb the Stern-Brocot tree of
fraction in a bottom-up way. Its worst-time complexity is proportionnal
to the difference of depth of the slope of the input line and the slope of
the output segment. It is thus logarithmic in the coefficients of the input
slope. We have tested the effectiveness of this algorithm by computing
a multiscale representation of a digital shape, based only on a digital
straight segment decomposition of its boundary.
'
publication: '*Proc. International Conference on Discrete Geometry for Computer Imagery
  (DGCI2011)*, volume 6607  of Lecture Notes in Computer Science, pp 320-332, 2011. Springer, Cham'
links:
- name: Code (DGtal)
  url: 'https://dgtal-team.github.io/doc-nightly/moduleDigitalStraightness.html'
  
---
