---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Digital Curvature Evolution Model for Image Segmentation
subtitle: ''
summary: ''
authors:
- D. Antunes
- admin
- H. Talbot
tags: [ "digital deformable model", "curve evolution", "2D", "image segmentation", "image analysis", "digital geometry", "shape optimization" ]
categories: []
date: '2019-01-01'
lastmod: 2022-11-03T17:39:55+01:00
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
publishDate: '2022-11-03T16:39:55.600382Z'
publication_types:
- '1'
abstract: '  Recent works have indicated the potential of using curvature as a
  regularizer in image segmentation, in particular for the class of
  thin and elongated objects. These are ubiquitous in biomedical
  imaging (e.g. vascular networks), in which length regularization can
  sometime perform badly, as well as in texture
  identification. However, curvature is a second-order differential measure,
  and so its estimators are sensitive to noise. The straightforward
  extensions to Total Variation are not convex, making them a challenge
  to optimize.  State-of-art techniques make use of a coarse
  approximation of curvature that limits practical applications.

  We argue that curvature must instead be computed using a multigrid
  convergent estimator, and we propose in this paper a new digital
  curvature flow which mimics continuous curvature flow. We
  illustrate its potential as a post-processing step to a variational
  segmentation framework.
'
publication: "*International Conference on Discrete Geometry for Computer Imagery\
  \ (DGCI'2019), Marne-la-Vallée, France*"
doi: 10.1007/978-3-030-14085-4_2
links:
- name: URL
  url: https://doi.org/10.1007/978-3-030-14085-4_2
---
