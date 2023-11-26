#include <stdio.h>

void	ft_rev_int_tab(int    *tab,    int    size);

int 	main(void)
{
	int i = 10;
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	ft_rev_int_tab(arr, i);
	return(0);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int buff = 0;
	for  (int i = 0; i <= size/2; i++)
	{
		buff = tab[size-i-1];
		tab[size-i-1] = tab[i];
		tab[i] = buff;
	}
	for (int m = 0; m <= size-1; m++)
	{
		printf("%d", tab[m]);
	}
}
