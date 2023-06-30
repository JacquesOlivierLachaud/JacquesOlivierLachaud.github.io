---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Centerline detection on partial mesh scans by confidence vote in accumulation
  map
subtitle: ''
summary: ''
authors:
- Bertrand Kerautret
- Adrien Krähenbühl
- Isabelle Debled-Rennesson
- admin
tags: [ "centerline detection", "accumulation map", "3D", "digital geometry", "mesh processing" ]
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
publishDate: '2022-11-03T16:39:57.328562Z'
publication_types:
- '1'
abstract: 'This paper proposes an original method for extracting the centerline of 3D objects given only partial mesh scans as
input data. Its principle relies on the construction of a normal
vector accumulation map build by casting digital rays from input
vertices. This map is then pruned according to a confidence voting
rule: confidence in a point increases if this point has maximal
votes along a ray. Points with high confidence accurately delineate
the centerline of the object. The resulting centerline is robust
enough to allow the reconstruction of the associated graph by a
simple morphological processing of the confidence and a geodesic
tracking. The overall process is unsupervised and only depends
on a user-chosen maximal object radius. Experiments show a
good behavior on standard mesh scans. Moreover, the proposed
method is not only competitive with state-of-the-art methods on
perfect data, but appears to be much more reliable on imperfect
or damaged data, like holes, partial scans, noise, and scans from
only one direction.'
publication: '*Pattern Recognition (ICPR), 2016 23rd International Conference on*, Proceedings, pp 1376--1381, 2016, IEEE.'
---
