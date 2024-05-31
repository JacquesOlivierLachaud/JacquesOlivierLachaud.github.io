---
# Documentation: https://wowchemy.com/docs/managing-content/

title: 'Joint optimization of distortion and cut location for mesh parameterization using an Ambrosio-Tortorelli functional'
subtitle: ''
summary: ''
authors:
- Colin Weill-Duflos
- David Coeurjolly
- Fernando de Goes
- admin
tags: [ "mesh parameterization", "UV mapping", "variational model", "Ambrosio-Tortorelli functional", "joint distortion and cut", "discrete calculus" ]
categories: []
date: '2023-04-16'
lastmod: 2023-04-16T12:39:45+01:00
featured: false
draft: false
url_code: 'https://github.com/Lieunoir/UV-AT'

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
publishDate: '2023-04-16T12:39:45.518558Z'
publication_types:
- '2'

abstract: 'UV mapping is a classical problem in computer graphics
aiming at computing a planar parameterization of the input mesh with
the lowest possible distortion while minimizing the seams
length. Recent works propose optimization methods for solving these
two joint problems at the same time with variational models, but they
tend to be slower than other cutting methods. We present a new
variational approach for this problem inspired by the
Ambrosio-Tortorelli functional, which is easier to optimize than
already existing methods. This functional has widely been used in
image and geometry processing for anisotropic denoising and
segmentation applications. The key feature of this functional is to
model both regions where smoothing is applied, and the loci of
discontinuities corresponding to the cuts. Our approach relies on this
principle to model both the low distortion objective of the UV map,
and the minimization of the seams length (sequences of mesh
edges). Our method significantly reduces the distortion in a faster
way than state-of-the art methods, with comparable seam quality. We
also demonstrate the versatility of the approach when external
constraints on the parameterization is provided (packing constraints,
seam visibility).'


publication: '*Computer Aided Geometric Design*, Proc. International Conference on Geometric Modeling and Processing (GMP 2023), Genoa, Italy. Accepted. To appear.'
doi: 10.1016/j.cagd.2023.102231

links:
- name: Slides
  url: 'slides.pdf'
- name: URL
  url: https://doi.org/10.1016/j.cagd.2023.102231

---
