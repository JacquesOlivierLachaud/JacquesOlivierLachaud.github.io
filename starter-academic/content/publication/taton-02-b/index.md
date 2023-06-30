---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Deformable Model with non-Euclidean Metrics
subtitle: ''
summary: ''
authors:
- B. Taton
- admin
tags:
- image segmentation
- shape recovery
- deformable models
- snakes
- automated topology changes
- adaptive resolution
- Riemannian geometry
- Lagrangian mechanics
- variational model
- 2D
categories: []
date: '2002-01-01'
lastmod: 2022-11-03T17:40:08+01:00
featured: false
draft: false

# Featured image
# To use, add an image named `featured.jpg/png` to your page's folder.
# Focal points: Smart, Center, TopLeft, Top, TopRight, Left, Right, BottomLeft, Bottom, BottomRight.
image:
  caption: ''
  focal_point: ''
  preview_only: false

links:
  - name: "Poster (PDF)"
    url: 'poster.pdf'

# Projects (optional).
#   Associate this post with one or more of your projects.
#   Simply enter your project's folder or file name without extension.
#   E.g. `projects = ["internal-project"]` references `content/project/deep-learning/index.md`.
#   Otherwise, set `projects = []`.
projects: []
publishDate: '2022-11-03T16:40:08.002139Z'
publication_types:
- '1'
abstract: '
Deformable models like snakes are a classical tool for image
segmentation. Highly deformable models extend them with the ability to
handle dynamic topological changes, and therefore to extract arbitrary
complex shapes. However, the resolution of these models largely
depends on the resolution of the image. As a consequence, their time
and memory complexity increases at least as fast as the size of input
data. In this paper we extend an existing highly deformable model, so
that it is able to locally adapt its resolution with respect to its
position. With this property, a significant precision is achieved in
the interesting parts of the image, while a coarse resolution is
maintained elsewhere. The general idea is to replace the Euclidean
metric of the image space by a deformed non-Euclidean metric, which
geometrically expands areas of interest. With this approach, we obtain
a new model that follows the robust framework of classical deformable
models, while offering a significant independence from both the size
of input data and the geometric complexity of image components.
'
publication: "*Proc. 7th European Conference on Computer Vision (ECCV'2002), Copenhagen, Denmark*, volume 2352 (part III) of Lecture Notes in Computer Science, pp 438-453, 2002. Springer"
links:
- name: URL
  url: https://doi.org/10.1007/3-540-47977-5_29
---
