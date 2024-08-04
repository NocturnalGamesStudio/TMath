#include <math.h>
#include "common.h"

double angle_wrap(double ang){
    return fabs(fmod(ang, TAU));
}