/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:34:26 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/11 19:45:23 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	q_print(int *col)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = col[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int		ft_abs(int a, int b)
{
	if (a >= b)
		return (a - b);
	else
		return (b - a);
}

int		promising(int *col, int i)
{
	int j;

	j = 0;
	while (j < i)
	{
		if (col[i] == col[j] || (i - j) == ft_abs(col[i], col[j]))
			return (0);
		j++;
	}
	return (1);
}

void	rec(int *col, int idx, int *count)
{
	col[idx] = 0;
	while (col[idx] < 10)
	{
		if (promising(col, idx))
		{
			if (idx == 9)
			{
				q_print(col);
				(*count)++;
			}
			else
				rec(col, idx + 1, count);
		}
		col[idx]++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int col[10];
	int idx;
	int count;

	idx = 0;
	count = 0;
	rec(col, idx, &count);
	return (count);
}
