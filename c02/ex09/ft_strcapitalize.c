#include <stdio.h>

char 	*ft_str_is_alpha(char *str);

int 	main(void)
{
	char yes[] = "dsffe efwfwe, fwefwef, rwgw+f,we, 4532, qe-qfq2, 12rf";
	ft_str_is_alpha(yes);
	printf("%s", yes);
}

char 	*ft_str_is_alpha(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 97 && i <= 122)
		{
			str[i] = str[i] - 32;
			i++;
		}

		if (str[i] == '+' || str[i] == '-' || str[i] == ' ')
		{
			if (str[i+1] >= 97 && str[i+1] <= 122)
			{
				str[i+1] = str[i+1] - 32;
			}
		}
		i++;
	}
	return(str);

}
