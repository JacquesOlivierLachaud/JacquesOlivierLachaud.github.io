---
# Documentation: https://wowchemy.com/docs/managing-content/

title: On the Implementation of Centerline Extraction Based on Confidence Vote in
  Accumulation Map
subtitle: ''
summary: ''
authors:
- Bertrand Kerautret
- Adrien Krähenbühl
- Isabelle Debled-Rennesson
- admin
tags: [ "centerline extraction", "mesh processing", "confidence vote", "accumulation map", "digital geometry" ]
categories: []
date: '2016-01-01'
lastmod: 2022-11-03T17:39:57+01:00
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
publishDate: '2022-11-03T16:39:57.560138Z'
publication_types:
- '1'
abstract: 'This paper focuses on the implementation details of a recent
method which extracts the centerline of 3D shapes using solely partial
mesh scans of these shapes. This method [9] extracts the shape centerline by constructing an accumulation map from input points and normal
vectors and by filtering it with a confidence vote. This paper presents in
details all the algorithms of the method and describes the implementation and development choices. Some experiments test the robustness to
the parameter variability and show the current limitations allowing to
consider further improvements.'
publication: '*International Workshop on Reproducible Research in Pattern Recognition*, RRPR2016, pages 116-130, volume 10214 of Lecture Notes in Computer Science, 2016'
---
