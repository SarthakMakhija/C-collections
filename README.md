### LinkedList and trie implementation in C++

### Build Status

[![Actions Status](https://github.com/SarthakMakhija/CPP-collections/workflows/CMake/badge.svg)](https://github.com/SarthakMakhija/CPP-collections/actions)

### Project Structure
Project includes `src` and `test` folders representing source and test code. 
Both src and test folders contain `list` and `dictionary` folders representing `LinkedList` and Dictionary using `Trie`. 
`GTest` framework is used for writing tests and `CMake` is used for builing the project.

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
