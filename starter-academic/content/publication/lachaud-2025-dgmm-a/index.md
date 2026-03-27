---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Geometry of Gauss digitized convex shapes
subtitle: ''
summary: ''
authors:
- admin
- David Coeurjolly
- Tristan Roussillon
tags: [ "digital geometry", "geometric inference", "Gauss digitization", "convex hull geometry", "digital normal estimation", "geometric estimator", "nD" ]
categories: []
date: '2025-11-01'
lastmod: 2025-11-03T17:39:55+01:00
featured: true
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
projects: [ "stable-proxies" ]
publishDate: '2025-11-03T16:39:54.862451Z'
publication_types:
- '1'
abstract: 'This paper studies how well we can infer the geometry of a
(smooth or not) convex shape $X$ from the convex hull $Y_h$ of its Gauss
digitization with a given gridstep $h$. Without smoothness constraint, we
first present results concerning the proximity of facet normal vectors to
the shape normal vectors, as well as a relation between the number of
lattice points just above a facet and its area. Then, further results can
be obtained when $X$ is smooth, that are valid in arbitrary dimension $d$.
More precisely, we show that the boundary of $Y_h$ is Hausdorff-close to
the boundary of $X$ with distance less than $\sqrt{d}h$,  and that the vertices
of $Y_h$ are even much closer (some $O(h^{\frac{2d}{d+1}})$). Finally we show that the
geometric normal vectors to the facets of $Y_h$ tend to the smooth shape
normals with a speed $O(\sqrt{h})$, and the bound is tight.'

publication: '*Discrete Geometry and Mathematical Morphology - 4th International
                  Joint Conference, {DGMM} 2025, Groningen, The Netherlands, November
                  3-6, 2025, Proceedings*, volume 16296 of Lecture Notes in Computer Science, pp 16--30, 2025. Springer'
doi: 10.1007/978-3-032-09544-2\_2
links:
- name: URL
  url: https://doi.org/10.1007/978-3-032-09544-2\_2
- name: Poster
  url: 'poster.pdf'
---
