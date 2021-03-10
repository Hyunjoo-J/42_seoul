int	ft_is_prime(int nb)
{
	int i;
	
	i = 1;
	while (i * i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
