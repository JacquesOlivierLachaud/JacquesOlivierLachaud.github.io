---
title: IPCV (Master Erasmus Mundus)
summary: Digital geometry processing
date: 2025-11-19
type: docs
tags:
  - lecture
  - digital geometry
  - geometry processing
---

## IPCV - Digital Geometry Processing

> Course (Semester 9) of <a href="ipcv.eu"> Master Erasmus Mundus IPCVai </a> (Artificial Intelligence for Image Processing and Computer Vision)
> <a style="color:#907bf7;">[Jacques-Olivier Lachaud, November 2025]</a>

### Abstract

This course aims at presenting the field of digital geometry and its
applications to the analysis and processing of (mainly) 3D
images. Digital geometry views shapes as subsets of the lattice grids
in arbitrary dimension. 2D shapes are thus sets of pixels, while 3D
shapes are sets of voxels. It provides consistent definitions for
contours and surfaces, and convergent definitions of tangents, normal
vectors, curvatures. It is thus a sound counterpart to Euclidean
geometry, but adapted to discrete data as provided by imaging
devices. It also develops a sound discrete exterior calculus on
digital surfaces, thus providing all the necessary tools for
manipulating vector fields on such objects, or doing spectral geometry
processing.

The course takes place from December 9 to December 11, 2025, in Bordeaux.

### Lectures

- [On-line lectures and practicals](https://codimd.math.cnrs.fr/s/dc2zU_Cui) (wip)

- See also <a href="https://jacquesolivierlachaud.github.io/talk/introduction-to-digital-geometry/"> Introduction to Digital Geometry </a>

### Practicals

- [On-line lectures and practicals](https://codimd.math.cnrs.fr/s/dc2zU_Cui)

Practicals will use the DGtal library (https://dgtal.org), an
open-source generic C++ library well adapted to digital geometry
processing. Coding will be in C++.

**Visit and clone repository https://github.com/JacquesOlivierLachaud/IPCV-practicals**

* TP1 [Filtering and segmentation of 3D CT thoracic image](https://codimd.math.cnrs.fr/s/VSydn_j1G)
    > (ready) 3d image filtering, digital surfaces
* TP2 [Homotopic thinning](https://codimd.math.cnrs.fr/s/bVqUMFbM5) (wip)
    > (wip) 3d shapes, digital topology, cubical complexes
* TP3 [Geometric estimations on 3d digital surfaces](https://codimd.math.cnrs.fr/s/s2pNRQuga)
    > (ready) 3d shapes, geometric estimators, multigrid convergence


### Notes

Featured image represents two distance transforms on digital surfaces,
a bunny and a dragon. They were computed using the diffusion of a
convergent Laplace-Beltrami operator onto such surfaces.
