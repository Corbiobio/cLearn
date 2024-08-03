#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include "stack.h"

/*---------------------------------------------------------------------------------*/

stack newStack(void)
{
    return NULL;
}

/*---------------------------------------------------------------------------------*/

stack addStack(stack currS, int newValue)
{
    stackEl *s = NULL;
    s = malloc(sizeof(*s));

    if (s == NULL)
    {
        exit(EXIT_FAILURE);
    }

    s->value = newValue;
    s->next = currS;

    printf("----\nadd a stack | value : %d\n----\n", s->value);

    currS = s;
}

/*---------------------------------------------------------------------------------*/

int isStackEmpty(stack s)
{
    if (s == NULL)
    {
        return 1;
    }
    return 0;
}

/*---------------------------------------------------------------------------------*/

stack removeStack(stack s)
{
    if (!isStackEmpty(s))
    {
        printf("----\nremove one stack | value : %d\n----\n", s->value);
        stack newS = s->next;
        free(s);
        return newS;
    }
    printf("----\ncant remove, stack is empty\n----\n");
    return NULL;
}

/*---------------------------------------------------------------------------------*/

void removeAllStacks(stack s)
{
    if (!isStackEmpty(s))
    {
        printf("----\nremove one stack | value : %d\n----\n", s->value);
        stack newS = s->next;
        free(s);
        removeAllStacks(newS);
    }
}

/*---------------------------------------------------------------------------------*/

int lengthStack(stack s)
{
    int i = 0;

    while (!isStackEmpty(s))
    {
        i++;
        s = s->next;
    }

    return i;
}

/*---------------------------------------------------------------------------------*/

void printStack(stack s)
{
    int i = 0;

    while (!isStackEmpty(s))
    {
        printf("index %d | value %d\n", i, s->value);
        i++;
        s = s->next;
    }
}

/*---------------------------------------------------------------------------------*/
