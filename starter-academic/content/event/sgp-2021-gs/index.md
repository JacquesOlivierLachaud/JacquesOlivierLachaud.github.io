---
title: Graduate School on Digital Geometry

event: Symposium on Geometry Processing 2021
event_url: https://sgp2021.github.io/

location: Toronto, Ontario (virtual)

summary: 'A graduate school on digital geometry for the geometry processing community.'
abstract: 'Digital Geometry is about the processing of topological and geometrical objects defined in regular lattices (e.g. collection of voxels in 3d). Whereas representing quantities on regular, hierarchical or adaptive grids is a classical approach to spatially discretize a domain, processing the geometry of such objects requires us to revisit classical results from continuous or discrete mathematics.  In this course, we will review tools and results that have been designed specifically to the geometry processing in Z^d. More precisely, we will present how processing regularly spaced data with integer coordinate embeddings may impact computational geometry algorithms, and how stability results (multigrid convergence) of differential quantities estimators (curvature tensor, Laplace-Beltrami,..) on boundaries of digital objects can be designed. Finally, we will present some elements of discrete calculus on digital surfaces. Lastly, we will briefly give a demo of the DGtal library (dgtal.org) which contains a wide class of algorithms dedicated to the processing of such specific data.'

# Talk start and end times.
#   End time can optionally be hidden by prefixing the line with `#`.
date: '2021-07-11T13:30:00Z'
date_end: '2021-07-11T15:00:00Z'
all_day: false

# Schedule page publish date (NOT talk date).
publishDate: '2021-07-01T00:00:00Z'

authors: [ "David coeurjolly", admin ]
tags: [ "talk", "dgtal", "digital geometry", "digital surface", "3D", "nD", "discrete geometric estimator", "digital topology", "distance transform", "multigrid convergence" ]


# Is this a featured talk? (true/false)
featured: true

image:
  caption: ''
  focal_point: Right

# links:
#   - icon: twitter
#     icon_pack: fab
#     name: Follow
#     url: https://twitter.com/georgecushen
links:
  - name: Video
    url: https://www.youtube.com/watch?v=Cwf16UuT0ec
    icon: youtube
    icon_pack: fab
  - name: Slides (PDF)
    url: 'slides.pdf'
    icon: pdf
    icon_pack: fab
  - name: Slides (Keynote)
    url: 'slides.key'
    icon: pdf
    icon_pack: fab
    
url_code: 'https://github.com/dcoeurjo/SGP-GraduateSchool-digitalgeometry'
url_pdf: ''
url_slides: ''
url_video: ''

# Markdown Slides (optional).
#   Associate this talk with Markdown slides.
#   Simply enter your slide deck's filename without extension.
#   E.g. `slides = "example-slides"` references `content/slides/example-slides.md`.
#   Otherwise, set `slides = ""`.
slides: 

# Projects (optional).
#   Associate this post with one or more of your projects.
#   Simply enter your project's folder or file name without extension.
#   E.g. `projects = ["internal-project"]` references `content/project/deep-learning/index.md`.
#   Otherwise, set `projects = []`.
projects:
  - dgtal

# # {{% callout note %}}
# # Click on the **Slides** button above to view the built-in slides feature.
# # {{% /callout %}}

# # Slides can be added in a few ways:

# # - **Create** slides using Wowchemy's [_Slides_](https://wowchemy.com/docs/managing-content/#create-slides) feature and link using `slides` parameter in the front matter of the talk file
# # - **Upload** an existing slide deck to `static/` and link using `url_slides` parameter in the front matter of the talk file
# # - **Embed** your slides (e.g. Google Slides) or presentation video on this page using [shortcodes](https://wowchemy.com/docs/writing-markdown-latex/).

# # Further event details, including [page elements](https://wowchemy.com/docs/writing-markdown-latex/) such as image galleries, can be added to the body of this page.

---

The code related to the paper is implemented in
[DGtal](https://dgtal-team.github.io/doc-nightly/moduleCurvatureMeasures.html).

