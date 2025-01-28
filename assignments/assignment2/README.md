# Assignment 2 

The goal of assignment 2 is to build a space war clone.

## Building

Using Ninja as a generator with CMake :

```sh
$ cmake -S . -B build -G Ninja
$ cd build
$ ninja
```

## Project structure

**build** : build result and output

**src** : source location

**include** : public headers

**tests** : tests

**external** : packages/projects used by the project

**extra** : extra/optional submodules for the project

**data** : non-source code aspects of the project

**tool** : development utilities (build and refactoring scripts but not only)

**docs** : project documentation

**libs** : main project submodules


