#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int memory(int min, int max);

int     *ft_range(int min, int max)
{
    int i = 0;
    int *A = (int *)malloc(memory(min, max)*sizeof(int));
    if (NULL == A)
        return(0);
    while (i != memory(min, max) + 1)
    {
        A[i] = min + i;
        i++;
    }
    return(A);
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