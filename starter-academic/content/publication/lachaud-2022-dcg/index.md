---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Corrected Curvature Measures
subtitle: ''
summary: ''
authors:
- admin
- Pascal Romon
- Boris Thibert
tags: [ "geometric measure theory", "curvature estimator", "curvature measures", "digital geometry", "digital surface", "polgonal mesh", "discrete geometric estimator", "3D", "multigrid convergence" ]
categories: []
date: '2022-01-01'
lastmod: 2022-11-03T17:39:45+01:00
featured: false
draft: false

url_slides: 
url_code: 'https://dgtal-team.github.io/doc-nightly/moduleCurvatureMeasures.html'

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
publishDate: '2022-11-03T16:39:45.151982Z'
publication_types:
- '2'
abstract: 'This paper proposes a new mathematical and computational tool for
infering the geometry of shapes known only through approximations such as
triangulated or digital surfaces. The main idea is to decouple the
position of the shape boundary from its normal vector field. To do so,
we extend a classical tool of geometric measure theory, the normal
cycle, so that it takes as input not only a surface but also a normal
vector field. We formalize it as a current in the oriented Grassmann bundle
{{< math >}}$\mathbb{R}^3 \times \mathbb{S}^2${{< /math >}}. By choosing adequate differential forms, we define
geometric measures like area, mean and Gaussian curvatures. We then
show the stability of these measures when both position and normal
input data are approximations of the underlying continuous shape. As a
byproduct, our tool is able to correctly estimate curvatures over
polyhedral approximations of shapes with explicit bounds, even when their natural normal
are not correct, as long
as an external convergent normal vector field is provided. Finally,
the accuracy, convergence and stability under noise perturbation is
evaluated experimentally onto digital surfaces.'

publication: '*Discret. Comput. Geom.*, 68(2): 477--524, 2022'
doi: 10.1007/s00454-022-00399-4
links:
- name: URL
  url: https://doi.org/10.1007/s00454-022-00399-4
---
