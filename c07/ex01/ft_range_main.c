#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void    ft_putnbr(int* nbr);
int     *ft_range(int min, int max);

int main(void)
{
    ft_putnbr(ft_range(-1, 10));
    return 0;
}

void ft_putnbr(int* nbr)
{
    int i = 0;

    while (nbr[i] != '\0')
    {
        printf("%d, ", nbr[i]);
        nbr[i] -= '0';
        write(1, &nbr[i], 1);
        if (nbr[i+1] != '\0')
            write(1, ", ", 2);
        i++;
    }
}