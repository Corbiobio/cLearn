#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int read(char *str, int length);
int cleanBuffer();

int fgetsTest()
{
    char str[10];

    read(str, 10);
    read(str, 10);

    for (size_t i = 0; i < 10; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}

int read(char *str, int length)
{

    char *positionEntree = NULL;

    if (fgets(str, length, stdin) != NULL)
    {
        positionEntree = strchr(str, '\n');
        if (positionEntree != NULL)
        {
            *positionEntree = '\0';
        }
        else
        {
            cleanBuffer();
        }
        return 1;
    }
    return 1;
}

int cleanBuffer()
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
    return 1;
}