---
# Documentation: https://wowchemy.com/docs/managing-content/

title: 'Two efficient algorithms for computing the characteristics of a subsegment
  of a digital straight line '
subtitle: ''
summary: ''
authors:
- admin
- M. Said
tags: [ "discrete geometry", "digital straight segment recognition", "digital straightness", "2D", "Christoffel word", "pattern", "continued fraction", "digital geometry" ]
categories: []
date: '2013-01-01'
lastmod: 2022-11-03T17:39:50+01:00
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
projects: [ "dgtal", "geodib" ]

publishDate: '2022-11-03T16:39:50.219440Z'
publication_types:
- '2'
abstract: '
We address the problem of computing the exact characteristics of any subsegment of a
Digital Straight Line (DSL) with known characteristics (a slope a/b, a shift to origin &mu;). We
present here two new algorithms that solve this problem, whose correctnesses are fully
proved. Their principle is to descend/climb the Stern-Brocot tree of fractions in a topdown/bottom-up
way. The top-down algorithm SmartDSS has a time complexity which
depends on the sum of the quotients of the continued fraction of the output slope and on
the number of pattern repetitions. As a corollary, its time complexity is bounded by the
sum of the quotients of the continued fraction of the input slope, Said and Lachaud (2009)
[18]. The bottom-up algorithm ReversedSmartDSS has a time complexity proportional to
the difference of depth of the input slope and the slope of the output segment, Said and
Lachaud (2011) [17]. As a corollary, its complexity is thus logarithmic in the coefficients
of the input slope. These algorithms are also efficient in practice, as shown by a series
of experiments comparing these new algorithms with standard arithmetic digital straight
segment recognition.'
publication: '*Discrete Applied Mathematics*, 161(15): 2293 - 2315, 2013'
doi: http://dx.doi.org/10.1016/j.dam.2012.08.038
links:
- name: Code (DGtal)
  url: 'https://dgtal-team.github.io/doc-nightly/moduleDigitalStraightness.html'
- name: URL
  url: http://www.sciencedirect.com/science/article/pii/S0166218X12003381
---
