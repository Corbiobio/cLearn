#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int mallocTest2()
{
    int nombreAmi = 3;

    int *arrAmi = NULL;

    arrAmi = malloc(sizeof(int) * nombreAmi);
    if (arrAmi == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(0);
    }
    else
    {
        for (size_t i = 0; i < nombreAmi; i++)
        {
            printf("age ami %d ?\n", i);
            scanf("%d", &arrAmi[i]);
        }
        for (size_t i = 0; i < nombreAmi; i++)
        {
            printf("age ami %d = %d\n", i, arrAmi[i]);
        }
    }

    free(arrAmi);
    return 0;
}