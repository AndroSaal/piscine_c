#include <stdio.h>

void	ft_rev_int_tab(int    *tab,    int    size);

int 	main(void)
{
	int i = 10;
	int arr[10] = {1, 2, 222, 4, 5, 999, 7, 8, 666, 10};
	ft_rev_int_tab(arr, i);
	return(0);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int buff = 0;
	for  (int i = 0; i <= size-1; i++)
	{
		if (tab[i] > tab[i+1] && i+1 != size)
		{
			buff = tab[i+1];
			tab[i+1] = tab[i];
			tab[i] = buff;
			i = 0;
		}
	}
	for (int m = 0; m <= size-1; m++)
	{
		printf("%d  ", tab[m]);
	}
}
