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
There are currently only 3 parts of Tmath, [Vec2](#vec2), [Angle](#angle) and [Common](#common).
### Vec2
The Vec2 struct is defined as:
```c
typedef struct Vec2{
    double x, y;
} Vec2;
```

This is a 2 dimensional vector. It supports the following functions:
```c
// Adds two vectors together
Vec2 vec2_add(Vec2 l, Vec2 r);

// Subtracts two vectors
Vec2 vec2_sub(Vec2 l, Vec2 r);

// Multiplies two vectors together
Vec2 vec2_mul(Vec2 l, Vec2 r);

// Multiplies a vector by a number
Vec2 vec2_mulf(Vec2 l, double r);

// Divides two vectors
Vec2 vec2_div(Vec2 l, Vec2 r);

// Divides a vector by a number
Vec2 vec2_divf(Vec2 l, double r);

// Checks if 2 arrays are exactly the same
_Bool vec2_eq(Vec2 l, Vec2 r);

// Gets the magnitude of a vector
double vec2_mag(Vec2 vec);

// Gets a normalized version of the vector
Vec2 vec2_norm(Vec2 vec);

// Gets the angle of a vector
double vec2_angle(Vec2 vec);

// Moves a vector towards another vector by delta
Vec2 vec2_move_toward(Vec2 start, Vec2 end, double delta);

int vec2_str(Vec2 vec, char* buf);
```

These are some constants defined in it:
```c
#define VEC2_ZERO (Vec2){.x = 0, .y = 0}
#define VEC2_ONE (Vec2){.x = 1, .y = 1}
#define VEC2_INF (Vec2){.x = INFINITY, .y = INFINITY}

#define VEC2_UP (Vec2){.x = 0, .y = 1}
#define VEC2_DOWN (Vec2){.x = 0, .y = -1}
#define VEC2_LEFT (Vec2){.x = -1, .y = 0}
#define VEC2_RIGHT (Vec2){.x = 1, .y = 0}
```

### Angle
This provides some simple functionality for angles.
```c
// Wraps and angle to be between 0.0 and 2π
double angle_wrap(double ang);
```