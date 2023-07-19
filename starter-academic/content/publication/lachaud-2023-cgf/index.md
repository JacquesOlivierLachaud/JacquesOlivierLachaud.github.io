---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Lightweight Curvature Estimation on Point Clouds with Randomized Corrected Curvature Measures
subtitle: ''
summary: ''
authors:
- admin
- David Coeurjolly
- Céline Labart
- Pascal Romon
- Boris Thibert
tags: [ "normal current", "curvature measures", "curvature estimator", "3D", "point clouds", "geometric inference", "stability" ]
categories: []
date: '2023-07-02'
lastmod: 2023-07-02
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
publishDate: '2023-07-02T16:39:46.167220Z'
publication_types:
- '2'
abstract: 'The estimation of differential quantities on oriented point cloud is a classical step for many geometry processing tasks in computer graphics and vision. Even if many solutions exist to estimate such quantities, they usually fail at satisfying both a stable estimation with theoretical guarantee, and the efficiency of the associated algorithm. Relying on the notion of corrected curvature measures [LRT22, LRTC20] designed for surfaces, the method introduced in this paper meets both requirements. Given a point of interest and a few nearest neighbours, our method estimates the whole curvature tensor information by generating random triangles within these neighbours and normalising the corrected curvature measures by the corrected area measure. We provide a stability theorem showing that our pointwise curvatures are accurate and convergent, provided the noise in position and normal information has a variance smaller than the radius of neighbourhood. Experiments and comparisons with the state-of-the-art confirm that our approach is more accurate and much faster than alternatives. The method is fully parallelizable, requires only one nearest neighbour request per point of computation, and is trivial to implement.'
publication: '*Comput. Graph. Forum*, (Proc. of Symposium on Geometry Processing, SGP2023, Geno, Italy)), To appear in 42(5), 2023'
doi: 10.1111/cgf.14067todo
links:
- name: Slides
  url: 'slides.pdf'
- name: Supplementary
  url: 'supplementary.pdf'
- name: Code
  url: https://github.com/JacquesOlivierLachaud/PointCloudCurvCNC.git
- name: URL
  url: https://doi.org/10.1111/cgf.14067todo
---
