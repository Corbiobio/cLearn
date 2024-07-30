#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include "struct.h"

void updatePoint(xy *point);

int structTest()
{
    xy point1 = {10, 20};
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);

    updatePoint(&point1);

    printf("Point 1: (%d, %d)\n", point1.x, point1.y);

    return 0;
}
void updatePoint(xy *test)
{
    test->x = 50;
    test->y = 50;
}