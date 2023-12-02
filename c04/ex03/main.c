#include <stdio.h>

int ft_atoi(char *str);
int ft_sign(char *arr);

int	main(void)
{
	char arr[] = "--+adncjen13342wkcm13";

    printf("%d", ft_atoi(arr));
	return 0;
}