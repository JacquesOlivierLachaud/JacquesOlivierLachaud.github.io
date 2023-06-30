---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Delaunay conforming iso-surface; skeleton extraction and noise removal
subtitle: ''
summary: ''
authors:
- D. Attali
- admin
tags: [ "digital topology", "isosurface extraction", "marching cubes", "Delaunay triangulation", "skeleton", "3D", "surface reconstruction" ]
categories: []
date: '2001-01-01'
lastmod: 2022-11-03T17:39:53+01:00
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
publishDate: '2022-11-03T16:39:53.634584Z'
publication_types:
- '2'
abstract: '
Iso-surfaces are routinely used for the visualization of volumetric structures. Further processing (such as quantitative analysis, morphometric measurements, shape description) requires volume representations. The skeleton representation matches these requirements by providing a concise description of the object. This paper has two parts. First, we exhibit an algorithm which locally builds an iso-surface with two significant properties: it is a 2-manifold and the surface is a subcomplex of the Delaunay tetrahedrization of its vertices. Secondly, because of the latter property, the skeleton can in turn be computed from the dual of the Delaunay tetrahedrization of the iso-surface vertices. The skeleton representation, although informative, is very sensitive to noise. This is why we associate a graph to each skeleton for two purposes: (i) the amount of noise can be identified and quantified on the graph and (ii) the selection of the graph subpart that does not correspond to noise induces a filtering on the skeleton. Finally, we show some results on synthetic and medical images. An application, measuring the thickness of objects (heart ventricles, bone samples) is also presented.
'
publication: '*Computational Geometry: Theory and Applications*, 19 (2-3): 175-189, 2001'
links:
- name: URL
  url: https://doi.org/10.1016/S0925-7721(01)00019-0
---
