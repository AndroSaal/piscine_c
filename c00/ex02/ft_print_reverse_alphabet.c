#include <unistd.h>

void ft_print_alphabet(void);

int main(void)
{
	ft_print_alphabet();
	return 0;
}

void ft_print_alphabet(void)
{
	int i=122;

	while (i >= 97 && i <= 122)
	{
		write(1, &i ,1);
		i--;
	}
}
