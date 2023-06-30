---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Digital Plane Recognition with Fewer Probes
subtitle: ''
summary: ''
authors:
- T. Roussillon
- admin
tags: [ "digital geometry", "digital planarity", "digital plane recognition", "normal vector estimation", "plane probing", "discrete geometric estimator", "parameter-free estimator"]
categories: []
date: '2019-01-01'
lastmod: 2022-11-03T17:39:56+01:00
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
publishDate: '2022-11-03T16:39:55.866661Z'
publication_types:
- '1'
abstract: 'We present a new plane-probing algorithm, i.e., an algorithm
that computes the normal vector of a digital plane from a starting point
and a predicate "Is a point x in the digital plane?". This predicate is
used to probe the digital plane as locally as possible and decide on-the-fly the next points to consider. We show that this algorithm returns the
same vector as another plane-probing algorithm proposed in Lachaud
et al. (J. Math. Imaging Vis., 59(1): 23-39, 2017), but requires fewer
probes. The theoretical upper bound is indeed lowered from {{< math >}}$O(\omega \log \omega)${{< /math >}}
to {{< math >}}$O(\omega )${{< /math >}} calls to the predicate, where {{< math >}}$\omega ${{< /math >}} is the arithmetical thickness
of the digital plane, and far fewer calls are experimentally observed on
average. This reduction is made possible by a study that shows how to
avoid computations that do not contribute to the final solution. In the
context of digital surface analysis, this new algorithm is expected to be
of great interest for normal estimation and shape reconstruction.'
publication: '*Discrete Geometry for Computer Imagery - International Conference, DGCI 2019, Paris, France, March 25-29, 2019, Proceedings*'
doi: 10.1007/978-3-030-14085-4_30
links:
- name: URL
  url: https://doi.org/10.1007/978-3-030-14085-4_30
---
