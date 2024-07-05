#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void minutesToHoursMinutes(int *p_minute, int *hour);

int main2()
{
    int hour = 0;
    int minute = 120;

    minutesToHoursMinutes(&minute, &hour);

    printf("hour : %d \n", hour);
    printf("min : %d", minute);
    return 0;
}

void minutesToHoursMinutes(int *minute, int *hour)
{
    *hour = floor(*minute / 60);
    *minute = *minute % 60;
}