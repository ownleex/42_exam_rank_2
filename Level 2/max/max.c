int		max(int* tab, unsigned int len)
{
	int		max = (len != 0) ? tab[0] : 0;

	while (len > 0)
	{
		if (tab[len] > max)
			max = tab[len];
		len--;
	}
	return (max);
}