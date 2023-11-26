#include <unistd.h>

void ft_print_comb(void);

int main(void)
{
	ft_print_comb();
	return (0);
}

void ft_print_comb(void)
{
	int a_1 = '0', a_2 = '0', b_1 = '0', b_2 = '0';
	
	while (a_1 <= '9')
	{
		a_2 = '0';
		while (a_2 <= '8')
		{
			b_1 = '0';
			while (b_1 <= '9')
			{	
				b_2 = '0';
				b_2 = a_2 + 1;
				while (b_2 <= '9')
				{
					write(1, &a_1, 1);
					write(1, &a_2, 1);
					write(1, " ", 1);
					write(1, &b_1, 1);
					write(1, &b_2, 1);
					if (a_1 != '9' || a_2 != '2' || b_1 != '9' || b_2 != '9')
					{
						write(1, ", ", 2);
					}
					b_2++;
				}
				b_1++;
			}
			a_2++;
		}
		a_1++;
	}


}

