---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Combining voxel and normal predictions for multi-view 3D sketching
subtitle: ''
summary: ''
authors:
- Johanna Delanoy
- David Coeurjolly
- admin
- Adrien Bousseau
tags: [ "deep learning", "multi-view reconstruction", "discrete geometric estimator", "3D", "digital geometry application" ]
categories: []
date: '2019-01-01'
lastmod: 2022-11-03T17:39:47+01:00
featured: false
draft: false
url_code: https://gitlab.inria.fr/delanoy/voxCNN

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
publishDate: '2022-11-03T16:39:46.844148Z'
publication_types:
- '2'
abstract: 'Recent works on data-driven sketch-based modeling use either voxel grids or normal/depth maps as geometric representations compatible with convolutional neural networks. While voxel grids can represent complete objects – including parts not visible in the sketches – their memory consumption restricts them to low-resolution predictions. In contrast, a single normal or depth map can capture fine details, but multiple maps from different viewpoints need to be predicted and fused to produce a closed surface. We propose to combine these two representations to address their respective shortcom- ings in the context of a multi-view sketch-based modeling system. Our method predicts a voxel grid common to all the input sketches, along with one normal map per sketch. We then use the voxel grid as a support for normal map fusion by optimizing its extracted surface such that it is consistent with the re-projected normals, while being as piecewise-smooth as possible overall. We compare our method with a recent voxel prediction system, demonstrating improved recovery of sharp features over a variety of man-made objects.'
publication: '*Computers & Graphics*, 82: 65-72, 2019'
---
