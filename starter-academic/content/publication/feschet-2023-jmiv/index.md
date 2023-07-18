---
# Documentation: https://wowchemy.com/docs/managing-content/

title: An Envelope Operator for Full Convexity to Define Polyhedral Models in Digital Spaces
subtitle: ''
summary: ''
authors:
- admin
tags: [ "digital geometry", "digital convexity", "full convexity", "polyhedral model", "envelope operator", "nD" ]
categories: []
date: '2023-07-17'
lastmod: '2023-07-17'
featured: true
draft: false
url_code: 'https://dgtal-team.github.io/doc-nightly/moduleEnvelope.html'

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
publishDate: '2023-07-17T16:39:45.518558Z'
publication_types:
- '2'

abstract: 'In a recent work, full convexity has been proposed as an alternative definition of digital convexity. It solves many problems related to its usual definitions, for instance: Fully convex sets are digitally convex in the usual sense, but are also connected and simply connected. However, full convexity is not a monotone property; hence, intersections of fully convex sets may be neither fully convex nor connected. This defect might forbid digital polyhedral models with fully convex faces and edges. This can be detrimental since classical standard and naive planes are fully convex. In this paper, we study several methods that builds a fully convex set from a digital set. One is particularly appealing and is based on an iterative process: This envelope operator solves in arbitrary dimension the problem of extending a digital set into a fully convex set, while leaving fully convex sets invariant. This extension naturally leads to digital polyhedra whose cells are fully convex. Then a relative envelope operator is proposed, which can be used to force digital planarity of fully convex sets. We provide experiments showing that our method produces coherent polyhedral models for any polyhedron in arbitrary dimension. Finally we study how we can speed up full convexity checks and envelope operations, with a worst-case complexity lowered by a factor $2^d$ in ${\mathbb {Z}}^d$.'


publication: '*J. Math. Imaging Vis.*, 2023'
doi: 10.1007/s10851-023-01155-w
links:
- name: URL
  url: https://doi.org/10.1007/s10851-023-01155-w
- name: Springer Access
  url: https://rdcu.be/dg49Y
---
