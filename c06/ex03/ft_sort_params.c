#include <unistd.h>
#include <stdio.h>

void ft_print_params(char *arr);
void ft_sort_params(char **arr, int number_of_iterations);
int ft_summ(char *arr);
void ft_swap(char **a, char **b);

int main(int argc, char *argv[])
{
    int i = 1;

    if (argc == 1)
        return 0;
    printf("%s", "OK0\n");
    ft_sort_params(argv, argc);
    printf("%s\n", "OK_sort");
    while(i < argc)
    {
        ft_print_params(argv[i]);
        if (i != argc)
            write(1, "\n", 1);
        i++;
    }
    printf("%s\n", "OK_main");
    return 0;
}

void ft_sort_params(char **arr, int number_of_iterations)
{
    int i = 1;
    printf("%s", "OK1\n");
    printf("%d\n", number_of_iterations);
    while (arr[i+1] != NULL)
    {
        printf("%s", "OK1_2\n");
        if (ft_summ(arr[i]) > ft_summ(arr[i+1]))
        {
            ft_swap(&arr[i+1], &arr[i]);
        }
        i++;
    }
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

int ft_summ(char *arr)
{
    int i = 0;
    int summ = 0;

    printf("%s", "OK3\n");

    while (arr[i] != '\0')
    {
        summ += arr[i];
        i++;
    }
    return (summ);
}

void ft_swap(char **a, char **b)
{
    char *buff = NULL;

    buff = *a;
    *a = *b;
    *b = buff;

}
