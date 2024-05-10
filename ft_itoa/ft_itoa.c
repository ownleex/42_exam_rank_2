#include <stdlib.h>

int		ft_len(int nbr)
{
	int		len = (nbr <= 0) ? 1 : 0;

	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		len = ft_len(nbr);
	char	*str = (char *)malloc(sizeof(char) * (len + 1));

	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	str[len] = '\0';
	while (nbr != 0)
	{
		len--;
		str[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}