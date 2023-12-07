#include <unistd.h>

void ft_print_params(char *arr);

int main(int argc, char *argv[])
{
    int i = 1;
    while (i <= argc - 1)
    {
        ft_print_params(argv[i]);
        if (i != argc - 1)
            write(1, "\n", 1);
        i++;
    }
    return 0;
}

void ft_print_params(char *arr)
{
    int i = 0;

    while (arr[i] != '\0')
    {
        write(1, &arr[i], 1);
        i++;
    }
}