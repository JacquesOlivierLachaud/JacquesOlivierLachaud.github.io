---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Mumford-Shah Mesh Processing using the Ambrosio-Tortorelli Functional
subtitle: ''
summary: ''
authors:
- Nicolas Bonneel
- David Coeurjolly
- Pierre Gueth
- admin
tags: [ "variational model", "geometry processing", "mesh processing", "ambrosio-tortorelli functional", "discrete calculus", "mumford-shah functional", "denoising", "inpainting", "embossing", "mesh segmentation" ]
categories: []
date: '2018-01-01'
lastmod: 2022-11-03T17:39:47+01:00
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
publishDate: '2022-11-03T16:39:47.567886Z'
publication_types:
- '2'
abstract: '
The Mumford-Shah functional approximates a function by a piecewise
smooth function. Its versatility makes it ideal for tasks such as
image segmentation or restoration, and it is now a widespread tool of
image processing. Recent work has started to investigate its use for
mesh segmentation and feature lines detection, but we take the stance
that the power of this functional could reach far beyond these tasks
and integrate the everyday mesh processing toolbox. In this paper, we
discretize an Ambrosio-Tortorelli approximation via a Discrete
Exterior Calculus formulation. We show that, combined with a new shape
optimization routine, several mesh processing problems can be readily
tackled within the same framework. In particular, we illustrate
applications in mesh denoising, normal map embossing, mesh inpainting
and mesh segmentation.'

publication: '*Computer Graphics Forum*, 37(7): 75-85, 2018'
doi: 10.1111/cgf.13549
links:
- name: GitHub
  link: 'https://github.com/dcoeurjo/MS-AT-MeshProcessing'
  icon: github
  icon_pack: fab
- name: Slides (PDF)
  link: 'slides.pdf'
- name: URL
  url: https://onlinelibrary.wiley.com/doi/abs/10.1111/cgf.13549
---
