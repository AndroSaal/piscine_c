#include "ft_stock_str.h"

void ft_print_str(char* str);
void ft_putchar(char a);
void ft_print_nbr(int nbr);

void ft_show_tab(struct s_stock_str *par)
{
    int index = 0;

    while (par[index].str != 0)
    {
        ft_print_str(par[index].str);
        ft_putchar('\n');
        ft_print_str(par[index].copy);
        ft_putchar('\n');
        ft_print_nbr(par[index].size);
        ft_putchar('\n');
        index++;
    }
}

void ft_print_str(char* str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

void ft_putchar(char a)
{
    write(1, &a, 1);
}

void ft_print_nbr(int nbr)
{
    char number = ' ';
    // int buffer = nbr;
    int del = 1;

    // while (buffer/10 != 0)
    //     i++;
    while(nbr / del != 0)
            del *= 10;
    while (nbr != 0)
    {
        // while(nbr / del != 0)
        //     del *= 10;
        number = nbr / del + '0';
        write(1, &number, 1);
        nbr %= del;
        del /= 10;
    }
}