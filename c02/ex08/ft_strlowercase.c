#include <stdio.h>

char 	*ft_str_is_alpha(char *str);

int 	main(void)
{
	char yes[] = "akwmvejrlbve	JFHVBEHRVBeb";
	char not[] = "";
	ft_str_is_alpha(yes);
	ft_str_is_alpha(not);
	printf("%s, %s", yes, not);
}

char 	*ft_str_is_alpha(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return(str);

}
