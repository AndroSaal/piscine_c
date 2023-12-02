#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str);

int 	main(void)
{
	char str[] = "STROKA";
	int a = ft_strlen(str);
	//printf("i = %d", a);
	write(1, &a, 1);  // write не пашет!
	return(0);
}

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

