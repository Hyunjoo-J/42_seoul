int	ft_find_next_prime(int nb)
{
	int i;

	i = 1;
	while (i * i < nb)
	{
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 1);
		i++;
	}
	return (nb);
}
