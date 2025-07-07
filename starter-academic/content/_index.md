---
# Leave the homepage title empty to use the site title
title: ""
date: 2022-10-24
type: landing

design:
  # Default section spacing
  spacing: "1rem"

sections:
  - block: resume-biography-3
    id: about
    content:
      # Choose a user profile to display (a folder name within `content/authors/`)
      username: admin
      text: ""
      # Show a call-to-action button under your biography? (optional)
      button:
        text: Download CV
        url: uploads/cv-short-en.pdf
    design:
      css_class: light
      background:
        color: white
  - block: collection
    id: featured
    page_type: publication
    content:
      title: Featured Publications
      filters:
        folders:
          - publication
        featured_only: true
    design:
      view: article-grid
#      view: card
      columns: 2
      spacing:
        padding: [0, 0, 0, 0]
  - block: collection
    id: publications
    page_type: publication    
    content:
      title: Recent Publications
      text: |-
        {{% callout note %}}
        [See all publications](./publication/).
        {{% /callout %}}
      filters:
        folders:
          - publication
        exclude_featured: false
      count: 10
    design:
      view: citation
#view: compact
#      view: citation      
  - block: collection
    id: talks
    page_type: talk
    content:
      title: Recent & Upcoming Talks
      filters:
        folders:
          - event
        tag: 'talk'
      count: 4
    design:
      view: article-grid
      columns: 2
  - block: collection
    id: events
    content:
      title: Recent events
      filters:
        folders:
          - event
        tag: 'event'
      count: 4
    design:
      view: article-grid
      columns: 2
  - block: collection
    id: projects
    content:
      title: Projects
      filters:
        folders:
          - project
        tag:
      count: 4
    design:
      view: article-grid
      columns: 2
  - block: markdown
    id: gallery
    content:
      title: Gallery
      text: |-

        ![dragon-reco](albums/demo/xyz-dragon-reco.jpg 'Reconstruction from a digital surface of a polygonal mesh using a variational model written in discrete calculus. The model optimizes the estimated area of each quad facet so that this area target an area estimated from an estimated normal vector. We obtain a quad surface with non degenerated quads.')

        ![features-AT](albums/demo/sharp-sphere-features-3d-AT.png 'Extraction of sharp features along digital surfaces, undamaged or noisy, using a discrete calculus formulation of the Ambrosio-Tortorelli functional.')
        [Pacific Graphics 2016]({{< relref "/publication/coeurjolly-2016-pg" >}})

        <table>
        <tr>
        <td width="50%">
        
        ![butterfly](albums/demo/butterfly-geodesics-1.jpg 'Shortest paths along a digital surface using tangency property given by full convexity. Note that induced distances are Euclidean in every planar (even slanted) parts of the digital surface.')

        [JMIV 2022]({{< relref "/publication/lachaud-2022-jmiv" >}})
        [DGMM 2021]({{< relref "/publication/lachaud-2021-dgmm" >}})

        </td><td width="50%>
        
        ![delaunay-3d](albums/demo/delaunay-3d-ball-10.jpg 'Delaunay complex of a set of lattice points randomly generated within a ball of radius 10. Note that co-sphericities of more than 4 points are quite frequent in lattice spaces, and Delaunay cells may thus not be tetrahedra. Module Quickhull of DGtal allows you to compute the Delaunay complex of lattice/rational points in arbitrary dimension.')

        </td>
        </tr>
        <tr>
        <td width="50%">

        ![quickhull-3d](albums/demo/qhull-digital-sphere-50.jpg '3D Convex hull a digital ball of radius 50. Note that co-sphericities of more than 4 points are quite frequent in lattice spaces, and the convex hull has many non triangular faces. Module Quickhull of DGtal allows you to compute the convex hull of lattice/rational points in arbitrary dimension.')

        </td><td width="50%>

        ![principal-directions](albums/demo/bunny64-NAdd-VCM-h1-dirs-fine-1.png 'Estimated principal directions of curvature on a digitized Stanford bunny shape (resolution 64x64x64) using corrected curvature measures; principal curvatures are depicted using colors (blue is very low negative, cyan is low negative, black is zero, yellow is high positive, red is very high positive).') 

        </td>
        </tr>
        <tr>
        <td width="50%">

        ![mean-curvature](albums/demo/dragon-icnc-convergence-H.jpg 'Multigrid convergence of mean curvature estimator based on Corrected Normal Current. The finer the sampling, the more stable are the curvature estimations.')

        </td><td width="50%>

        ![gaussian-curvature](albums/demo/dragon-icnc-convergence-G.jpg 'Multigrid convergence of Gaussian curvature estimator based on Corrected Normal Current. The finer the sampling, the more stable are the curvature estimations.')

        </td>
        </tr>
        <tr>
        <td width="50%">

        ![curvature-k1](albums/demo/murex-k1.jpg 'Lowest principal curvatures on a "Murex" point cloud, estimated using randomized corrected curvature measures.')

        </td><td width="50%>
        
        ![curvature-k2](albums/demo/murex-k2.jpg 'Highest principal curvatures on a "Murex" point cloud, estimated using randomized corrected curvature measures.')

        </td>
        </tr>
        <tr>
        <td width="50%">

        ![depixelizing-1](albums/demo/pok-066.jpg 'Depixelizing pixel art: 16 x zoomed bitmap image using Geometric Total Variation.')
        
        </td><td width="50%>

        ![depixelizing-2](albums/demo/pok-085.jpg 'Depixelizing pixel art: 16 x zoomed bitmap image using Geometric Total Variation.')

        </td>
        </tr>
        <tr>
        <td width="50%">

        ![Kleinian-1](albums/demo/algosurfer-3-15.04.17.jpg 'Vision of Kleinian surface')
        [AlgoSurfer]({{< relref "/project/algosurfer" >}})
        
        </td><td width="50%>

        ![kleinian-2](albums/demo/kleinian-H-1.jpg 'View of mean curvatures onto Kleinian surface')
        [AlgoSurfer]({{< relref "/project/algosurfer" >}})

        </td>
        </tr>
        </table>
    design:
      spacing:
        padding: [0, 0, 0, 0]


  - block: markdown
    id: contact
    content:
      title: Contact
      text: |-
        {{< icon name="at-symbol">}} jacques-olivier.lachaud_@_univ-smb.fr
        
        {{< icon name="phone">}} +33 4 79 75 86 42
        
        {{< icon name="envelope">}} Université Savoie Mont Blanc, Laboratoire de Mathématiques, campus scientifique.
        
          Le Bourget-du-Lac, F-73376, France

        {{< icon name="map">}} [Access map](https://www.lama.univ-savoie.fr/#acces)

        {{< icon name="map-pin">}} https://maps.app.goo.gl/pzsdHsp64kGQzwyy8
        
        {{< icon name="building-office-2">}} Enter Building "Le Chablais" (number 21), and take the stairs to Office 104 on Floor 1
      
    
   
---
