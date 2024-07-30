#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

/*-----------------------------------------------------*/

void cleanBuffer(void)
// clean buffer
{
    int character = 0;
    while (character != '\n' && character != EOF)
    {
        character = getchar();
    }
}

/*-----------------------------------------------------*/
