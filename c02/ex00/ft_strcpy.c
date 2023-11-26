#include <stdio.h>

char *ft_strcpy(char *dest, char *src);


int 	main(void)
{
	char a1[] = "AAAAAAAA";
	char a2[9];
	ft_strcpy(a2, a1);
	printf("%s", a2);
	return(0);
}

char	*ft_strcpy(char* dest, char* src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
