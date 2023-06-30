---
# Documentation: https://wowchemy.com/docs/managing-content/

title: Geometric Total Variation for Image Vectorization, Zooming and Pixel Art Depixelizing
subtitle: ''
summary: ''
authors:
- Bertrand Kerautret
- admin
tags: [ "variational model", "total variation", "geometric total variation", "triangulation", "image vectorization", "depixelizing pixel art", "image zooming", "2D", "image synthesis" ]
categories: []
date: '2019-01-01'
lastmod: 2022-11-03T17:39:55+01:00
featured: true
draft: false

# Featured image
# To use, add an image named `featured.jpg/png` to your page's folder.
# Focal points: Smart, Center, TopLeft, Top, TopRight, Left, Right, BottomLeft, Bottom, BottomRight.
image:
  caption: ''
  focal_point: 'Center'
  preview_only: false

# Projects (optional).
#   Associate this post with one or more of your projects.
#   Simply enter your project's folder or file name without extension.
#   E.g. `projects = ["internal-project"]` references `content/project/deep-learning/index.md`.
#   Otherwise, set `projects = []`.
projects: [ "comedic" ]
publishDate: '2022-11-03T16:39:55.368191Z'
publication_types:
- '1'
abstract: 'We propose an original method for vectorizing an image or
zooming it at an arbitrary scale. The core of our method relies on the
resolution of a geometric variational model and therefore offers theoretic
guarantees. More precisely, it associates a total variation energy to every
valid triangulation of the image pixels. Its minimization induces a triangulation that reflects image gradients. We then exploit this triangulation
to precisely locate discontinuities, which can then simply be vectorized
or zoomed. This new approach works on arbitrary images without any
learning phase. It is particularly appealing for processing images with
low quantization like pixel art and can be used for depixelizing such images. The method can be evaluated with an online demonstrator, where
users can reproduce results presented here or upload their own images.'

publication: '*Pattern Recognition - 5th Asian Conference, ACPR 2019, Auckland, New
  Zealand, November 26-29, 2019, Revised Selected Papers, Part I*, volume 12046 of Lecture Notes  in Computer Science, pp 391-405, 2019. Springer'
doi: 10.1007/978-3-030-41404-7_28

links:
- name: Code
  icon: github
  icon_pack: fab
  url: https://github.com/kerautret/GTVimageVect
- name: "IPOL Demo"
  url: 'https://ipolcore.ipol.im/demo/clientApp/demo.html?id=280'
- name: URL
  url: https://doi.org/10.1007/978-3-030-41404-7_28
---

**Click on each icon below to see its zoomedx16 version !**

<table>
<tr>
<td><a href="together/pok-000.jpg"><img src="input/pok-000.png"></a></td>
<td><a href="together/pok-001.jpg"><img src="input/pok-001.png"></a></td>
<td><a href="together/pok-002.jpg"><img src="input/pok-002.png"></a></td>
<td><a href="together/pok-003.jpg"><img src="input/pok-003.png"></a></td>
<td><a href="together/pok-004.jpg"><img src="input/pok-004.png"></a></td>
<td><a href="together/pok-005.jpg"><img src="input/pok-005.png"></a></td>
<td><a href="together/pok-006.jpg"><img src="input/pok-006.png"></a></td>
<td><a href="together/pok-007.jpg"><img src="input/pok-007.png"></a></td>
<td><a href="together/pok-008.jpg"><img src="input/pok-008.png"></a></td>
</tr>
<tr>
<td><a href="together/pok-010.jpg"><img src="input/pok-010.png"></a></td>
<td><a href="together/pok-011.jpg"><img src="input/pok-011.png"></a></td>
<td><a href="together/pok-012.jpg"><img src="input/pok-012.png"></a></td>
<td><a href="together/pok-013.jpg"><img src="input/pok-013.png"></a></td>
<td><a href="together/pok-014.jpg"><img src="input/pok-014.png"></a></td>
<td><a href="together/pok-015.jpg"><img src="input/pok-015.png"></a></td>
<td><a href="together/pok-016.jpg"><img src="input/pok-016.png"></a></td>
<td><a href="together/pok-017.jpg"><img src="input/pok-017.png"></a></td>
<td><a href="together/pok-018.jpg"><img src="input/pok-018.png"></a></td>
</tr>
<tr>
<td><a href="together/pok-020.jpg"><img src="input/pok-020.png"></a></td>
<td><a href="together/pok-021.jpg"><img src="input/pok-021.png"></a></td>
<td><a href="together/pok-022.jpg"><img src="input/pok-022.png"></a></td>
<td><a href="together/pok-023.jpg"><img src="input/pok-023.png"></a></td>
<td><a href="together/pok-024.jpg"><img src="input/pok-024.png"></a></td>
<td><a href="together/pok-025.jpg"><img src="input/pok-025.png"></a></td>
<td><a href="together/pok-026.jpg"><img src="input/pok-026.png"></a></td>
<td><a href="together/pok-027.jpg"><img src="input/pok-027.png"></a></td>
<td><a href="together/pok-028.jpg"><img src="input/pok-028.png"></a></td>
</tr>
<tr>
<td><a href="together/pok-030.jpg"><img src="input/pok-030.png"></a></td>
<td><a href="together/pok-031.jpg"><img src="input/pok-031.png"></a></td>
<td><a href="together/pok-032.jpg"><img src="input/pok-032.png"></a></td>
<td><a href="together/pok-033.jpg"><img src="input/pok-033.png"></a></td>
<td><a href="together/pok-034.jpg"><img src="input/pok-034.png"></a></td>
<td><a href="together/pok-035.jpg"><img src="input/pok-035.png"></a></td>
<td><a href="together/pok-036.jpg"><img src="input/pok-036.png"></a></td>
<td><a href="together/pok-037.jpg"><img src="input/pok-037.png"></a></td>
<td><a href="together/pok-038.jpg"><img src="input/pok-038.png"></a></td>
</tr>
<tr>
<td><a href="together/pok-040.jpg"><img src="input/pok-040.png"></a></td>
<td><a href="together/pok-041.jpg"><img src="input/pok-041.png"></a></td>
<td><a href="together/pok-042.jpg"><img src="input/pok-042.png"></a></td>
<td><a href="together/pok-043.jpg"><img src="input/pok-043.png"></a></td>
<td><a href="together/pok-044.jpg"><img src="input/pok-044.png"></a></td>
<td><a href="together/pok-045.jpg"><img src="input/pok-045.png"></a></td>
<td><a href="together/pok-046.jpg"><img src="input/pok-046.png"></a></td>
<td><a href="together/pok-047.jpg"><img src="input/pok-047.png"></a></td>
<td><a href="together/pok-048.jpg"><img src="input/pok-048.png"></a></td>
</tr>
<tr>
<td><a href="together/pok-050.jpg"><img src="input/pok-050.png"></a></td>
<td><a href="together/pok-051.jpg"><img src="input/pok-051.png"></a></td>
<td><a href="together/pok-052.jpg"><img src="input/pok-052.png"></a></td>
<td><a href="together/pok-053.jpg"><img src="input/pok-053.png"></a></td>
<td><a href="together/pok-054.jpg"><img src="input/pok-054.png"></a></td>
<td><a href="together/pok-055.jpg"><img src="input/pok-055.png"></a></td>
<td><a href="together/pok-056.jpg"><img src="input/pok-056.png"></a></td>
<td><a href="together/pok-057.jpg"><img src="input/pok-057.png"></a></td>
<td><a href="together/pok-058.jpg"><img src="input/pok-058.png"></a></td>
</tr>
<tr>
<td><a href="together/pok-060.jpg"><img src="input/pok-060.png"></a></td>
<td><a href="together/pok-061.jpg"><img src="input/pok-061.png"></a></td>
<td><a href="together/pok-062.jpg"><img src="input/pok-062.png"></a></td>
<td><a href="together/pok-063.jpg"><img src="input/pok-063.png"></a></td>
<td><a href="together/pok-064.jpg"><img src="input/pok-064.png"></a></td>
<td><a href="together/pok-065.jpg"><img src="input/pok-065.png"></a></td>
<td><a href="together/pok-066.jpg"><img src="input/pok-066.png"></a></td>
<td><a href="together/pok-067.jpg"><img src="input/pok-067.png"></a></td>
<td><a href="together/pok-068.jpg"><img src="input/pok-068.png"></a></td>
</tr>
<tr>
<td><a href="together/pok-070.jpg"><img src="input/pok-070.png"></a></td>
<td><a href="together/pok-071.jpg"><img src="input/pok-071.png"></a></td>
<td><a href="together/pok-072.jpg"><img src="input/pok-072.png"></a></td>
<td><a href="together/pok-073.jpg"><img src="input/pok-073.png"></a></td>
<td><a href="together/pok-074.jpg"><img src="input/pok-074.png"></a></td>
<td><a href="together/pok-075.jpg"><img src="input/pok-075.png"></a></td>
<td><a href="together/pok-076.jpg"><img src="input/pok-076.png"></a></td>
<td><a href="together/pok-077.jpg"><img src="input/pok-077.png"></a></td>
<td><a href="together/pok-078.jpg"><img src="input/pok-078.png"></a></td>
</tr>
<tr>
<td><a href="together/pok-080.jpg"><img src="input/pok-080.png"></a></td>
<td><a href="together/pok-081.jpg"><img src="input/pok-081.png"></a></td>
<td><a href="together/pok-082.jpg"><img src="input/pok-082.png"></a></td>
<td><a href="together/pok-083.jpg"><img src="input/pok-083.png"></a></td>
<td><a href="together/pok-084.jpg"><img src="input/pok-084.png"></a></td>
<td><a href="together/pok-085.jpg"><img src="input/pok-085.png"></a></td>
<td><a href="together/pok-086.jpg"><img src="input/pok-086.png"></a></td>
<td><a href="together/pok-087.jpg"><img src="input/pok-087.png"></a></td>
<td><a href="together/pok-088.jpg"><img src="input/pok-088.png"></a></td>
</tr>
<tr>
<td><a href="together/pok-090.jpg"><img src="input/pok-090.png"></a></td>
<td><a href="together/pok-091.jpg"><img src="input/pok-091.png"></a></td>
<td><a href="together/pok-092.jpg"><img src="input/pok-092.png"></a></td>
<td><a href="together/pok-093.jpg"><img src="input/pok-093.png"></a></td>
<td><a href="together/pok-094.jpg"><img src="input/pok-094.png"></a></td>
<td><a href="together/pok-095.jpg"><img src="input/pok-095.png"></a></td>
<td><a href="together/pok-096.jpg"><img src="input/pok-096.png"></a></td>
<td><a href="together/pok-097.jpg"><img src="input/pok-097.png"></a></td>
<td><a href="together/pok-098.jpg"><img src="input/pok-098.png"></a></td>
</tr>
<tr>
<td><a href="together/pok-100.jpg"><img src="input/pok-100.png"></a></td>
<td><a href="together/pok-101.jpg"><img src="input/pok-101.png"></a></td>
<td><a href="together/pok-102.jpg"><img src="input/pok-102.png"></a></td>
<td><a href="together/pok-103.jpg"><img src="input/pok-103.png"></a></td>
<td><a href="together/pok-104.jpg"><img src="input/pok-104.png"></a></td>
<td><a href="together/pok-105.jpg"><img src="input/pok-105.png"></a></td>
<td><a href="together/pok-106.jpg"><img src="input/pok-106.png"></a></td>
<td><a href="together/pok-107.jpg"><img src="input/pok-107.png"></a></td>
<td><a href="together/pok-108.jpg"><img src="input/pok-108.png"></a></td>
</tr>
<tr>
<td><a href="together/pok-110.jpg"><img src="input/pok-110.png"></a></td>
<td><a href="together/pok-111.jpg"><img src="input/pok-111.png"></a></td>
<td><a href="together/pok-112.jpg"><img src="input/pok-112.png"></a></td>
<td><a href="together/pok-113.jpg"><img src="input/pok-113.png"></a></td>
<td><a href="together/pok-114.jpg"><img src="input/pok-114.png"></a></td>
<td><a href="together/pok-115.jpg"><img src="input/pok-115.png"></a></td>
<td><a href="together/pok-116.jpg"><img src="input/pok-116.png"></a></td>
<td><a href="together/pok-117.jpg"><img src="input/pok-117.png"></a></td>
<td><a href="together/pok-118.jpg"><img src="input/pok-118.png"></a></td>
</tr>
<tr>
<td><a href="together/pok-120.jpg"><img src="input/pok-120.png"></a></td>
<td><a href="together/pok-121.jpg"><img src="input/pok-121.png"></a></td>
<td><a href="together/pok-122.jpg"><img src="input/pok-122.png"></a></td>
<td><a href="together/pok-123.jpg"><img src="input/pok-123.png"></a></td>
<td><a href="together/pok-124.jpg"><img src="input/pok-124.png"></a></td>
<td><a href="together/pok-125.jpg"><img src="input/pok-125.png"></a></td>
<td><a href="together/pok-126.jpg"><img src="input/pok-126.png"></a></td>
<td><a href="together/pok-127.jpg"><img src="input/pok-127.png"></a></td>
<td><a href="together/pok-128.jpg"><img src="input/pok-128.png"></a></td>
</tr>
<tr>
<td><a href="together/pok-130.jpg"><img src="input/pok-130.png"></a></td>
<td><a href="together/pok-131.jpg"><img src="input/pok-131.png"></a></td>
<td><a href="together/pok-132.jpg"><img src="input/pok-132.png"></a></td>
<td><a href="together/pok-133.jpg"><img src="input/pok-133.png"></a></td>
<td><a href="together/pok-134.jpg"><img src="input/pok-134.png"></a></td>
<td><a href="together/pok-135.jpg"><img src="input/pok-135.png"></a></td>
<td><a href="together/pok-136.jpg"><img src="input/pok-136.png"></a></td>
<td><a href="together/pok-137.jpg"><img src="input/pok-137.png"></a></td>
<td><a href="together/pok-138.jpg"><img src="input/pok-138.png"></a></td>
</tr>
<tr>
<td><a href="together/pok-140.jpg"><img src="input/pok-140.png"></a></td>
<td><a href="together/pok-141.jpg"><img src="input/pok-141.png"></a></td>
<td><a href="together/pok-142.jpg"><img src="input/pok-142.png"></a></td>
<td><a href="together/pok-143.jpg"><img src="input/pok-143.png"></a></td>
<td><a href="together/pok-144.jpg"><img src="input/pok-144.png"></a></td>
<td><a href="together/pok-145.jpg"><img src="input/pok-145.png"></a></td>
<td><a href="together/pok-146.jpg"><img src="input/pok-146.png"></a></td>
<td><a href="together/pok-147.jpg"><img src="input/pok-147.png"></a></td>
<td><a href="together/pok-148.jpg"><img src="input/pok-148.png"></a></td>
</tr>
<tr>
<td><a href="together/pok-150.jpg"><img src="input/pok-150.png"></a></td>
<td><a href="together/pok-151.jpg"><img src="input/pok-151.png"></a></td>
<td><a href="together/pok-152.jpg"><img src="input/pok-152.png"></a></td>
<td><a href="together/pok-153.jpg"><img src="input/pok-153.png"></a></td>
<td><a href="together/pok-154.jpg"><img src="input/pok-154.png"></a></td>
<td><a href="together/pok-155.jpg"><img src="input/pok-155.png"></a></td>
<td><a href="together/pok-156.jpg"><img src="input/pok-156.png"></a></td>
<td><a href="together/pok-157.jpg"><img src="input/pok-157.png"></a></td>
<td><a href="together/pok-158.jpg"><img src="input/pok-158.png"></a></td>
</tr>
<tr>
<td><a href="together/pok-160.jpg"><img src="input/pok-160.png"></a></td>
<td><a href="together/pok-161.jpg"><img src="input/pok-161.png"></a></td>
<td><a href="together/pok-162.jpg"><img src="input/pok-162.png"></a></td>
<td><a href="together/pok-163.jpg"><img src="input/pok-163.png"></a></td>
<td><a href="together/pok-164.jpg"><img src="input/pok-164.png"></a></td>
<td><a href="together/pok-165.jpg"><img src="input/pok-165.png"></a></td>
<td><a href="together/pok-166.jpg"><img src="input/pok-166.png"></a></td>
<td><a href="together/pok-167.jpg"><img src="input/pok-167.png"></a></td>
<td><a href="together/pok-168.jpg"><img src="input/pok-168.png"></a></td>
</tr>
</table>


