#include <unistd.h>

void	ft_print_char(char c, int i)
{
	while (i > 0)
	{
		write(1, &c, 1);
		i--;
	}
}

void	repeat_alpha(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			ft_print_char(*str, *str - 96);
		else if (*str >= 'A' && *str <= 'Z')
			ft_print_char(*str, *str - 64);
		else
			write(1, str, 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}