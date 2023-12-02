#include <stdio.h>

char *ft_strncat(char *s1, char *s2, unsigned int nb);
int ft_strlen(char *s1);

int 	main(void)
{
	char str1[] = "AAA";
	char str2[] = "BBB";
	printf("%s", ft_strncat(str1, str2, 1));
	return(0);
}

char *ft_strncat(char *s1, char *s2, unsigned int nb)
{
	int i_1 = ft_strlen(s1);
	unsigned int i_2 = 0;

	while(1)
	{
		if (s2[i_2] != '\0' && i_2 < nb)
		{	
			s1[i_1] = s2[i_2];
			i_1++;
			i_2++;
		}
		else 
		{
			break;
		}
	}
	s1[i_1] = '\0';
	return(s1);
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
