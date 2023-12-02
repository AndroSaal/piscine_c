int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	if (ft_strlen(s1) != ft_strlen(s2))
	{
		printf("%d", "OK1\n");
		return(0);
	}

	while(s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			printf("%d", "OK2\n");
			return (0);
		}
	}
	printf("%s\n", "KO3");
	return(1);
}

int ft_strlen(char * str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}