#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void    ft_print(int* nbr);
int     ft_ultimate_range(int **range, int min, int max);
int     memory(int min, int max);

int main(void)
{
    int *a = (int*)malloc(sizeof(int)*1);
    printf("%d", ft_ultimate_range(&a, -10, 10));
    ft_print(a);
    return 0;
}

void ft_print(int* nbr)
{
    int i = 0;
    if (nbr == NULL)
    {
        printf("NULL");
        return;
    }
    while (nbr[i] < nbr[i+1])
    {
        printf("%d", nbr[i]);
        if (nbr[i] != 10)
            printf(", ");
        i++;
    }
}