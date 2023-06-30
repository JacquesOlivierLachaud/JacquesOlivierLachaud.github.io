---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Constructing Iso-Surfaces Satisfying the Delaunay Constraint; Application to
  the Skeleton Computation
subtitle: ''
summary: ''
authors:
- D. Attali
- admin
tags: [ "digital topology", "isosurface extraction", "marching cubes", "Delaunay triangulation", "skeleton", "3D", "geometry processing" ]
categories: []
date: '1999-01-01'
lastmod: 2022-11-03T17:40:09+01:00
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
publishDate: '2022-11-03T16:40:08.731944Z'
publication_types:
- '1'
abstract: 'We design a new model for an image iso-surface
which lies in the Delaunay graph of its vertices. Within
each 8-cube of the image, a set of loops is computed according to the connectedness chosen for inner and outer
voxels. Next, a triangulation is computed which respects
the local geometry of these loops. Efficiency is obtained
through the use of a look-up table which summarizes the
algebraic tests that are required of each case. The inclusion of the iso-surface in the Delaunay triangulation has
significant consequences. We derive a volume representation of the object, along with its skeleton. An example depicts the complete construction of our iso-surface,
volume representation and skeleton computation.'
publication: "*Proc. 10th Int. Conf. on Image Analysis and Processing (ICIAP'99), Venice, Italy, Sept. 27-29*, pp 382-387, 1999. IEEE"
links:
- name: URL
  url: https://doi.org/10.1109/ICIAP.1999.797625
---
