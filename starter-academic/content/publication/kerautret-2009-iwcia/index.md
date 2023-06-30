---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Multiscale Analysis of Discrete Contours for Unsupervised Noise Detection
subtitle: ''
summary: ''
authors:
- B. Kerautret
- admin
tags: ["digital geometry", "digital contour", "contour analysis", "noise detection", "asym\
ptotic digital geometry", "meaningful scales", "2D", "image analysis"]
categories: []
date: '2009-01-01'
lastmod: 2022-11-03T17:40:02+01:00
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
projects: [ "geodib" ]
publishDate: '2022-11-03T16:40:02.756686Z'
publication_types:
- '1'
abstract: '
Blurred segments [2] were introduced in discrete geometry to address possible noise along discrete contours. The noise is not really detected but is rather canceled out by thickening digital straight segments. The thickness is tuned by a user and set globally for the contour, which requires both supervision and non-adaptive contour processing. To overcome this issue, we propose an original strategy to detect locally both the amount of noise and the meaningful scales of each point of a digital contour. Based on the asymptotic properties of maximal segments, it also detects curved and flat parts of the contour. From a given maximal observation scale, the proposed approach does not require any parameter tuning and is easy to implement. We demonstrate its effectiveness on several datasets. Its potential applications are numerous, ranging from geometric estimators to contour reconstruction.
'
publication: '*Proc. International Workshop on Combinatorial Image Analysis (IWCIA2009)*, volume 5852 of Lecture Notes in Computer Science, pp 187-200, 2009. Springer'
links:
- name: URL
  url: http://hal.archives-ouvertes.fr/hal-00413662/en/
---
