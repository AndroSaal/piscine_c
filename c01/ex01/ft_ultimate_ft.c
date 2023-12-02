#include <stdio.h>
#include <unistd.h>

void     ft_ultimate_ft(int    *********nbr);

int	main(void)
{
	int i = 0;
	int *pi = &i;
	int **ppi = &pi;
	int ***pppi = &ppi;
	int ****ppppi = &pppi;
	int *****pppppi = &ppppi;
	int ******ppppppi = &pppppi;
	int *******pppppppi = &ppppppi;
	int ********ppppppppi = &pppppppi;
	int *********pppppppppi = &ppppppppi;
	ft_ultimate_ft(pppppppppi);
	printf("%d", i);
	return(0);
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
