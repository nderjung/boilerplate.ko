# `bootstrap.ko`

Simple Linux Kernel Module (LKM) template.

## Usage

You need [cookiecutter](https://github.com/audreyr/cookiecutter), a tool to create projects from project templates. Once installed (in a virtualenv or just with `pip install cookiecutter`), you can use the following command:

```bash
cookiecutter -c latest https://github.com/nderjung/bootstrap.ko.git
cd your-project
git init
git add .
git commit -m "Initial commit"
```

Then, use the following command to get the first steps to get started:

```bash
git ls-tree -r --name-only HEAD | \
    xargs grep -nH "T[O]DO:" | \
    sed 's/\([^:]*:[^:]*\):\(.*\)T[O]DO:\(.*\)/\3 (\1)/' | \
    sort -ns | \
    awk '(last != $1) {print ""} {last=$1 ; print}'
```

Once you are done, your project is ready and you can compile it with
and get a release tarball with:

```bash
./autogen.sh
mkdir build
cd build
../configure
make
make dist
```

Once you want to make a release, tag the tree with `git tag 1.3`, then run the previous commands from the top. You'll get a properly versioned tarball with a `CHANGELOG` file if this is not your first version.
