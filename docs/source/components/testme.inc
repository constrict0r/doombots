Bash script to auto-discover and run all project tests.

This script searchs on a project folder for tests of the types:

- `Ansible <https://www.ansible.com/>`_:

 - `Molecule <https://molecule.readthedocs.io>`_.

- `Bats <https://github.com/sstephenson/bats>`_.

- `Python <https://pytest.org/en/latest/>`_:

 - If the *coverage* package is installed and the **-c** parameter is present,
   a coverage report is also generated.

Any test found is executed. The locations where this script searches for tests
are:

- Ansible modules on *./library*.

- Ansible test plugins on *./tests_plugins*.

- Ansible playbooks with the *-playbook* suffix on *./tests*.

- The folder *molecule*.

- Files with the extension *.bats* on *./tests/*.

- Files with the extension *.py* on *./tests/*.
