
doombots
********

.. image:: https://readthedocs.org/projects/doombots/badge
   :alt: readthedocs

The madvillain automated projects monolith repository.

Full documentation on `Readthedocs
<https://doombots.readthedocs.io>`_.

Source code on:

`Github <https://github.com/constrict0r/doombots>`_.

`Gitlab <https://gitlab.com/constrict0r/doombots>`_.

`Part of: <https://gitlab.com/explore/projects?tag=doombots>`_

.. image:: https://gitlab.com/constrict0r/img/raw/master/doombots/doombots.png
   :alt: doombots

**Ingredients**

.. image:: https://gitlab.com/constrict0r/img/raw/master/doombots/ingredients.png
   :alt: ingredients


Contents
********

* `Usage <#Usage>`_
* `Components <#Components>`_
   * `autodebian <#autodebian>`_
   * `cleanme <#cleanme>`_
   * `docthis <#docthis>`_
   * `parts <#parts>`_
   * `testme <#testme>`_
* `License <#License>`_
* `Links <#Links>`_
* `UML <#UML>`_
   * `Deployment <#deployment>`_
* `Author <#Author>`_

Usage
*****

Clone the repository and its submodules:

::

   git clone --recurse-submodules -j8 git://gitlab.com/constrict0r/doombots.git


Components
**********

This repository includes the following components:


autodebian
==========

Automated Debian-like systems setup monolith repository.

Full documentation on `autodebian readthedocs
<https://autodebian.readthedocs.io>`_.

Source code on `autodebian Gitlab repository
<https://gitlab.com/constrict0r/autodebian>`_.

Source code on `autodebian Github repository
<https://github.com/constrict0r/autodebian>`_.

.. image:: https://gitlab.com/constrict0r/img/raw/master/doombots/autodebian.png
   :alt: autodebian


cleanme
=======

Bash script to clean enviroments.

When executed this script performs the following actions:

* Ansible cleanup:

..

   * Remove installed ansible roles from current user home directory.

   * If the -u parameter is present, uninstall Ansible.

* General cleanup:

..

   * Remove all soft links found on tests folder.

   * Remove the folder docs/build if exists.

   * Remove all files under /tmp folder.

* Python cleanup:

..

   * Remove python compilated and cache files.

Using the -o parameter is possible to select to cleanup only Ansible
or Python resources.

Full documentation on `cleanme readthedocs
<https://cleanme.readthedocs.io>`_.

Source code on `cleanme Gitlab repository
<https://gitlab.com/constrict0r/cleanme>`_.

Source code on `cleanme Github repository
<https://github.com/constrict0r/cleanme>`_.

.. image:: https://gitlab.com/constrict0r/img/raw/master/doombots/cleanme.png
   :alt: cleanme


docthis
=======

Bash script to quickly add Sphinx capabilities to a project.

It aims to provide an easy and quick way to start writing Sphinx
documentation.

When runned for first time on a new project folder, this script setups
Sphinx, creates new sources files and generates documentation from
that sources. When the sources already exists this script only
generates documentation without adding any file.

Assuming the current directory is named *example*, the generated
directory layout is shown below:

::

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

Additionally to the documentation generated using the standard *html*
and *rst* builders, a  single *rst* file named *README-single* is
created on the project’s root folder. For this file the references and
images written with the *readthedocs* format are replaced with the
standard *rst* format, this allows the correct display of *README*
files on sites like github and ansible-galaxy.

When replacing images written with the *readthedocs* format to
standard *rst* format, the **alt** atributtes of each image is used to
construct the image URL, this means each **alt** attribute **must
correspond** to each image name, when the image name is form by more
than one word, it is recommended to use underscore to separate each
pair of words in the name, for example *variable_empty.png*.

This scripts searches for an **images_url** variable on the *conf.py*
file, if it exists, is used for the image URL replacement:

::

   images_url = "https://raw.githubusercontent.com/author/images/master/"

To comply with *pep8*, it is recommended to split the **images_url**
variable on multiple parts by specifying the variables
**img_url_base** and **img_url_repo**.

::

   img_url_base = "https://raw.githubusercontent.com/"

   img_url_repo = "/images/master/"

   images_url = img_url_base + author + img_url_repo + project

If the **images_url** variable does not exists, the default value used
is:

::

   images_url = "https://raw.githubusercontent.com/author/images/master/"

This scripts searches for a **travis_url_base** variable on the
*conf.py* file, if it exists, is used for the travis-ci badge and link
URL replacements:

::

   travis_url_base = "https://travis-ci.com/"

   travis_url = travis_url_base + author + "/" + project

Full documentation on `docthis readthedocs
<https://docthis.readthedocs.io>`_.

Source code on `docthis Gitlab repository
<https://gitlab.com/constrict0r/docthis>`_.

Source code on `docthis Github repository
<https://github.com/constrict0r/docthis>`_.

.. image:: https://gitlab.com/constrict0r/img/raw/master/doombots/docthis.png
   :alt: docthis


parts
=====

Skeleton repository containing shared `rst
<http://docutils.sourceforge.net/rst.html>`_ parts to generate
documentation with Sphinx.

The directory structure for this repository is the following:

::

   parts
   ├── attributes
   │   ├── item_expand.inc
   │   ├── item_groups.inc
   │   ├── item_name.inc
   │   ├── item_pass.inc
   │   └── item_path.inc
   ├── attributes.inc
   ├── author.inc
   ├── compatibility
   │   ├── buster.inc
   │   ├── raspbian.inc
   │   ├── stretch.inc
   │   └── xenial.inc
   ├── configured
   │   ├── base.inc
   │   ├── desktop.inc
   │   ├── dev_base.inc
   │   ├── dev_micro.inc
   │   ├── dev_python.inc
   │   └── madvillain.inc
   ├── doombots.inc
   ├── enjoy.inc
   ├── format.inc
   ├── ingredients.inc
   ├── license
   │   ├── cc.inc
   │   ├── copyright.inc
   │   ├── gpl3.inc
   │   └── mit.inc
   ├── LICENSE
   ├── limitations
   │   ├── nodejs.inc
   │   ├── packages.inc
   │   └── vault.inc
   ├── links
   │   ├── coveralls.inc
   │   ├── github.inc
   │   ├── gitlab.inc
   │   ├── gitlab_ci.inc
   │   ├── readthedocs.inc
   │   └── travis.inc
   ├── packages
   │   ├── base.inc
   │   ├── desktop.inc
   │   ├── dev_base.inc
   │   ├── dev_micro.inc
   │   ├── dev_python.inc
   │   └── madvillain.inc
   ├── parameters
   │   ├── help.inc
   │   ├── password.inc
   │   ├── path.inc
   │   ├── recursive.inc
   │   ├── requirements.inc
   │   └── username.inc
   ├── README.md
   ├── requirements
   │   ├── ansible.inc
   │   ├── docker.inc
   │   ├── jinja2.inc
   │   ├── molecule.inc
   │   ├── pip.inc
   │   ├── python.inc
   │   ├── pyyaml.inc
   │   ├── requests.inc
   │   └── setuptools.inc
   ├── uml
   │   ├── class.inc
   │   ├── deployment.inc
   │   └── main.inc
   ├── usage
   │   ├── dev_micro.inc
   │   ├── dev_python.inc
   │   ├── role.inc
   │   ├── script.inc
   │   └── testme.inc
   └── variables
       ├── configuration.inc
       ├── expand.inc
       ├── expand_b.inc
       ├── group.inc
       ├── items.inc
       ├── items_b.inc
       ├── packages.inc
       ├── packages_npm.inc
       ├── packages_pip.inc
       ├── packages_purge.inc
       ├── password.inc
       ├── repositories.inc
       ├── secondary.inc
       ├── services.inc
       ├── services_disable.inc
       ├── system_skeleton.inc
       ├── titles.inc
       ├── titles_b.inc
       ├── unified.inc
       ├── unified_b.inc
       ├── update.inc
       ├── upgrade.inc
       ├── users.inc
       ├── user_skeleton.inc
       ├── user_tasks.inc
       └── validate.inc

Source code on `parts Gitlab repository
<https://gitlab.com/constrict0r/parts>`_.

Source code on `parts Github repository
<https://github.com/constrict0r/parts>`_.

.. image:: https://gitlab.com/constrict0r/img/raw/master/doombots/parts.png
   :alt: parts


testme
======

Bash script to auto-discover and run all project tests.

This script searchs on a project folder for tests of the types:

* `Ansible <https://www.ansible.com/>`_:

..

   * `Molecule <https://molecule.readthedocs.io>`_.

* `Bats <https://github.com/sstephenson/bats>`_.

* `Python <https://pytest.org/en/latest/>`_:

..

   * If the *coverage* package is installed and the **-c** parameter
      is present, a coverage report is also generated.

Any test found is executed. The locations where this script searches
for tests are:

* Ansible modules on *./library*.

* Ansible test plugins on *./tests_plugins*.

* Ansible playbooks with the *-playbook* suffix on *./tests*.

* The folder *molecule*.

* Files with the extension *.bats* on *./tests/*.

* Files with the extension *.py* on *./tests/*.

Full documentation on `testme readthedocs
<https://testme.readthedocs.io>`_.

Source code on `testme Gitlab repository
<https://gitlab.com/constrict0r/testme>`_.

Source code on `testme Github repository
<https://github.com/constrict0r/testme>`_.

.. image:: https://gitlab.com/constrict0r/img/raw/master/doombots/testme.png
   :alt: testme


License
*******

MIT. See the LICENSE file for more details.


Links
*****

* `Github <https://github.com/constrict0r/doombots>`_.

* `Readthedocs <https://doombots.readthedocs.io>`_.


UML
***


Deployment
==========

The full project structure is shown below:

.. image:: https://gitlab.com/constrict0r/img/raw/master/doombots/deployment.png
   :alt: deployment


Author
******

.. image:: https://gitlab.com/constrict0r/img/raw/master/doombots/author.png
   :alt: author

The Travelling Vaudeville Villain.

Enjoy!!!

.. image:: https://gitlab.com/constrict0r/img/raw/master/doombots/enjoy.png
   :alt: enjoy

