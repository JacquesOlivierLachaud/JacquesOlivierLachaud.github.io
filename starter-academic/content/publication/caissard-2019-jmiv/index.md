---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Laplace--Beltrami Operator on Digital Surfaces
subtitle: ''
summary: ''
authors:
- Thomas Caissard
- David Coeurjolly
- admin
- Tristan Roussillon
tags: [ "Laplace-Beltrami operator", "differential geometry", "digital surface", "multigrid convergence", "digital geometry", "nD", "discrete differential operator" ]
categories: []
date: '2019-01-01'
lastmod: 2022-11-03T17:39:47+01:00
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
publishDate: '2022-11-03T16:39:47.333201Z'
publication_types:
- '2'

abstract: 'This article presents a novel discretization of the
Laplace–Beltrami operator on digital surfaces.We adapt an existing
convolution technique proposed by Belkin et al. for triangular
meshes to topological border of subsets of {{< math
>}}$\mathbb{Z}^n${{< /math >}}. The core of the method relies on
first-order estimation of measures associated with our discrete
elements (such as length, area etc.). We show strong consistency
(i.e. pointwise convergence) of the operator and compare it against
various other discretizations.'

publication: '*Journal of Mathematical Imaging and Vision*, 61(3): 359-379, 2019'
doi: 10.1007/s10851-018-0839-4
links:
- name: "Code (DGtal)"
  url: https://dgtal-team.github.io/doc-nightly/moduleHeatLaplaceOperator.html
- name: URL
  url: https://doi.org/10.1007/s10851-018-0839-4
---
