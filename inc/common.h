#pragma once

#ifndef PI
#define PI 3.14159265358979323846
#endif

#ifndef TAU
#define TAU PI*2
#endif

#define MAX(a, b) ({\
    __typeof__(a) _a = (a);\
    __typeof__(b) _b = (b);\
    _a > _b ? _a: _b;\
})

#define MIN(a, b) ({\
    __typeof__(a) _a = (a);\
    __typeof__(b) _b = (b);\
    _a < _b ? _a: _b;\
})

