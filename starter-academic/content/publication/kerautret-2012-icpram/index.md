---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Meaningful Thickness Detection On Polygonal Curve
subtitle: ''
summary: ''
authors:
- B. Kerautret
- admin
- M. Said
tags: [ "polygonal curve", "meaningful scale", "digital straightness", "noise detection", "2D" ]
categories: []
date: '2012-01-01'
lastmod: 2022-11-03T17:40:00+01:00
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
publishDate: '2022-11-03T16:40:00.038676Z'
publication_types:
- '1'
abstract: '
The notion of meaningful scale was recently introduced to detect the amount of noise present along a digital
contour (Kerautret and Lachaud, 2009b). It relies on the asymptotic properties of the maximal digital straight
segment primitive. Even though very useful, the method is restricted to digital contour data and is not able
to process other types of geometric data like disconnected set of points. In this work, we propose a solution
to outcome this limitation. It exploits another primitive called the Blurred Segment (Debled-Rennesson et al.,
2006) which controls the straight segment recognition precision of disconnected sets of points. The resulting
noise detection provides precise results and is also more simple to implement. A first application of contour
smoothing demonstrates the efficiency of the proposed method. The algorithms can also be tested online
(Kerautret et al., 2011).
'
publication: "*Proc. 1st Int. Conf. on Pattern Recognition Applications and Methods (ICPRAM'2012), Vilamoura, Algarve, Portugal*"

links:
  - name: Slides (PDF)
    url:  'slides.pdf'
    
---
