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
	if (nb != 0) 
	{
		while (a > 0)
		{
			//printf("a = %d\n", a);
			a = a/10;
			//printf("i = %d\n", i);
			i++;
			//printf("OK1");
		}
		
		while (i != 0)
		{	
			c = nb;
			for (int j = 0; j+1 != i; j++)
			{
				c = c/10;
			}
			c = c % 10 + 48;
			write(1, &c, 1);
			i--;
			//printf("OK2");
		}
	}
	else 
	{
		write(1, "0", 1);
	}	
}
