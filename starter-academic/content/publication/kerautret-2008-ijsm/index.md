---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Curvature based corner detector for discrete, noisy and multi-scale contours
subtitle: ''
summary: ''
authors:
- B. Kerautret
- admin
- B. Naegel
tags: [ "curvature estimation", "corner detection", "digital contour", "noisy contour", "stability", "robustness to noise" ]
categories: []
date: '2008-01-01'
lastmod: 2022-11-03T17:39:52+01:00
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
publishDate: '2022-11-03T16:39:52.149569Z'
publication_types:
- '2'
abstract: '
Estimating curvature on digital shapes is known to be a difficult problem even in
high resolution images. Moreover the presence of noise contributes to the insta-
bility of the estimators and limits their use in many computer vision applications like
corner detection. Several recent curvature estimators, which comes from the dis-
crete geometry community, can now process damaged data and integrate the amount
of noise in their analysis. In this paper, we propose a comparative evaluation of these
estimators, testing their accuracy, efficiency, and robustness with respect to several type
of degradations. We further compare the best one with the visual curvature proposed
by Liu et al., a recently published method from the computer vision community. We
finally propose a novel corner detector, which is based on curvature estimation, and we
provide a comprehensive set of experiments to compare it with many other classical cor-
ner detectors. Our study shows that this corner detector has most of the time a better
behavior than the others, while requiring only one parameter to take into account the 
noise level. It is also promising for multi-scale shape description.
'
publication: '*International Journal of Shape Modeling*, 14(2): 127-145, 2008'
doi: 10.1142/S0218654308001117
---
