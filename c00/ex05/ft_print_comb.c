#include <unistd.h>

void ft_print_comb(void);

int main(void)
{
	ft_print_comb();
	return (0);
}

void ft_print_comb(void)
{
	int i = '0';
	int j = '0';
	int z = '0';
	while (i >= '0' && i <= '7')
       	{
		j = i + 1;
		while (j >= '0' && j <= '9')
		{
			z = j + 1;
			while (z >= '0' && z<= '9') 
			{	
				write(1,&i,1);
				write(1,&j,1);
				write(1,&z,1);
				if (i+j+z != '7' + '8' + '9')
				{
					write(1,", ", 2);
				}
				z++;
			}
			j++;
		}
		i++;
	}
}
