#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int mallsocTest1()
{
    int *memory = NULL;

    memory = malloc(sizeof(int));
    int test = 0;
    if (memory == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(0);
    }

    *memory = 10;

    printf("%d", *memory);

    free(memory);

    return 0;
}