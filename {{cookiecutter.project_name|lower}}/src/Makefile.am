EXTRA_DIST = Makefile.kernel Makefile.common
EXTRA_PROGRAMS = automake_dummy
dist_man_MANS = {{cookiecutter.project_name|lower}}.4

## TODO: When you want to add more files, add them below.
## TODO: Automake will find dependencies by itself. Run
## TODO: ./autogen.sh after modifying this file.

automake_dummy_SOURCES = {{cookiecutter.project_name|lower}}.c
{{cookiecutter.project_name|lower|replace("-","_")}}_DATA = {{cookiecutter.project_name|lower}}.o

include ./Makefile.common

## TODO: Each time you have used `PKG_CHECK_MODULES` macro
## TODO: in `configure.ac`, you get two variables that
## TODO: you can substitute like above.
