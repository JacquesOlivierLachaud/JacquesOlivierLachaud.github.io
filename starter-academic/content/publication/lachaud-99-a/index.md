---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Deformable Meshes with Automated Topology Changes for Coarse-to-fine 3D Surface
  Extraction
subtitle: ''
summary: ''
authors:
- admin
- A. Montanvert
tags: [ "3D biomedical imagery", "image analysis", "medical imaging", "image segmentation", "shape recovery", "deformable model", "automated topology changes", "multiresolution", "snake", "3D pyramid", "deformable surface", "variational model", "3D" ]
categories: []
date: '1999-01-01'
lastmod: 2022-11-03T17:39:54+01:00
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
publishDate: '2022-11-03T16:39:54.125418Z'
publication_types:
- '2'
abstract: 'This work presents a generic deformable model for extracting objects from
  volumetric data with a coarse-to-fine approach. This model is based on a dynamic
  triangulated surface which alters its geometry according to internal and external
  constraints to perform shape recovery. A new framework for topology changes is proposed
  to extract complex objects: within this framework, the model dynamically adapts
  its topology to the geometry of its vertices according to simple distance constraints.
  In order to speed up the process, an algorithm of pyramid construction with any
  reduction factor transforms the image into a set of images with progressive resolutions.
  This organization into a hierarchy, combined with a model which can adapt its sampling
  to the resolution of the workspace, enables a fast estimation of the shapes included
  in the image. After that, the model searches for finer and finer details while relying
  successively on the different levels of the pyramid. '
publication: '*Medical Image Analysis*, 3(2): 187-207, 1999'
links:
- name: URL
  url: https://doi.org/10.1016/S1361-8415(99)80006-1
---
