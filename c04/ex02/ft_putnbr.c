#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int nb)
{

	int a = nb;
	int i = 0;

	if (nb < 0)
	{
		a = -1 * nb;
		nb = -1 * nb;
		write(1,"-", 1);
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return;
	}
	while (a > 0)
	{
		a = a/10;
		i++;
	}
		
	while (i != 0)
	{	
		a = nb;
		for (int j = 0; j+1 != i; j++)
		{
			a = a/10;
		}
		a = a % 10 + 48;
		write(1, &a, 1);
		i--;
	}	
}
