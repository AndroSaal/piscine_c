#include <stdio.h>

int 	ft_str_is_alpha(char *str);

int 	main(void)
{
	int i1 = 9000;
	int i2 = 9000;
	char yes[] = "akwmvejrlbvejerbvheb";
	char not[] = "      342	W";
	i1 = ft_str_is_alpha(yes);
	i2 = ft_str_is_alpha(not);
	printf("%d, %d", i1, i2);
}

int	ft_str_is_alpha(char *str)
{
	int i = 0;
	
	while (1)
	{

		if (str[i] == '\0')
		{
			i = 1;
			break;
		}

		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			i++;
		}
		else
		{
			i = 0;
			break;
		}
	}
	return(i);

}
