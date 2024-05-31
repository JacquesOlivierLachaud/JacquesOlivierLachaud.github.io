---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Digital Calculus Frameworks and Comparative Evaluation of Their Laplace-Beltrami Operators
subtitle: ''
summary: ''
authors:
- Colin Weill-Duflos
- David Coeurjolly
- admin
# Author notes (optional)
# author_notes:
#   - 'Equal contribution'
#   - 'Equal contribution'

tags: [ "digital geometry", "digital calculus", "Laplace operator", "3D" ]
categories: []
date: '2024-04-01'
lastmod: 2024-04-01T17:39:54+01:00
featured: true
draft: false
# url_slides: 'slides.pdf'
# url_code: 'https://dgtal-team.github.io/doc-nightly/moduleDigitalConvexity.html'

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
projects: ["stable-proxies"]
publishDate: '2024-04-10T16:39:54.612353Z'
publication_types:
- '1'

abstract: 'Defining consistent calculus frameworks on discrete meshes is useful for processing the geometry of meshes or model numerical simulations and variational problems onto them. However digital surfaces (boundary of voxels) cannot benefit directly from the classical mesh calculus frameworks, since their vertex and face geometry is too poor to capture the geometry of the underlying smooth Euclidean surface well enough. This paper proposes two new calculus frameworks dedicated to digital surfaces, which exploit a corrected normal field, in a manner similar to the recent digital calculus of [3]. First we build a corrected interpolated calculus by defining inner products with position and normal interpolation in the Grassmannian. Second we present a corrected finite element method which adapts the standard Finite Element Method with a corrected metric per element. Experiments show that these digital calculus frameworks seem to converge toward the continuous calculus, offer a valid alternative to classical mesh calculus, and induce effective tools for digital surface processing tasks.'
        
publication: 'In: Brunetti, S., Frosini, A., Rinaldi, S. (eds) *Discrete Geometry and Mathematical Morphology*. DGMM 2024, volume 14605 of Lecture Notes in Computer Science, pp 93-106, 2024. Springer, Cham'

links:
- name: Slides
  url: 'slides.pdf'
- name: DOI
  url: https://doi.org/10.1007/978-3-031-57793-2_8
- name: URL
  url: https://link.springer.com/chapter/10.1007/978-3-031-57793-2_8

---
