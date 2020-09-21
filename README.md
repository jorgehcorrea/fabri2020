# Fabricademy student documentation

Visit [class.textile-academy.org](https://class.textile-academy.org/) for class and other information
or read the [Documentation Tutorial](http://fabricademy.fabcloud.io/gitlab-documentation-tutorial/) for more about this site.


* This website is built and published automatically using [GitLab CI](https://about.gitlab.com/gitlab-ci/), every time you edit the files in the docs folder
* The markdown content is generated into a site using the Mkdocs tool, a static site generator written in Python
* You can start by customizing the file `mkdocs.yml` with your information
  * To change the looks of your website, use the theme options found in the `mkdocs.yml` file or see the names of the available themes
* If you want to start a website from scratch, you can delete everything in this repository and push your own static website


## Project layout

    mkdocs.yml    # The site configuration file.
    docs/         # All site content/files should be in this folder.
        index.md  # The homepage.
        files/    # Put files you'd like available in your site here (except videos)
        images/   # You can put your images in here
        ...       # Other markdown pages and folders

Read more about MkDocs at [mkdocs.org](http://www.mkdocs.org).


## Building locally

To work locally on your computer with this project, you can start with the following the steps:

1. Fork, clone or download this project
1. [Install](http://www.mkdocs.org/#installation) MkDocs on your computer
1. Preview your project: `mkdocs serve`, your site can be accessed under `localhost:8000`
1. To add new pages, create the markdown file in the `docs/` folder (i.e. `touch docs/about.md`)
1. Generate the website into a static site, `mkdocs build` (optional) Or just push your changes to GitLab

### Run with docker
For those that know how to use Docker, you can easily run mkdocs server without installing mkdocs.

Use this command with the Mkdocs-Material theme (see more info on [Docker Hub](https://hub.docker.com/r/squidfunk/mkdocs-material)).
```
docker run --rm -it -p 8000:8000 -v ${PWD}:/docs squidfunk/mkdocs-material
```
