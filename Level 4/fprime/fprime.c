#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		int		nbr = atoi(argv[1]);
		int		i = 1;

		while (++i <= nbr)
		{
			if (nbr % i == 0)
			{
				printf("%d", i);
				if (nbr == i)
					break;
				printf("*");
				nbr /= i;
				i = 1;
			}
		}
	}
	printf("\n");
	return (0);
}