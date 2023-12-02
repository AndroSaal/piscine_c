#include <stdio.h>

char *ft_strcat(char *s1, char *s2);
int ft_strlen(char *s1);

int 	main(void)
{
	char str1[] = "AAA";
	char str2[] = "AAP";
	printf("%s", ft_strcat(str1, str2));
	return(0);
}

char *ft_strcat(char *s1, char *s2)
{
	int i_1 = ft_strlen(s1);
	int i_2 = 0;

	while(1)
	{
		if (s2[i_2] != '\0')
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
