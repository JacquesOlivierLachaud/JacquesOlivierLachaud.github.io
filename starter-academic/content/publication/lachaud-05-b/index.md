---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Deformable Model with a Complexity Independent from Image Resolution
subtitle: ''
summary: ''
authors:
- admin
- B. Taton
tags: [ "deformable model", "variational model", "topology adaptation", "resolution adaptation", "curvature estimation", "image segmentation", "reconstruction", "active contour", "image analysis", "2D", "Riemannian geometry", "image structure tensor" ]

categories: []
date: '2005-01-01'
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
publishDate: '2022-11-03T16:39:53.399060Z'
publication_types:
- '2'
abstract: '
      We present a parametric deformable model which recovers image
      components with a complexity independent from the resolution of
      input images. The proposed model also automatically changes its
      topology and remains fully compatible with the general framework
      of deformable models. More precisely, the image space is
      equipped with a metric that expands salient image details
      according to their strength and their curvature. 
      During the whole evolution of the model, the sampling of the
      contour is kept regular with respect to this metric. By this
      way, the vertex density is reduced along most parts of the curve
      while a high quality of shape representation is preserved. The
      complexity of the deformable model is thus improved and is no
      longer influenced by feature-preserving changes in the
      resolution of input images. Building the metric requires a prior
      estimation of contour curvature. It is obtained using a robust
      estimator which investigates the local variations in the
      orientation of image gradient. Experimental results on both
      computer generated and biomedical images are presented to
      illustrate the advantages of our approach.
'
publication: '*Computer Vision and Image Understanding*, 99(3): 453-475, 2005'
links:
- name: URL
  url: 'https://doi.org/10.1016/j.cviu.2005.04.002'
---
