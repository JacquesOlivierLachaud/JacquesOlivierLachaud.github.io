---
# Documentation: https://wowchemy.com/docs/managing-content/

title: An Optimized Framework for Plane-Probing Algorithms
subtitle: ''
summary: ''
authors:
- admin
- Jocelyn Meyron
- Tristan Roussillon
tags: [ "digital geometry", "discrete geometric estimator", "3D", "plane probing", "digital planarity" ]
categories: []
date: '2020-01-01'
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
projects: [ "paradis", "comedic" ]
publishDate: '2022-11-03T16:39:46.389901Z'
publication_types:
- '2'
abstract: 'A plane-probing algorithm computes the normal vector of a digital plane
  from a starting point and a predicate ``Is a point x in the digital plane?''.
  This predicate is used to probe the digital plane as locally as possible
  and decide on-the-fly the next points to consider.
  However, several existing plane-probing algorithms return the correct normal vector
  only for some specific starting points and an approximation otherwise, e.g. the H-
  and R-algorithm proposed in Lachaud et al. (J. Math. Imaging Vis., 59, 1,
  23--39, 2017). In this paper, we present a general framework for these
  plane-probing algorithms that provides a way of retrieving the correct normal
  vector from any starting point, while keeping their main features.
  There are {{< math >}}$O(\omega \log \omega)${{< /math >}} calls to the predicate in the worst-case scenario,
  where {{< math >}}$\omega${{< /math >}} is the thickness of the underlying digital plane, but far fewer calls are
  experimentally observed on average.
  In the context of digital surface analysis, the resulting algorithm is expected
  to be of great interest for normal estimation and shape reconstruction.'
publication: '*J. Math. Imaging Vis.*, 62(5): 718-736, 2020'
doi: 10.1007/s10851-020-00965-6
links:
- name: Code (DGtal)
  url: https://dgtal-team.github.io/doc-nightly/modulePlaneProbing.html
- name: URL
  url: https://doi.org/10.1007/s10851-020-00965-6
---
