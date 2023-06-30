---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Dynamic Minimum Length Polygon
subtitle: ''
summary: ''
authors:
- admin
- X. Provençal
tags: [ "digital geometry", "minimum length polygon", "minimum perimeter polygon", "digital straightness", "Christoffel word", "length estimator", "word combinatorics", "2D", "computational complexity" ]
categories: []
date: '2011-01-01'
lastmod: 2022-11-03T17:40:00+01:00
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
publishDate: '2022-11-03T16:40:00.532532Z'
publication_types:
- '1'
abstract: '
This paper presents a formal framework for representing all reversible polygonalizations of a digital contour (i.e. the boundary of a digital object). Within these polygonal approximations, a set of local operations is defined with given properties, e.g., decreasing the total length of the polygon or diminishing the number of quadrant changes. We show that, whatever the starting reversible polygonal approximation, iterating these operations leads to a specific polygon: the Minimum Length Polygon. This object is thus the natural representative for the whole class of reversible polygonal approximations of a digital contour. Since all presented operations are local, we obtain the first dynamic algorithm for computing the MLP. This gives us a sublinear time algorithm for computing the MLP of a contour, when the MLP of a slightly different contour is known.
'
publication: '*Proc. Int. Workshop Combinatorial Image Analysis (IWCIA2011)*, volume 6636 of Lecture Notes in Computer Science, pp 208-221, 2011. Springer'

links:
  - name: Slides (PDF)
    url: 'slides.pdf'
    
---
