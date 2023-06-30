---
# Documentation: https://wowchemy.com/docs/managing-content/

title: A combined multi-scale/irregular algorithm for the vectorization of noisy digital
  contours
subtitle: ''
summary: ''
authors:
- A. Vacavant
- T. Roussillon
- B. Kerautret
- admin
tags: [ "noisy object analysis", "digital geometry", "digital straight segment", "fuzzy segment", "multiscale analysis", "2D", "digital contour" ]
categories: []
date: '2013-01-01'
lastmod: 2022-11-03T17:39:50+01:00
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
publishDate: '2022-11-03T16:39:49.977599Z'
publication_types:
- '2'
abstract: '
This paper proposes and evaluates a new method for reconstructing a polygonal representation from
arbitrary digital contours that are possibly damaged or coming from the segmentation of noisy data.
The method consists in two stages. In the first stage, a multi-scale analysis of the contour is conducted
so as to identify noisy or damaged parts of the contour as well as the intensity of the perturbation. All
the identified scales are then merged so that the input data is covered by a set of pixels whose size is
increased according to the local intensity of noise. The second stage consists in transforming this set of
resized pixels into an irregular isothetic object composed of an ordered set of rectangular and axisaligned
cells. Its topology is stored as a Reeb graph, which allows an easy pruning of its unnecessary spurious
edges. Every remaining connected part has the topology of a circle and a polygonal representation is
independently computed for each of them. Four different geometrical algorithms, including a new one,
are reviewed for the latter task. These vectorization algorithms are experimentally evaluated and the
whole method is also compared to previous works on both synthetic and true digital images. For fair
comparisons, when possible, several error measures between the reconstruction and the ground truth
are given for the different techniques.
'
publication: '*Computer Vision and Image Understanding*, 117(4): 438--450, 2013'
doi: 10.1016/j.cviu.2012.07.006
links:
- name: URL
  url: http://www.sciencedirect.com/science/article/pii/S1077314212001841
---
