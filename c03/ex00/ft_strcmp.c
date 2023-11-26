#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int 	main(void)
{
	char str1[] = "AAA";
	char str2[] = "AAP";
	printf("%d", ft_strcmp(str1, str2));
	return(0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i_1 = 0;
	int i_2 = 0;

	while(s1[i_1] != '\0' || s2[i_2] != '\0')
	{
		if (s1[i_1] == s2[i_2])
		{
			i_1++;
			i_2++;
		}

		else
		{
			i_1 = i_1 - i_2;
			return(i_1-i_2);
		}
	}
	return(i_1-i_2);
	
}
