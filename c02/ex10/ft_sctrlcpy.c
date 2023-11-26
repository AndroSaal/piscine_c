#include <stdio.h>


unsigned    int    ft_strlcpy(char    *dest,    char    *src,    unsigned    int    size);

int 	main(void)
{
	char arr1[] = "ABCDEFG";
	char arr2[4] = "\0";
	printf("%u, %s", ft_strlcpy(arr2, arr1, 4), arr2);
	return (0);
}

unsigned    int    ft_strlcpy(char    *dest,    char    *src,    unsigned    int    size)
{
	unsigned int i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
