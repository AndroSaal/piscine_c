#include "ft_stock_str.h"

struct s_stock_str *ft_str_to_tab(int ac, char **av);

int main(int argc, char **argv)
{
    t_stock_str *proverka = ft_str_to_tab(argc, argv);
    int index = 0;

    while(index <= argc)
    {
        printf("index: %d\n", index);
        printf("str: %s\n", proverka[index].str);
        printf("copy: %s\n", proverka[index].str);
        printf("size: %d\n", proverka[index].size);
        index++;
    }
    return(0);
}