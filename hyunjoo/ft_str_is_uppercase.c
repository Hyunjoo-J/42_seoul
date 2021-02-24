int	ft_str_uppercase(char *str)
{
	while (*str != 0)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
