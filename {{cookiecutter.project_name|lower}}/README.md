# {{cookiecutter.project_name}}

{{cookiecutter.project_description}}

## Installation

Execute the following commands:

```bash
vagrant up
vagrant ssh
sudo su -
cd /home/vagrant/project
./autogen.sh
./configure
make
insmod ./src/{{cookiecutter.project_name|lower}}.ko
```

## Usage

Most of the documentation is available in the manual page `{{cookiecutter.project_name|lower}}(8)`.

# TODO: Update the README.md file with a complete description and some usage instructions.
