#include <stdio.h>

char *ft_strlcat(char *s1, char *s2, unsigned int size);
int ft_strlen(char *s1);

int 	main(void)
{
	char str1[] = "AAA";
	char str2[] = "123";
	printf("%s", ft_strlcat(str1, str2, /* (unsigned) ft_strlen(str2) - 1)*/ 2));
	return(0);
}

char *ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i_1 = 0;
	unsigned int i_2 = 0;

	while(dest[i_1] != '\0')
	{
		i_1++;
	}
	while(src[i_2] != '\0' && i_2 < size)
       	{
		dest[i_1] = src[i_2];
		i_1++;
		i_2++;
	}	
	dest[i_1] = '\0';
	return (dest);
}

int	ft_strlen(char *s1)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	return(i);
}
