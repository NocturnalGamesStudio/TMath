#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "tmath.h"



int main(){
    Vec2 start = (Vec2){45, 190};
    Vec2 end = (Vec2){2, 0};
    for (int i = 0; !vec2_eq(start, end); i++){
        start = vec2_move_toward(start, end, 50.0);
    }

    printf("Start: (%f, %f)\n", start.x, start.y);
    printf("End: (%f, %f)\n", end.x, end.y);

    printf("\n");
    return 0;
}