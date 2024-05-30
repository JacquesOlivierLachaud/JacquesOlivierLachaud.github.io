---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Construction of Fast and Accurate 2D Bijective Rigid Transformation
subtitle: ''
summary: ''
authors:
- Stéphane Breuils
- David Coeurjolly
- admin
# Author notes (optional)
# author_notes:
#   - 'Equal contribution'
#   - 'Equal contribution'

tags: [ "digital geometry", "digital calculus", "bijective rotations", "optimal transport", "2D" ]
categories: []
date: '2024-04-01'
lastmod: 2024-04-01T17:39:54+01:00
featured: false
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

abstract: 'Preserving surfaces or volumes of digital objects is crucial when applying transformations of 2D/3D digital objects in medical images and computer vision. To achieve this goal, the digital geometry community has focused on characterizing bijective digitized rotations and reflections. However, the angular distribution of these bijective rigid transformations is far from being dense. Other bijective approximations of rigid transformations have been proposed, but the state-of-the-art methods lack the experimental evaluations necessary to include them in real-life applications. This paper presents several new methods to approximate digitized rotations with bijective transformations, including the composition of bijective digitized reflections, bijective rotation by circles and bijective rotation through optimal transport. These new methods and several classical ones are compared both in terms of accuracy with respect to Euclidean rotations, and in terms of computational complexity and practical speed in real-time applications.'
        
publication: 'In: Brunetti, S., Frosini, A., Rinaldi, S. (eds) *Discrete Geometry and Mathematical Morphology*. DGMM 2024, volume 14605 of Lecture Notes in Computer Science, pp 80-92, 2024. Springer, Cham'

links:
- name: DOI
  url: https://doi.org/10.1007/978-3-031-57793-2_7
- name: URL
  url: https://link.springer.com/chapter/10.1007/978-3-031-57793-2_7
# - name: Slides
#  url: 'slides.pdf'

---

## Visual comparison of a few bjective rotations in Z2

The bigger the radius, the closer the digital rotations are close to
the continuous rotations.

<table>
<tr>
<td><b>Bijective rotation along circles (RBC)</b></td>
<td><b>Bijective rotation along rings of radius 2 and optimal transport (OTC2)</b></td>
</tr>
<tr>
<td> <img src="./turbine-RBC.gif"> </td>
<td> <img src="./turbine-OTC2.gif"> </td>
<tr>
<td><b>Bijective rotation along rings of radius 3 and optimal transport (OTC3)</b></td>
<td><b>Bijective rotation along rings of radius 4 and optimal transport (OTC4)</b></td>
</tr>
<tr>
<td> <img src="./turbine-OTC3.gif"> </td>
<td> <img src="./turbine-OTC4.gif"> </td>
<tr>
</table>