#include <stdlib.h>
#include <stdio.h>

int	ft_len(int nbr)
{
	int		len = (nbr <= 0) ? 1 : 0;

	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int nbr)
{
	int		len = ft_len(nbr);
	char	*str = (char *)malloc(sizeof(char) * (len + 1));
	char	*number = "0123456789";

	if (nbr == 0)
	{
		str[0] = '0';
		return str;
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	str[len] = '\0';
	while (nbr != 0)
	{
		len--;
		str[len] = number[nbr % 10];
		nbr /= 10;
	}
	return (str);
}