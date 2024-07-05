#include <stdio.h>
#include "test.h"

int lesPointeurs()
{
    int test = f_test();

    int *p_test = &test;

    printf("value : %d\n", test);
    printf("pointer : %d\n", p_test);
    printf("value : %d\n", *p_test);
    printf("pointer of p_test : %d\n", &p_test);

    // update value with pointer
    *p_test = 10;
    printf("value : %d\n", *p_test);
    printf("value : %d\n", test);

    return 0;
}