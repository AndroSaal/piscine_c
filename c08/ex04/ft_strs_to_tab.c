#include "ft_stock_str.h"

int ft_strlen(char *str);
void ft_print(t_stock_str* mass);

struct s_stock_str *ft_str_to_tab(int ac, char **av)
{   
    int i = 0;
    t_stock_str *mass = (t_stock_str*)malloc(sizeof(t_stock_str) * ac);
    if (!mass)
        return(NULL);
    
    while(i < ac)
    {
        mass[i].size = ft_strlen(av[i]);
        mass[i].str = av[i];
        mass[i].copy = mass[i].str;
        i++;
    }
    mass[ac].str = "0";
    mass[ac].copy = "0";
    return(mass);
}

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}
