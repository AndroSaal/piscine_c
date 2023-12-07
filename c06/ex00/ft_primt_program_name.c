#include <unistd.h>

void ft_print_program_name(char* arr);

int main(int argc, char *argv[0])
{
    if (argc == 1)
        ft_print_program_name(argv[0]);
    return 0;
}

void ft_print_program_name(char* arr)
{
    int i = 0;
    
    while (arr[i] != '\0')
    {
        write(1, &arr[i], 1);
        i++;
    }
}