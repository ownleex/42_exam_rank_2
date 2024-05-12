#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int	nbr1;
	int	nbr2;
	int	div = 1;
	int	pgcd = 0;

	if (argc == 3)
	{
		nbr1 = atoi(argv[1]);
		nbr2 = atoi(argv[2]);
		while (div <= nbr1 || div <= nbr2)
		{
			if (nbr1 % div == 0 && nbr2 % div == 0)
				pgcd = div;
			div++;
		}
		printf("%d", pgcd);
	}
	printf("\n");
	return (0);
}