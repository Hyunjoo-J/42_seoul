/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:08:55 by jinhpark          #+#    #+#             */
/*   Updated: 2021/03/06 17:23:41 by jinhpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		fill_rec(int r, int c, int n);
void	initialize(char *argv, int n);

int		cnt_numbers(char *argv)
{
	int	i;
	int	cnt;

	cnt = 0;
	i = 0;
	while (argv[i])
	{
		if (argv[i] != ' ')
			cnt++;
		i++;
	}
	if (cnt % 4 == 0)
		return (cnt / 4);
	return (0);
}

int		check_valid_sub(char *argv, int number_cnt)
{
	int	a;

	a = 0;
	while (argv[a])
	{
		if (a % 2 == 0)
		{
			if (!(argv[a] >= '1' && argv[a] <= number_cnt + '0'))
				return (0);
		}
		a++;
	}
	return (1);
}

int		check_vaild(char *argv)
{
	int	a;
	int	number_cnt;

	a = 0;
	while (argv[a])
	{
		if (a % 2)
		{
			if (argv[a] != ' ')
				return (0);
		}
		else
		{
			if (!(argv[a] >= '1' && argv[a] <= '9'))
				return (0);
		}
		a++;
	}
	number_cnt = cnt_numbers(argv);
	if (check_valid_sub(argv, number_cnt))
		return (number_cnt);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int	number_cnt;

	number_cnt = check_vaild(argv[1]);
	if (argc == 2)
	{
		if (number_cnt)
		{
			initialize(argv[1], number_cnt);
			if (fill_rec(0, 0, number_cnt))
			{
				return (0);
			}
			else
				write(1, "Error\n", 6);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
