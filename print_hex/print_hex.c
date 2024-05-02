#include <unistd.h>

int	ft_atoi(char *str)
{
	int		res = 0;

	while (*str)
		res = res * 10 + *str++ -'0';
	return (res);
}

void	print_hex(int nbr)
{
	char *str = "0123456789abcdef";

	if (nbr >= 16)
		print_hex(nbr / 16);
	write(1, &str[nbr % 16], 1);
}

int	main(int argc, char **argv)
{
	int		i = 0;

	if (argc == 2)
	{
		print_hex(ft_atoi(argv[1]));
	}
	write(1, "\n", 1);
	return (0);
}