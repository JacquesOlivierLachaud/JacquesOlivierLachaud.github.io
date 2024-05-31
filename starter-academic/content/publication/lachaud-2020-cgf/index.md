---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Interpolated corrected curvature measures for polygonal surfaces
subtitle: ''
summary: ''
authors:
- admin
- Pascal Romon
- Boris Thibert
- David Coeurjolly
tags: [ "normal current", "curvature measures", "curvature estimation", "discrete geometric estimator", "3D", "polygonal mesh" ]
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
projects: [ "comedic" ]
publishDate: '2022-11-03T16:39:46.167220Z'
publication_types:
- '2'
abstract: '  A consistent and yet practically accurate definition of curvature
  onto polyhedral meshes remains an open problem. We propose a new
  framework to define curvature measures, based on the *Corrected
    Normal Current*, which generalizes the normal cycle: it uncouples
  the positional information of the polyhedral mesh from its geometric
  normal vector field, and the user can freely choose the
  *corrected* normal vector field at vertices for curvature
  computations.  A smooth surface is then built in the Grassmannian
  {{< math >}}$\mathbb{R}^3 \times \mathbb{S}^2${{< /math >}} by simply interpolating the given normal vector
  field. Curvature measures are then computed using the usual
  Lipschitz--Killing forms, and we provide closed-form formulas per
  triangle. We prove a stability result with respect to perturbations
  of positions and normals. Our approach provides a natural
  scale-space for all curvature estimations, where the scale is given
  by the radius of the measuring ball. We show on experiments how this
  method outperforms state-of-the-art methods on clean and noisy data,
  and even achieves pointwise convergence on difficult polyhedral
  meshes like digital surfaces. The framework is also well suited to
  curvature computations using normal map information.'
publication: '*Comput. Graph. Forum*, 39(5): 41-54, 2020'
doi: 10.1111/cgf.14067
links:
- name: Video
  url: https://www.youtube.com/watch?v=JUE9thE9In0
- name: Supplementary
  url: 'supplementary.pdf'
- name: Code (DGtal)
  url: https://dgtal-team.github.io/doc-nightly/moduleCurvatureMeasures.html
- name: Code (basic)
  url: https://github.com/dcoeurjo/CorrectedNormalCurrent.git
- name: URL
  url: https://doi.org/10.1111/cgf.14067
---
