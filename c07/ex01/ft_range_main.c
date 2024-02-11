#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void    ft_print(int* nbr);
int     *ft_range(int min, int max);
void ft_putnbr(int nb);

int main(void)
{
    ft_print(ft_range(10, -10));
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