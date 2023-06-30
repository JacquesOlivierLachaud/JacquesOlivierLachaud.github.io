---
title: Multigrid convergence of digital curvature estimators

event: "CIRM Meeting: Discrete curvature, theory and applications"
event_url: https://www.cirm-math.fr/

location: Centre International de Recherche Mathématique (CIRM), Luminy, France

summary: 'Invited talk.'

# Talk start and end times.
#   End time can optionally be hidden by prefixing the line with `#`.
date: '2013-11-18'
date_end: '2013-11-22'
all_day: false

# Schedule page publish date (NOT talk date).
publishDate: '2020-07-01T00:00:00Z'

authors: [ admin ]

tags: [ "talk", "curvature estimation", "digital surface", "discrete geometric estimator", "multigrid convergence", "integral invariant", "maximal digital circular arc", "Willmore model" ]


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
  - name: Publication
    url: 'publication/lachaud-2013-dc'
    icon: location-dot
    icon_pack: fas
  - name: Slides (PDF)
    url: 'publication/lachaud-2013-dc/slides.pdf'
  - name: Paper (PDF)
    url: 'publication/lachaud-2013-dc/lachaud-2013-dc.pdf'
  - name: URL
    url: 'https://acirm.centre-mersenne.org/item/ACIRM_2013__3_1_171_0/'
    
url_code: 'https://dgtal-team.github.io/doc-nightly/moduleCurvatureMeasures.html'
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
  - digital-snow
  - geodib
  
abstract: 'Many methods have been proposed to estimate differential geometric
quantities like curvature on discrete data. A common characteristics
is that they require (at least) one user-given scale parameter, that
smooths data to take care of both the sampling rate and possible
perturbations.  Digital shapes are specific discrete approximation of
Euclidean shapes, which come from their digitization at a given grid
step. They are thus subsets of the digital plane Z^d. A digital
geometric estimator is called multigrid convergent whenever the
estimated quantity tends towards the expected geometric quantity as
the grid step gets finer and finer. The problem is then: can we define
curvature estimators that are multigrid convergent without such
user-given parameter ? If so, what speed of convergence can we achieve
? We present here three digital curvature estimators that aim at this
objective: a first one based on maximal digital circular arc, a second
one using a global optimisation procedure, a third one that is a
digital counterpart to integral invariants and that works on 2D and 3D
shapes.'

# # {{% callout note %}}
# # Click on the **Slides** button above to view the built-in slides feature.
# # {{% /callout %}}

# # Slides can be added in a few ways:

# # - **Create** slides using Wowchemy's [_Slides_](https://wowchemy.com/docs/managing-content/#create-slides) feature and link using `slides` parameter in the front matter of the talk file
# # - **Upload** an existing slide deck to `static/` and link using `url_slides` parameter in the front matter of the talk file
# # - **Embed** your slides (e.g. Google Slides) or presentation video on this page using [shortcodes](https://wowchemy.com/docs/writing-markdown-latex/).

# # Further event details, including [page elements](https://wowchemy.com/docs/writing-markdown-latex/) such as image galleries, can be added to the body of this page.

---


