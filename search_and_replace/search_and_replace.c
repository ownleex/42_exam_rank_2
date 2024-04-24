#include <unistd.h>

int	main(int argc, char **argv)
{
	int 	i = 0;
	char	*str = argv[1];
	char	*a = argv[2];
	char	*b = argv[3];

	if (argc == 4 && !a[1] && !b[1])
	{
		while (str[i])
		{
			if (str[i] == *a)
				str[i] = *b;
			write(1, &str[i], 1);
			i++;
		}	
	}
	write(1, "\n", 1);
	return (0);
}