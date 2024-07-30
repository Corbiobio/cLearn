#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int printArray(int *arr, int length);

int main3()
{
    int arr[5] = {1, 2, 3, 4, 55};
    int total = printArray(arr, 5);
    printf("%d\n", total);
    return 0;
}

int printArray(int arr[], int length)
{
    int total = 0;

    for (int i = 0; i < length; i++)
    {
        total += arr[i];
        printf("index %d -> %d \n", i, arr[i]);
    }
    return total;
}