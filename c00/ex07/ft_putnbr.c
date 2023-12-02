#include <unistd.h>
#include <stdio.h>


void ft_putnbr(int nb);

int main(void)
{
	ft_putnbr(19973);
}

void ft_putnbr(int nb)
{

	int a = nb;
	int i = 0;
	int c = 0;

	if (nb < 0)
	{
		nb = -1 * nb;
		write(1,"'-", 1);
	}
	if (nb == '0')
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
