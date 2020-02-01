Skeleton repository containing shared `rst <http://docutils.sourceforge.net/rst.html>`_ parts to generate documentation with Sphinx.

The directory structure for this repository is the following:

.. code-block:: bash

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
