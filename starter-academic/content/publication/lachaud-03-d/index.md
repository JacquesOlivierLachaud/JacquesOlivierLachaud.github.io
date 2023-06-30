---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Deformable Model with Adaptive Mesh and Automated Topology Changes
subtitle: ''
summary: ''
authors:
- admin
- B. Taton
tags: [ "image segmentation", "shape recovery", "reconstruction", "deformable model", "3D", "snake", "automated topology changes", "adaptive resolution", "Riemannian geometry", "Lagrangian mechanics", "deformable surface", "image structure tensor", "variational model" ]
categories: []
date: '2003-01-01'
lastmod: 2022-11-03T17:40:07+01:00
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
projects: []
publishDate: '2022-11-03T16:40:07.744797Z'
publication_types:
- '1'
abstract: '

    Due to their general and robust formulation deformable models offer a
    very appealing approach to 3D image segmentation. However
    there is a trade-off between model genericity, model accuracy and
    computational efficiency. In general, fully generic models require
    a uniform sampling of either the space or their mesh. The
    segmentation accuracy is thus a global parameter. Recovering small
    image features results in heavy computational costs whereas
    generally only restricted parts of images require a high
    segmentation accuracy.

    This paper presents a highly deformable model that both handles
    fully automated topology changes and adapts its resolution locally
    according to the geometry of image features. The main idea is to
    replace the Euclidean metric with a Riemannian metric that expands
    interesting parts of the image. Then, a regular sampling is
    maintained with this new metric. This allows to automatically
    handle topology changes while increasing the model resolution
    locally according to the geometry of image components. By this way
    high quality segmentation is achieved with reduced computational
    costs.
'
publication: "*Proc. 4th int. Conf. 3-D Digital Imaging and Modeling (3DIM'2003), Banff, Alberta, Canada*. IEEE Computer Society Press"
links:
- name: URL
  url: https://ieeexplore.ieee.org/document/1240227
---
