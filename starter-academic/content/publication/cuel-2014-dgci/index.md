---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Voronoi-Based Geometry Estimator for 3D Digital Surfaces
subtitle: ''
summary: ''
authors:
- L. Cuel
- admin
- B. Thibert
tags: [ "voronoi covariance measure",  "geometric measure theory", "digital geometry", "stability", "geometric inference", "normal estimation", "multigrid convergence" ]
categories: []
date: '2014-01-01'
lastmod: 2022-11-03T17:39:59+01:00
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
projects: [ "digital-snow", "dgtal" ]
publishDate: '2022-11-03T16:39:59.307511Z'
publication_types:
- '1'
abstract: '
We propose a robust estimator of geometric quantities such as normals, curvature directions and sharp features for 3D digital surfaces. This estimator only depends on the digitisation gridstep and is defined using a digital version of the Voronoi Covariance Measure, which exploits the robust geometric information contained in the Voronoi cells. It has been proved in [1] that the Voronoi Covariance Measure is resilient to Hausdorff noise. Our main theorem explicits the conditions under which this estimator is multigrid convergent for digital data. Moreover, we determine what are the parameters which maximise the convergence speed of this estimator, when the normal vector is sought. Numerical experiments show that the digital VCM estimator reliably estimates normals, curvature directions and sharp features of 3D noisy digital shapes.
'
publication: "*Proc. Int. Conf. on Discrete Geometry for Computer Imagery (DGCI'2014), Sienna, Italy*, pp 134-149, volume 8668 of Lecture Notes in Computer Science, 2014"
doi: 10.1007/978-3-319-09955-2_12
links:
- name: Code (DGtal)
  url: 'https://dgtal-team.github.io/doc-nightly/moduleVCM.html'
- name: URL
  url: http://dx.doi.org/10.1007/978-3-319-09955-2_12
---
