---
# An instance of the Blank widget with a Gallery page element.
# Documentation: https://wowchemy.com/docs/getting-started/page-builder/
widget: markdown

# This file represents a page section.
headless: true

# Order that this section appears on the page.
weight: 50

title: "Gallery"
subtitle: "Some images of my research"

design:
  columns: '2'

gallery_item:
- album: demo
  image: butterfly-geodesics-1.jpg
  caption: 'Shortest paths along a digital surface using tangency property given by full convexity. Note that induced distances are Euclidean in every planar (even slanted) parts of the digital surface.'
- album: demo
  image: delaunay-3d-ball-10.jpg
  caption: 'Delaunay complex of a set of lattice points randomly generated within a ball of radius 10. Note that co-sphericities of more than 4 points are quite frequent in lattice spaces, and Delaunay cells may thus not be tetrahedra. Module Quickhull of DGtal allows you to compute the Delaunay complex of lattice/rational points in arbitrary dimension.'  
- album: demo
  image: qhull-digital-sphere-50.jpg
  caption: '3D Convex hull a digital ball of radius 50. Note that co-sphericities of more than 4 points are quite frequent in lattice spaces, and the convex hull has many non triangular faces. Module Quickhull of DGtal allows you to compute the convex hull of lattice/rational points in arbitrary dimension.'
- album: demo
  image: xyz-dragon-reco.jpg
  caption: 'Reconstruction from a digital surface of a polygonal mesh using a variational model written in discrete calculus. The model optimizes the estimated area of each quad facet so that this area target an area estimated from an estimated normal vector. We obtain a quad surface with non degenerated quads.'
- album: demo
  image: dragon-icnc-convergence-H.jpg
  caption: 'Multigrid convergence of mean curvature estimator based on Corrected Normal Current. The finer the sampling, the more stable are the curvature estimations.'
- album: demo
  image: dragon-icnc-convergence-G.jpg
  caption: 'Multigrid convergence of Gaussian curvature estimator based on Corrected Normal Current. The finer the sampling, the more stable are the curvature estimations.'
- album: demo
  image: sharp-sphere-features-3d-AT.png
  caption: 'Extraction of sharp features along digital surfaces, undamaged or noisy, using a discrete calculus formulation of the Ambrosio-Tortorelli functional.'
- album: demo
  image: pok-066.jpg
  caption: 'Depixelizing pixel art: 16 x zoomed bitmap image using Geometric Total Variation.'
- album: demo
  image: pok-085.jpg
  caption: 'Depixelizing pixel art: 16 x zoomed bitmap image using Geometric Total Variation.'
- album: demo
  image: bunny64-NAdd-VCM-h1-dirs-fine-1.png
  caption: 'Estimated principal directions of curvature on a digitized Stanford bunny shape (resolution 64x64x64) using corrected curvature measures; principal curvatures are depicted using colors (blue is very low negative, cyan is low negative, black is zero, yellow is high positive, red is very high positive).' 
---

{{< gallery album="demo" >}}

