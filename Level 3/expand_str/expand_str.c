#include <unistd.h>

void	expand_str(char *str)
{
	int		i		= 0;
	int		end		= 0;

	while (str[end])
		end++;
	while (str[end] == ' ' || str[end] == '\t' || str[end] == '\0')
		end--;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] && i <= end)
	{
		if (str[i] != ' ' && str[i] != '\t')
			write(1, &str[i], 1);
		if (str[i] == ' ' || str[i] == '\t')
			if (str[i + 1] && str[i + 1] != ' ' && str[i + 1] != '\t')
				write(1, "   ", 3);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}