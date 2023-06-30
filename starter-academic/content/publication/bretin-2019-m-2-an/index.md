---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Phase-field modelling and computing for a large number of phases
subtitle: ''
summary: ''
authors:
- Élie Bretin
- Roland Denis
- admin
- Édouard Oudet
tags: []
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
projects: [ "comedic" , "digital-snow" ]
publishDate: '2022-11-03T16:39:47.073461Z'
publication_types:
- '2'
abstract: '

We propose a framework to represent a partition that evolves under
mean curvature flows and volume constraints. Its principle follows a
phase-field representation for each region of the partition, as well
as classical Allen-Cahn equations for its evolution. We focus on the
evolution and on the optimization of problems involving high
resolution data with many regions in the partition.

In this context, standard phase-field approaches require a lot of
memory (one image per region) and computation timings increase at
least as fast as the number of regions. We propose a more efficient
storage strategy with a dedicated multi-image representation that
retains only significant phase field values at each discretization
point. We show that this strategy alone is unfortunately inefficient
with classical phase field models. This is due to non local terms and
low convergence rate.  We therefore introduce and analyze an improved
phase field model that localizes each phase field around its
associated region, and which fully benefits of our storage strategy.

To demonstrate the efficiency of the new multiphase field framework,
we apply it to the famous 3D honeycomb problem and the conjecture of
Weaire-Phelan’s tiling.
'

publication: '*ESAIM: Mathematical Modelling and Numerical Analysis*, 53(3): 805-832, 2019.'
doi: 10.1051/m2an/2018075
links:
- name: HAL
  url: https://hal.archives-ouvertes.fr/hal-01628403
- name: URL
  url: https://doi.org/10.1051/m2an/2018075


---
