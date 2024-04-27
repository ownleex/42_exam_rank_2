#include <unistd.h>

int	atoi(char *str)
{
	int		nbr = 0;

	while (*str)
		nbr = nbr * 10 + *str++ - '0';
	return (nbr);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int	main(int argc, char **argv)
{
	int		i = 1;
	int		nbr;
	int		res;

	if (argc == 2)
	{
		nbr = atoi(argv[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			res = i * nbr;
			ft_putnbr(res);
			write(1, "\n", 1);
			i++;
		}
			
	}
	else
		write(1, "\n", 1);
	return (0);
}