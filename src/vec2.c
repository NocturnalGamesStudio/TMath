#include <math.h>
#include "tmath.h"
#include <stdio.h>



Vec2 vec2_add(Vec2 l, Vec2 r) {
    return (Vec2){l.x + r.x, l.y + r.y};
}


Vec2 vec2_sub(Vec2 l, Vec2 r){
    return (Vec2){l.x - r.x, l.y - r.y};
}


Vec2 vec2_mul(Vec2 l, Vec2 r){
    return (Vec2){l.x * r.x, l.y * r.y};
}


Vec2 vec2_mulf(Vec2 l, double r) {
    return (Vec2){l.x * r, l.y * r};
}


Vec2 vec2_div(Vec2 l, Vec2 r){
    return (Vec2){l.x / r.x, l.y / r.y};
}


Vec2 vec2_divf(Vec2 l, double r){
    return (Vec2){l.x / r, l.y / r};
}

_Bool vec2_eq(Vec2 l, Vec2 r) {
    return (l.x == r.x) && (l.y == r.y);
}


double vec2_mag(Vec2 vec){
    return sqrt((vec.x * vec.x) + (vec.y * vec.y));
}

Vec2 vec2_norm(Vec2 vec){
    double mag = vec2_mag(vec);
    if (mag == 0){
        return VEC2_ZERO;
    } else {
        return vec2_divf(vec, mag);
    }
}

double vec2_angle(Vec2 vec){
    double arced = asin(vec2_norm(vec).x);
    if (vec.y >= 0){
        return arced;
    } else {
        return PI*2 - arced;
    }
}


Vec2 vec2_move_toward(Vec2 start, Vec2 end, double delta){
    Vec2 direction = vec2_norm(vec2_sub(end, start));
    double distance = vec2_mag(vec2_sub(end, start));

    // We don't want to overshoot, so get the smallest of these two
    double min_len = fmin(distance, delta);

    Vec2 to_add = vec2_mulf(direction, min_len);
    return vec2_add(start, to_add);
}

int vec2_str(Vec2 vec, char* buf){
    int x_str_len = snprintf(NULL, 0, "%f", vec.x);
    int y_str_len = snprintf(NULL, 0, "%f", vec.y);
    // 5 extra for "()", ", " and "\0"
    int total_length = x_str_len + y_str_len + 5;
    if (buf != NULL){
        snprintf(buf, total_length, "(%f, %f)", vec.x, vec.y);
    }

    return total_length;
}