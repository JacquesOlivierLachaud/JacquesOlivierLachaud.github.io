---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Corrected Laplace-Beltrami Operators for Digital Surfaces
subtitle: ''
summary: ''
authors:
- Colin Weill-Duflos
- David Coeurjolly
- admin
tags: [ "digital calculus", "Laplacian operator", "Differential operators" ]
categories: []
date: '2025-03-07'
lastmod: '2025-03-07'
featured: true
draft: false
url_code: 'https://dgtal-team.github.io/doc-nightly'

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
projects: [ "stable-proxies" ]
publishDate: '2025-03-07'
publication_types:
- '2'

abstract: 'Defining consistent calculus frameworks on discrete meshes is useful for processing the geometry of meshes or model numerical simulations and variational problems onto them. However digital surfaces (boundary of voxels) cannot benefit directly from the classical mesh calculus frameworks, since their vertex and face geometry is too poor to capture the geometry of the underlying smooth Euclidean surface well enough. This paper proposes three new calculus frameworks dedicated to digital surfaces, which exploit a corrected normal field, in a manner similar to the recent digital calculus of [1]. First we build a corrected interpolated calculus by defining inner products with position and normal inter- polation in the Grassmannian. Second we present a corrected finite element method which adapts the standard Finite Element Method with a corrected metric per element. Third we present a corrected virtual refinement method adapting the method of [2]. Experiments show that these digital calcu- lus frameworks seem to converge toward the continuous calculus, offer a valid alternative to classical mesh calculus, and induce effective tools for digital surface processing tasks. We then use these cor- rected Laplace-Beltrami operators in order to build a regularization method for digital surface, using geometric information given by discrete normal and curvature estimators.'


publication: '*J. Math. Imaging Vis.*, 67(2): 11, 2025.'
doi: 10.1007/S10851-024-01226-6
links:
- name: URL
  url: https://doi.org/10.1007/s10851-024-01226-6
---
