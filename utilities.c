#include <stdio.h>

/*-----------------------------------------------------*/

void cleanBuffer(void)
// clean buffer
{
    int character;
    while (character != '\n' && character != EOF)
    {
        character = getchar();
    }
}

/*-----------------------------------------------------*/
