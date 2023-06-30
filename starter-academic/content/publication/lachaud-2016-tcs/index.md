---
# Documentation: https://wowchemy.com/docs/managing-content/

title: An output-sensitive algorithm to compute the normal vector of a digital plane
subtitle: ''
summary: ''
authors:
- admin
- X. Provençal
- T. Roussillon
tags: [ "digital geometry", "digital planarity", "recognition", "multidimensional continued fractions", "Delaunay triangulation" ]
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
projects: [ "digital-snow" ]
publishDate: '2022-11-03T16:39:48.306568Z'
publication_types:
- '2'
abstract: 'A digital plane is the set of integer points located between to parallel planes. We solve the following problem: how to compute the exact normal vector of a digital plane given only a predicate that answers the question “is a point x in the digital plane or not”. Our approach is iterative and “as local as possible”.
We provide a worst-case complexity bound in O(ω log ω) calls to the predicate, where ω is equal to the
arithmetic thickness parameter of the digital plane. Furthermore, our algorithm presents a much better
average behavior in practice.'
publication: '*Theor. Comput. Sci.*, 624: 73-88, 2016'
doi: 10.1016/j.tcs.2015.11.021
links:
- name: URL
  url: http://dx.doi.org/10.1016/j.tcs.2015.11.021
---
