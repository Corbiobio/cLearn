#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int file_test()
{
    FILE *file = NULL;
    file = fopen("test.txt", "w");
    if (file != NULL)
    {
        fputc('A', file);
        fclose(file);
    }
    else
    {
        printf("Failed to open the file.\n");
    }
    return 0;
}