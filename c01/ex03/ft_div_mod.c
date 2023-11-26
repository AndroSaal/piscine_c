#include <unistd.h>
#include <stdio.h>

void 	ft_div_mod(int a, int b, int *mod, int *div);

int 	main(void)
{
	int i = 0;
	int j = 0;
	int *pi = &i;
	int *pj = &j;
	ft_div_mod(10, 2, pi, pj);
	//printf("mod = %d, div = %d", i, j);
	return(0);
}


void	ft_div_mod(int a, int b, int *mod, int *div)
{
	*mod = a / b;
	*div = a % b;
}
