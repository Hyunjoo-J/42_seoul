void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;
	i = 1;
	j = 1;
	if (x < 1 || y < 1)
		return ;
	while (j <= y)
	{
		while (i <= x)
		{
			if (i == 1 && (j == 1 || j == y))
				ft_putchar('A');
			else if (i == x && (j == 1 || j == y))
				ft_putchar('C');
			else if (i == 1 || i == x || j == 1 || j == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
		i = 1;

	}
}
