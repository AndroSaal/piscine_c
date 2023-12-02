#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

int 	main(void)
{
	int i_1 = 1;
	int i_2 = 2;
	int *pi_1 = &i_1;
	int *pi_2 = &i_2;
	ft_swap(pi_1, pi_2);
	//printf("i_1 = %d, i_2 = %d", i_1, i_2);
	return(0);
}

void	ft_swap(int *a, int  *b)
{
	int buff = *a;
	*a = *b;
	*b = buff;
}
