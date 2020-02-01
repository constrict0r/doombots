Bash script to quickly add Sphinx capabilities to a project.

It aims to provide an easy and quick way to start writing Sphinx
documentation.

When runned for first time on a new project folder, this script setups Sphinx,
creates new sources files and generates documentation from that sources. When
the sources already exists this script only generates documentation without
adding any file.

Assuming the current directory is named *example*, the generated directory
layout is shown below:

.. code-block:: bash

 example
 ├── docs
 │   ├── requirements.txt
 │   └── source
 │       ├── author
 │       ├── compatibility
 │       ├── conf.py
 │       ├── description
 │       ├── index
 │       ├── license
 │       ├── links
 │       ├── requirements
 │       ├── _static
 │       ├── _templates
 │       ├── usage
 │       └── variables
 ├── docthis.sh
 ├── README
 └── .readthedocs.yml

Additionally to the documentation generated using the standard *html* and
*rst* builders, a  single *rst* file named *README-single* is created on the
project's root folder. For this file the references and images written with
the *readthedocs* format are replaced with the standard *rst* format, this
allows the correct display of *README* files on sites like github and
ansible-galaxy.

When replacing images written with the *readthedocs* format to standard *rst*
format, the **alt** atributtes of each image is used to construct the image
URL, this means each **alt** attribute **must correspond** to each image
name, when the image name is form by more than one word, it is recommended to
use underscore to separate each pair of words in the name, for example
*variable_empty.png*.

This scripts searches for an **images_url** variable on the *conf.py* file,
if it exists, is used for the image URL replacement:

.. code-block:: python

 images_url = "https://raw.githubusercontent.com/author/images/master/"

To comply with *pep8*, it is recommended to split the **images_url** variable
on multiple parts by specifying the variables **img_url_base** and
**img_url_repo**.

.. code-block:: python

 img_url_base = "https://raw.githubusercontent.com/"

 img_url_repo = "/images/master/"

 images_url = img_url_base + author + img_url_repo + project

If the **images_url** variable does not exists, the default value used is:

.. code-block:: python

 images_url = "https://raw.githubusercontent.com/author/images/master/"


This scripts searches for a **travis_url_base** variable on the *conf.py* file,
if it exists, is used for the travis-ci badge and link URL replacements:

.. code-block:: python

 travis_url_base = "https://travis-ci.com/"

 travis_url = travis_url_base + author + "/" + project
