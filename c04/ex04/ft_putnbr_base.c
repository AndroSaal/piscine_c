#include <unistd.h>
#include <stdio.h>

void ft_print(char *arr);
int	ft_strcmp(char *s1, char *s2);
void ft_2(int nbr);
int ft_number_of_digits_2(int nb);
void ft_8(int nbr);
int ft_number_of_digits_8(int nb);
void ft_10(int nbr);
int ft_number_of_digits_10(int nb);
void ft_16(int nbr);
int ft_number_of_digits_16(int nb);

void    ft_putnbr_base(int nbr, char *base)
{
    if (nbr == 0)
    {
        write(1, "0", 1);
        return;
    }
    if (nbr < 0)
    {
        nbr = -nbr;
        write (1, "-", 1);
    }
    if (ft_strcmp(base, "01"))
    {
        ft_2(nbr);
    }

    if (ft_strcmp(base, "poneyvif"))
    {
        ft_8(nbr);
    }

    if (ft_strcmp(base, "0123456789"))
    {
        ft_10(nbr);
    }

    if (ft_strcmp(base, "0123456789ABCDEF"))
    {
        ft_16(nbr);
    }

    return;
}

void ft_2(int nbr)
{
    int j = ft_number_of_digits_2(nbr) - 1;
    char arr[j];
    int i = 0;
    char buff = '0';

    while (nbr != 0)
    {
        arr[i] = (nbr % 2) + '0';
        nbr /= 2;
        i++;
    }
    i = 0;
    while (i <= j/2)
    {
        buff = arr[i];
        arr[i] = arr[j-i];
        arr[j-i] = buff;
        i++; 
    }
    ft_print(arr);
}

int ft_number_of_digits_2(int nb)
{
    int i = 0;

    while (nb != 0)
    {
        nb /= 2;
        i++;
    }
    return(i);
}

void ft_8(int nbr)
{
    int j = ft_number_of_digits_8(nbr) - 1;
    char arr[j];
    int i = 0;
    char buff = '0';

    while (nbr != 0)
    {
        arr[i] = nbr % 8 + '0';
        nbr /= 8;
        i++;
    }
    i = 0;
    while (i <= j/2)
    {
        buff = arr[i];
        arr[i] = arr[j-i];
        arr[j-i] = buff;
        i++; 
    }
    ft_print(arr);
}

int ft_number_of_digits_8(int nb)
{
    int i = 0;

    while (nb != 0)
    {
        nb /= 8;
        i++;
    }
    return(i);
}

void ft_10(int nbr)
{
    int j = ft_number_of_digits_10(nbr) - 1;
    char arr[j];
    int i = 0;
    char buff = '0';

    if (nbr < 0)
    {
        nbr = -1 * nbr;
        write(1, "-", 1);
    }
    while (nbr != 0)
    {
        arr[i] = (nbr % 10) + '0';
        nbr /= 10;
        i++;
    }
    i = 0;
    while (i <= j/2)
    {
        buff = arr[i];
        arr[i] = arr[j-i];
        arr[j-i] = buff;
        i++; 
    }
    ft_print(arr);
}

int ft_number_of_digits_10(int nb)
{
    int i = 0;

    while (nb != 0)
    {
        nb /= 10;
        i++;
    }
    return(i);
}

void ft_16(int nbr)
{
    int j = ft_number_of_digits_16(nbr) - 1;
    char arr[j];
    int i = 0;
    char buff = '0';

    while (nbr != 0)
    {
        if (nbr % 16 >= 10)
        {
            arr[i] = nbr % 16 + '7';
        }
        else 
        {
            arr[i] = nbr % 16 + '0';
        }
        nbr /= 16;
        i++;
    }
    i = 0;
    while (i <= j/2)
    {
        buff = arr[i];
        arr[i] = arr[j-i];
        arr[j-i] = buff;
        i++; 
    }
    ft_print(arr);
}

int ft_number_of_digits_16(int nb)
{
    int i = 0;

    while (nb != 0)
    {
        nb /= 16;
        i++;
    }
    return(i);
}

void ft_print(char *arr)
{
    int i = 0;

    while(arr[i] != '\0')
    {
        write(1, &arr[i], 1);
        i++;
    }
}