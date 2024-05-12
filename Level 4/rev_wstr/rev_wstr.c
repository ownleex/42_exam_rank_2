#include <unistd.h>

void	rev_wstr(char *str)
{
	int		start = 0;
	int		end = 0;
	int		first_w = 1;

	while (str[end])
		end++;
	while (end >= 0)
	{
		if (first_w == 0)
			write(1, " ", 1);
		first_w = 0;
		while (end >= 0 && (str[end] == ' ' || str[end] == '\0'))
			end--;
		start = end;
		while (start >= 0 && str[start] != ' ')
			start--;
		write(1, &str[start + 1], end - start);
		end = start;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}