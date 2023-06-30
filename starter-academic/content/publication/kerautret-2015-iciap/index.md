---
# Documentation: https://wowchemy.com/docs/managing-content/

title: 3D Geometric Analysis of Tubular Objects Based on Surface Normal Accumulation
subtitle: ''
summary: ''
authors:
- B. Kerautret
- A. Krähenbühl
- I. Debled-Rennesson
- admin
tags: [ "digital geometry", "centerline extraction", "3D", "tubular objects" ]
categories: []
date: '2015-01-01'
lastmod: 2022-11-03T17:39:58+01:00
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
publishDate: '2022-11-03T16:39:58.566139Z'
publication_types:
- '1'
abstract: '
This paper proposes a simple and efficient method for the reconstruction and extraction of geometric parameters from 3D tubular objects. Our method constructs an image that accumulates surface normal information, then peaks within this image are located by tracking. Finally, the positions of these are optimized to lie precisely on the tubular shape centerline. This method is very versatile, and is able to process various input data types like full or partial mesh acquired from 3D laser scans, 3D height map or discrete volumetric images. The proposed algorithm is simple to implement, contains few parameters and can be computed in linear time with respect to the number of surface faces. Since the extracted tube centerline is accurate, we are able to decompose the tube into rectilinear parts and torus-like parts. This is done with a new linear time 3D torus detection algorithm, which follows the same principle of a previous work on 2D arc circle recognition. Detailed experiments show the versatility, accuracy and robustness of our new method.
'
publication: '*Proc. Image Analysis and Processing (ICIAP 2015), Genova, Italy*, pp 319-331, volume 9279 of Lecture Notes in Computer Science, 2015'
doi: 10.1007/978-3-319-23231-7_29
links:
- name: URL
  url: http://dx.doi.org/10.1007/978-3-319-23231-7_29
---
