#include <stdio.h>
int	ft_strlen(char *str);
char *ft_strcpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char ch_arr2[] = "aaaaaaaaaaa11";
	char ch_arr1[59];
	ft_strcpy(ch_arr1, ch_arr2, 8);
	printf("%s", ch_arr1);
	return(0);
}

char *ft_strcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	while ((unsigned)i < n)
	{
		if (ft_strlen(src) < i)
		{
			dest[i] = '0';
		}
		else 
		{
			dest[i] = src[i];
		}
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}
