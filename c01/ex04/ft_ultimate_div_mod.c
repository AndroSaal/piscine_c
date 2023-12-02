#include <stdio.h>

void 	ft_ultimate_div_mod(int *a, int *b);

int 	main(void)
{
	int a = 10;
	int b =3;
	int *pa = &a;
	int *pb = &b;
	ft_ultimate_div_mod(pa, pb);
	printf("mod = %d, div = %d", a, b);
	return(0);
}


void	ft_ultimate_div_mod(int *a, int *b)
{
	int i = *a;
	int j = *b;
	//printf("a = %d, b = %d ", i, j);
	*a = i/j;
	*b = i%j;
}

