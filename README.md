# Fabricademy student documentation Jorge Correa

The following is an exploration on the implementation of new concepts, processes and materials in order to integrate in new fabric technologies following the fabriacademy collective study.   

##Project layout  
mkdocs.yml    # The site configuration file.
docs/         # All site content/files should be in this folder.
    index.md  # The homepage.
    files/    # Files you'd available in your site here (videos are at Vimeo)
    images/   # images in here
    assignments/
      week05.md   #
      week10.md   #
      week12.md   #
      week13.md   #
    ...       # Other markdown pages and folders

Visit [class.textile-academy.org](https://class.textile-academy.org/) for class and other information
or read the [Documentation Tutorial](http://fabricademy.fabcloud.io/gitlab-documentation-tutorial/) for more about this site.


* This website is built and published automatically using [GitLab CI](https://about.gitlab.com/gitlab-ci/), every time you edit the files in the docs folder
* The markdown content is generated into a site using the Mkdocs tool, a static site generator written in Python
* You can start by customizing the file `mkdocs.yml` with your information
  * To change the looks of your website, use the theme options found in the `mkdocs.yml` file or see the names of the available themes
* If you want to start a website from scratch, you can delete everything in this repository and push your own static website

## Building locally

To work locally on your computer with this project, you can start with the following the steps:

1. Fork, clone or download this project
1. [Install](http://www.mkdocs.org/#installation) MkDocs on your computer
1. Preview your project: `mkdocs serve`, your site can be accessed under `localhost:8000`
1. To add new pages, create the markdown file in the `docs/` folder (i.e. `touch docs/about.md`)
1. Generate the website into a static site, `mkdocs build` (optional) Or just push your changes to GitLab
