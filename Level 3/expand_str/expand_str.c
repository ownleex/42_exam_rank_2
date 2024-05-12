#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i = 0;
	int		end = 0;

	if (argc == 2)
	{
		while (argv[1][end])
			end++;
		while (argv[1][end] == ' ' || argv[1][end] == '\t' || argv[1][end] == '\0')
			end--;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] && i <= end)
		{
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
				write(1, &argv[1][i], 1);
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				if (argv[1][i + 1] != ' ' && argv[1][i + 1] != '\t')
					write(1, "   ", 3);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}