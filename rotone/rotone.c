#include <unistd.h>

int	main(int argc, char **argv)
{
	char    *s;

	s = argv[1];
	if (argc == 2)
	{
		while (*s)
		{
			if ((*s >= 'A' && *s <= 'Y') || (*s >= 'a' && *s <= 'y'))
				*s += 1;
			else if (*s == 'Z' || *s == 'z')
				*s -= 25; 
			write(1, &*s, 1);
			s++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
