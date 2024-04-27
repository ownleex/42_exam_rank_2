unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	res = 0;

	if (a == 0 || b == 0)
		return (res);
	if (a > b)
		res = a;
	else
		res = b;
	while (1)
	{
		if (res % a == 0 && res % b == 0)
			return (res);
		res++;
	}
}