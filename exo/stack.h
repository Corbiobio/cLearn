#ifndef _STACK_H_
#define _STACK_H_

typedef struct stackEl
{
    int value;
    struct stackEl *next;
} stackEl, *stack;

stack newStack(void);
stack addStack(stack currS, int newValue);
int isStackEmpty(stack s);
stack removeStack(stack s);
void removeAllStacks(stack s);
int lengthStack(stack s);
void printStack(stack s);

#endif