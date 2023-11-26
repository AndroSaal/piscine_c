#include <stdio.h>

char *ft_strstr(char *s1, char *s2);
int ft_strlen(char *s1);

int 	main(void)
{
	char str1[] = "AA124211256123435";
	char str2[] = "123";
	printf("%s", ft_strstr(str1, str2));
	return(0);
}

char *ft_strstr(char *s1, char *s2)
{
	int i_1 = 0;
	int i_2 = 0;
	int ifstr = 0;
//	int buff = 0;

	while(s1[i_1] != '\0')
	{
		if (ifstr == 1 || s2[i_2] == '\0')
		{
			break;
		}
		if (s1[i_1] == s2[i_2])
		{	
			while (s2[i_2] != '\0')
			{
				if (s1[i_1] == s2[i_2])
				{
					if (s2[i_2+1] == '\0')
					{
						ifstr = 1;
						break;
					}
					i_1++;
					i_2++;
				}
				else
				{
				//	i_1 = buff;
					break;
				}
			}
		}
		else 
		{
			i_1++;
		//	buff++;
		}
	}
	if (ifstr == 1)
	{
		return(&s1[i_1-i_2]);
	}
	else
	{
		return(s1);
	}
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
