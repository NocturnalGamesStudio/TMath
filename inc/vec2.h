#pragma once

typedef struct Vec2{
    double x, y;
} Vec2;

#define VEC2_ZERO (Vec2){.x = 0, .y = 0}
#define VEC2_ONE (Vec2){.x = 1, .y = 1}
#define VEC2_INF (Vec2){.x = INFINITY, .y = INFINITY}

#define VEC2_UP (Vec2){.x = 0, .y = 1}
#define VEC2_DOWN (Vec2){.x = 0, .y = -1}
#define VEC2_LEFT (Vec2){.x = -1, .y = 0}
#define VEC2_RIGHT (Vec2){.x = 1, .y = 0}


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