#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);
void ft_swap(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_swap(int *a, int  *b)
{
	int buff = *a;
	*a = *b;
	*b = buff;
}

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return(i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	if (ft_strlen(s1) != ft_strlen(s2))
		return(0);
	while(s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (0);
	}
	return(1);
}