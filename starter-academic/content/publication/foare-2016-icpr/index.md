---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Image restoration and segmentation using the Ambrosio-Tortorelli functional
  and discrete calculus
subtitle: ''
summary: ''
authors:
- Marion Foare
- admin
- Hugues Talbot
tags: [ "discrete calculus", "ambrosio-tortorelli functional", "image analysis", "image restoration", "image inpainting", "piecewise smooth reconstruction" ]
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
projects: [ "comedic" ]
publishDate: '2022-11-03T16:39:56.846231Z'
publication_types:
- '1'
abstract: 'Essential image processing and analysis tasks, such
as image segmentation, simplification and denoising, can be
conducted in a unified way by minimizing the Mumford-Shah
(MS) functional. Although seductive, this minimization is in
practice difficult because it requires to jointly define a sharp set
of contours and a smooth version of the initial image. For this
reason, various relaxations of the original formulations have been
proposed, together with optimisation methods. Among these, the
Ambrosio-Tortorelli (AT) parametric functional is of particular
interest, because minimizers of AT can be shown to converge to a
minimizer of MS. However this convergence is difficult to achieve
numerically using standard finite difference schemes. Indeed,
with AT, discontinuities need to be represented explicitly rather
than implicitly. In this work, we propose to formulate AT using
the full framework of Discrete Calculus (DC), which is able to
sharply represent discontinuities thanks to a more sophisticated
topological framework. We present our proposed formulation,
its resolution, and results on synthetic and real images. We show
that we are indeed able to represent sharp discontinuities and
as a result significantly better stability to noise, compared with
finite difference schemes.'
publication: '*Pattern Recognition (ICPR), 2016 23rd International Conference on*, Cancun, Mexico, 1418--1423, 2016, IEEE'
links:
- name: Slides (PDF)
  url:  'slides.pdf'
- name: Supplementary (PDF)
  url:  'supplementary.pdf'
- name: Code (DGtal)
  url: 'https://dgtal-team.github.io/doctools-nightly/moduleAT.html'
  
---
