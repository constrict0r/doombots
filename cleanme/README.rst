
cleanme
*******

.. image:: https://gitlab.com/constrict0r/cleanme/badges/master/pipeline.svg
   :alt: pipeline

.. image:: https://travis-ci.com/constrict0r/cleanme.svg
   :alt: travis

.. image:: https://readthedocs.org/projects/cleanme/badge
   :alt: readthedocs

`Bash <https://en.wikipedia.org/wiki/Bash_%28Unix_shell%29>`_ script
to clean enviroments.

.. image:: https://gitlab.com/constrict0r/img/raw/master/cleanme/cleanme.png
   :alt: cleanme

Full documentation on `Readthedocs <https://cleanme.readthedocs.io>`_.

Source code on:

`Github <https://github.com/constrict0r/cleanme>`_.

`Gitlab <https://gitlab.com/constrict0r/cleanme>`_.

`Part of: <https://gitlab.com/explore/projects?tag=doombots>`_

.. image:: https://gitlab.com/constrict0r/img/raw/master/cleanme/doombots.png
   :alt: doombots

**Ingredients**

.. image:: https://gitlab.com/constrict0r/img/raw/master/cleanme/ingredients.png
   :alt: ingredients


Contents
********

* `Description <#Description>`_
* `Usage <#Usage>`_
* `Parameters <#Parameters>`_
   * `help <#help>`_
   * `only <#only>`_
   * `path <#path>`_
* `Compatibility <#Compatibility>`_
* `License <#License>`_
* `Links <#Links>`_
* `UML <#UML>`_
   * `Main <#main>`_
* `Author <#Author>`_

API Contents
************

* `API <#API>`_
* `Scripts <#scripts>`_
   * `cleanme-sh <#cleanme-sh>`_
      * `Globals <#globals>`_
      * `Functions <#functions>`_

Description
***********

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


Usage
*****

Download the script, give it execution permissions and execute it:

::

   wget https://raw.githubusercontent.com/constrict0r/cleanme/master/cleanme.sh
   chmod +x cleanme.sh
   ./cleanme.sh -h

* To run tests:

..

   ::

      cd cleanme
      chmod +x testme.sh
      ./testme.sh

   On some tests you may need to use *sudo* to succeed.


Parameters
**********

The following parameters are supported:


help
====

* *-h* (help): Show help message and exit.

..

   ::

      ./cleanme.sh -h


only
====

* **-o** (only type): This parameter indicates which types of
   resources to process.

..

   The allowed values are:

   ..

      * a : ansible.

      * p : python.

   This parameter is empty by default.

   ::

      ./cleanme.sh -o ap


path
====

* *-p* (path): Optional path to project root folder.

..

   ::

      ./cleanme.sh -p /home/username/my-project


Compatibility
*************

* `Debian Buster <https://wiki.debian.org/DebianBuster>`_.

* `Debian Raspbian <https://raspbian.org/>`_.

* `Debian Stretch <https://wiki.debian.org/DebianStretch>`_.

* `Ubuntu Xenial <http://releases.ubuntu.com/16.04/>`_.


License
*******

MIT. See the LICENSE file for more details.


Links
*****

* `Github <https://github.com/constrict0r/cleanme>`_.

* `Gitlab <https://gitlab.com/constrict0r/cleanme>`_.

* `Gitlab CI <https://gitlab.com/constrict0r/cleanme/pipelines>`_.

* `Readthedocs <https://cleanme.readthedocs.io>`_.

* `Travis CI <https://travis-ci.com/constrict0r/cleanme>`_.


UML
***


Main
====

The project data flow is shown below:

.. image:: https://gitlab.com/constrict0r/img/raw/master/cleanme/main.png
   :alt: main


Author
******

.. image:: https://gitlab.com/constrict0r/img/raw/master/cleanme/author.png
   :alt: author

The travelling vaudeville villain.

Enjoy!!!

.. image:: https://gitlab.com/constrict0r/img/raw/master/cleanme/enjoy.png
   :alt: enjoy


API
***


Scripts
*******


**cleanme-sh**
==============

Bash script to clean enviroments.


Globals
-------

..

   **ONLY_TYPE**

   ..

      String indicating to clean only resources of specific types. The
      allowed values are: ap, being a = ansible, p = python.

   **PROJECT_PATH**

   ..

      Path to the project to cleanup, if not specified the current
      path will be used.

   **UNINSTALL**

   ..

      Wheter to uninstall or not the following software: ansible,
      python3. Default to *false*.


Functions
---------

..

   **cleanup_ansible()**

   ..

      Delete ansible auto-created files.

      :Returns:
         0 if successful, 1 on failure.

      :Return type:
         int

   **cleanup_general()**

   ..

      Delete general auto-created files.

      :Parameters:
         **$1** (*str*) – Optional path to project. Default to current
         path.

      :Returns:
         0 if successful, 1 on failure.

      :Return type:
         int

   **cleanup_python()**

   ..

      Delete python auto-created files.

      :Parameters:
         **$1** (*str*) – Optional path to project. Default to current
         path.

      :Returns:
         0 if successful, 1 on failure.

      :Return type:
         int

   **error_message()**

   ..

      Shows an error message.

      :Parameters:
         **$1** (*str*) – Message to show.

      :Returns:
         0 if successful, 1 on failure.

      :Return type:
         int

   **get_parameters()**

   ..

      Get bash parameters.

      Accepts:

      ..

         * *h* (help).

         * *o* <types> (only clean type).

         * *p* <path> (project_path).

         * *u* (uninstall).

      :Parameters:
         **$@** (*str*) – Bash arguments.

      :Returns:
         0 if successful, 1 on failure. Set globals.

      :Return type:
         int

   **help()**

   ..

      Shows help message.

      :Parameters:
         Function has no arguments.

      :Returns:
         0 if successful, 1 on failure.

      :Return type:
         int

   **main()**

   ..

      Setup requirements and run tests.

      ..

         :Parameters:
            **$@** (*str*) – Bash arguments.

         :Returns:
            0 if successful, 1 on failure.

         :Return type:
            int

   **sanitize()**

   ..

      Sanitize input.

      The applied operations are:

      ..

         * Trim.

      :Parameters:
         **$1** (*str*) – Text to sanitize.

      :Returns:
         The sanitized input.

      :Return type:
         str

   **uninstall_ansible()**

   ..

      Uninstall Ansible.

      :Returns:
         0 if successful, 1 on failure.

      :Return type:
         int

