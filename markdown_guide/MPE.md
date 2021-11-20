- [Diagrams](#diagrams)
    - [Mermaid](#mermaid)
    - [PlantUML](#plantuml)
    - [GraphViz](#graphviz)
    - [Flow Chart](#flow-chart)
    - [Sequence Diagrams](#sequence-diagrams)
    - [Digital Timing Diagram](#digital-timing-diagram)
    - [Static Diagrams](#static-diagrams)
    - [Ditaa](#ditaa)
- [TOC](#toc)
    - [Configuration](#configuration)
- [Import External Files](#import-external-files)
    - [Import online files](#import-online-files)
    - [Configure images](#configure-images)
    - [Import certain lines](#import-certain-lines)
    - [Import file as Code Chunk](#import-file-as-code-chunk)
    - [Force to render as Code Block](#force-to-render-as-code-block)
    - [Import PDF file](#import-pdf-file)
    - [Supported file types](#supported-file-types)
- [Code Chunk](#code-chunk)
- [Presentation Writer](#presentation-writer)
    - [Speaker notes](#speaker-notes)
    - [More settings](#more-settings)
- [Pandoc](#pandoc)
    - [Front-matter](#front-matter)
- [Reference](#reference)

# Diagrams

---

### Mermaid
Markdown Preview Enhanced uses mermaid to render flow charts and sequence diagram.

Code block with `mermaid` notation will be rendered by [mermaid](https://github.com/mermaid-js/mermaid)

Check [mermaid doc](https://mermaid-js.github.io/mermaid/#/) for more information about how to create flowchart and sequence diagram

> Three mermaid themes are provided, and you can choose theme from package settings:  
> * mermaid.css  
> * mermaid.dark.css  
> * mermaid.forest.css 

### PlantUML
Markdown Preview Enhanced uses [PlantUML](https://plantuml.com/zh/) to create multiple kinds of graph. (Java is required to be installed)

Code block with `puml` or `plantuml` notation will be rendered by PlantUML.

> You can install [Graphviz](https://www.graphviz.org/) (not required) to assist in generating all diagram types.

### GraphViz
Markdown Preview Enhanced uses [Viz.js](https://github.com/mdaines/viz.js) to render **dot language diagram**.

Code block with `viz` or dot notation will be rendered by [Viz.js](https://github.com/mdaines/viz.js).

> You can choose different engines by specifying `{engine="..."}`. Engine `circo`, `dot`, `neato`, `osage`, or `twopi` are supported. Default engine is dot.

### Flow Chart
Code block with `flow` notation will be rendered by [flowchart.js](https://flowchart.js.org/)

### Sequence Diagrams
Code block with `sequence` notation will be rendered by [js-sequence-diagrams](https://bramp.github.io/js-sequence-diagrams/)

> Two themes are supported: simple(default theme) and hand.

### Digital Timing Diagram
Code block with `wavedrom` notation will be rendered by [WaveDrom](https://wavedrom.com/)

### Static Diagrams
Code block with `vega` notation will be rendered by [vega](https://vega.github.io/vega/).

Code block with `vega-lite` notation will be rendered by [vega-lite](https://vega.github.io/vega-lite/).

### Ditaa

---

# TOC
You can press `cmd-shift-p` then choose `Markdown Preview Enhanced: Create Toc` to create TOC. 

To exclude a heading from the TOC, append `{ignore=true}` after your heading.

### Configuration
* `orderedList` Use orderedList or not.
* `depthFrom, depthTo [1~6]` inclusive.
* `ignoreLink` If set to true, then TOC entry will not be hyperlinks.

---

# Import External Files
* `@import "your_file"`
* `<!-- @import "your_file" -->` is also valid.

### Import online files
`@import "https://raw.githubusercontent.com/shd101wyy/markdown-preview-enhanced/master/LICENSE.md"`

### Configure images
`@import "test.png" {width="300px" height="200px" title="my title" alt="my alt"}`

### Import certain lines
`@import "test.md" {line_begin=2}`

`@import "test.md" {line_begin=2 line_end=10}`

`@import "test.md" {line_end=-4}`

### Import file as Code Chunk
`@import "test.py" {cmd="python3"}`

### Force to render as Code Block
`@import "test.puml" {code_block=true class="line-numbers"}`

`@import "test.py" {class="line-numbers"}`

### Import PDF file
To import PDF file, you need to have `pdf2svg` installed. 

Markdown Preview Enhanced supports importing both local and online PDF files. 

However, it is not recommended to import large PDF files. For example:

`@import "test.pdf"`
> PDF configuration  
> * `page_no` Display the nth page of PDF.For example `{page_no=1}` will display the 1st page of pdf.  
> * `page_begin`, `page_end`. For example {page_begin=2 page_end=4} will display the number 2, 3, 4 pages.

### Supported file types
* `.jpeg(.jpg)`, `.gif`, `.png`, `.apng`, `.svg`, `.bmp` file will be treated as markdown image.
* `.csv` file will be converted to markdown table.
* `.mermaid` file will be rendered by mermaid.
* `.dot` file will be rendered by viz.js (graphviz).
* `.plantuml(.puml)` file will be rendered by PlantUML.
* `.html` file will be embedded directly.
* `.js` file will be included as `<script src="your_js"></script>`.
* `.less` and `.css` file will be included as `style`. Only local `less` file is currently supported. `.css` file will be included as `<link rel="stylesheet" href="your_css">`.
* `.pdf` file will be converted to svg files by pdf2svg and then be included.
* markdown file will be parsed and embedded directly.
* All other files will be rendered as code block.

---

# Code Chunk
Markdown Preview Enhanced allows you to render code output into documents.

Please use this feature with caution.

> Option name: enableScriptExecution

---

# Presentation Writer
Markdown Preview Enhanced uses [reveal.js](https://github.com/hakimel/reveal.js) to render beautiful presentations.

[Click here](https://rawgit.com/shd101wyy/markdown-preview-enhanced/master/docs/presentation-intro.html) to see the introduction.

> Multiple Presentation themes are supported, you can change it easily from the extension settings.
> `markdown-preview-enhanced.revealjsTheme`

### Speaker notes
To enable speaker notes:
```
---
presentation:
  enableSpeakerNotes: true
---
```

To add notes:
```
<!-- slide data-notes="Write your note here" -->
```

### More settings
You need to write your settings under presentation section.

For example:
```
---
presentation:
  width: 800
  height: 600
---

<!-- slide -->

Your slides goes here...
```

[Click for more](src/presentation%20setting%20in%20md.md)

---

# Pandoc
### Front-matter
[Front-matter](https://jekyllrb.com/docs/front-matter/)

---

# Reference
[Click here](https://shd101wyy.github.io/markdown-preview-enhanced/#/)
