#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int memory(int min, int max);

int ft_ultimate_range(int **range, int min, int max)
{
    int *A = (int*)malloc(memory(min, max)*sizeof(int));
    int i = 0;
    if (min >= max)
    {
        *range = NULL;
        return (-1);
    }
    *range = A;
    while (i <= memory(min, max))
    {
        A[i] = min + i;
        i++;
    }
    return(memory(min, max));
}

int memory(int min, int max)
{
    int i = 0;
    while (max >= min)
    {
        i++;
        max--;
    }
    return (i);
} 