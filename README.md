# TMath
## Simple C math library for video games!


This is a simple C library I've made for making games, but much of it is missing right now.

## Table of Contents
- [Building](#building)
- [Linking](#linking)
- [Documentation](#documentation)

## Building
There are simple shell scripts included, but they require either a normal linux shell or something like MinGW bash.
I don't know how to use make or CMake but it should be easy to set up with this project since there's no OS specific code.


## Linking
When building with the shell scripts it should output a single file (`tmath.a`) you can include when building your project, you also need to copy the header files wherever you want.
For example:
```sh
gcc ./src/main.c ./libs/tmath.a -I./inc/tmath
```
Where `./main.c` is your file(s), `./libs/tmath.a` is the tmath library and `-I./inc/tmath` is the directory you copied the header files into.

## Documentation
Check the wiki for documentation