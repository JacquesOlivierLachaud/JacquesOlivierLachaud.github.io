---
title: A discrete calculus model of Ambrosio-Tortorelli’s functional

event: "Autour des Mathématiques, 80 ans du CNRS, 23 mai 2019"
event_url: https://www.lama.univ-smb.fr/

location: Laboratoire de Mathématiques, LAMA, Chambéry, France

summary: 'Invited talk.'

# Talk start and end times.
#   End time can optionally be hidden by prefixing the line with `#`.
date: '2019-05-23'
date_end: '2019-05-23'
all_day: false

# Schedule page publish date (NOT talk date).
publishDate: '2019-01-01T00:00:00Z'

authors: [ admin ]

tags: [ "talk", "ambrosio-tortorelli functional", "discrete calculus", "image segmentation", "image denoising", image inpainting", "mesh denoising", "mesh segmentation", "mesh inpainting", "piecewise smooth reconstruction", "variational model" ]


# Is this a featured talk? (true/false)
featured: false

image:
  caption: ''
  focal_point: Right

# links:
#   - icon: twitter
#     icon_pack: fab
#     name: Follow
#     url: https://twitter.com/georgecushen
links:
  - name: Slides (PDF)
    url: 'slides.pdf'
    
url_code: 'https://dgtal-team.github.io/doc-nightly/moduleGenericAT.html'
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
  - comedic
  
abstract: "
Ambrosio-Tortorelli's functional (AT) is a well known relaxation of the classical Mumford-Shah model (MS). AT involves both a reconstruction function u and an approximation of the set of discontinuities v in its formulation. AT has the nice property to Gamma-converge toward MS while being much simpler to solve. However its numerical approximation suffers from a technical difficulty: it is difficult to make the set of discontinuities thin at any digitisation scale, thus making the numerical result poor around discontinuities. We propose a discrete calculus model of AT, whose formulation authorises thin discontinuities at the scale of interest. We will recall the main aspects of discrete calculus, and present our discrete AT model. We will then show that this formulation is versatile enough to address several problems of image and geometry processing: image restoration, segmentation and inpainting, digital surface normal field regularisation, or geometric mesh denoising, inpainting 
 or segmentation."

# # {{% callout note %}}
# # Click on the **Slides** button above to view the built-in slides feature.
# # {{% /callout %}}

# # Slides can be added in a few ways:

# # - **Create** slides using Wowchemy's [_Slides_](https://wowchemy.com/docs/managing-content/#create-slides) feature and link using `slides` parameter in the front matter of the talk file
# # - **Upload** an existing slide deck to `static/` and link using `url_slides` parameter in the front matter of the talk file
# # - **Embed** your slides (e.g. Google Slides) or presentation video on this page using [shortcodes](https://wowchemy.com/docs/writing-markdown-latex/).

# # Further event details, including [page elements](https://wowchemy.com/docs/writing-markdown-latex/) such as image galleries, can be added to the body of this page.

---


