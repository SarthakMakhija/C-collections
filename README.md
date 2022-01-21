### LinkedList, Trie and BinarySearchTree implementation in C++

### Build Status

[![Actions Status](https://github.com/SarthakMakhija/CPP-collections/workflows/CMake/badge.svg)](https://github.com/SarthakMakhija/CPP-collections/actions)

### Project Structure
Project includes `src` and `test` folders representing source and test code. 

Both src and test folders contain `list`, `dictionary` and `tree` folders representing `LinkedList`, Dictionary using `Trie` and `BinarySearchTree`.

`GoogleTest` framework is used for writing tests and `CMake` is used for builing the project.

### Building the project
- Install CMake

    `On Mac - brew install cmake`

- Clone the project

    `git@github.com:SarthakMakhija/C-collections.git`

- Create a build directory

    `mkdir build`

- Change to build directory

    `cd build`

- Execute CMake

    `cmake --build . -v`

### Running tests

- Ehange to build directory

    `cd build`

- Execute collections_tests

    `./collections_tests`

### Pending things to explore
1. Using CMake to depend on external pmdk package (any external package other than Google test)
2. Running any static checking C++ tools in pipeline
3. Integrating (2) in CMake
4. Cross platform build
5. Any tool to detect memory leak in the code
6. Integrating (5) in CMake
7. Integrating (5) in pipeline