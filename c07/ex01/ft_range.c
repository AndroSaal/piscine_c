#include <stdlib.h>

int ft_abs(int nbr);

int     *ft_range(int min, int max)
{
    int i = min;
    int j = 0;
    int *arr = NULL;

    if(min >= max)
        return(arr);
    arr = (int *) malloc(sizeof(int) *(ft_abs(max) - ft_abs(min) + 2));
    while (i <= max)
    {
        arr[j] = i;
        i++;
        j++;
    }
    return(arr);
}

int ft_abs(int nbr)
{
    if (nbr < 0)
        nbr *= -1;
    return (nbr);
}      

