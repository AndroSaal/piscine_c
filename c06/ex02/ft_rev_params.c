#include <unistd.h>

void ft_rev_params(char *arr);

int main(int argc, char *argv[])
{
    int i = 1;
    while(argc - i > 0)
    {
        ft_rev_params(argv[argc-i]);
        if (argc - i != 1)
            write(1, "\n", 1);
        i++;
    }
    return 0;
}

void ft_rev_params(char *arr)
{
    int i = 0;

    while (arr[i] != '\0')
    {
        write(1, &arr[i], 1);
        i++;
    }
}