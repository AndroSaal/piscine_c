#include <unistd.h>
void ft_putstr(char *src);
char    *ft_strdup(char *src);

int main(void)
{
    char src[] = "oh, mama...";
    ft_putstr(ft_strdup(src));
    return 0;
}

void ft_putstr(char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        write(1, &src[i], 1);
        i++;
    }
}