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
- Under _Separate Header Placement_, `src/` contains the compilable source code and _private_ headers

**include** : public headers
- The purpose of `include/` is to hold _public API_ headers
- Consumers of a library using _Separate Header Placement_ should only be given the `include/` directory as the sole include search directory for the library's public interface
- The library should have both its `include/` and `src/` directories as include search directories

**tests** : tests

**external** : packages/projects used by the project

**extra** : extra/optional submodules for the project

**data** : non-source code aspects of the project

**tool** : development utilities (build and refactoring scripts but not only)

**docs** : project documentation

**libs** : main project submodules


