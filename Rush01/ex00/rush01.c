/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:24:45 by jinhpark          #+#    #+#             */
/*   Updated: 2021/03/06 17:24:45 by jinhpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		count(int isrow, int isuporleft, int i, int n);
int		fill_rec(int r, int c, int n);
char	g_colup[9];
char	g_coldown[9];
char	g_rowleft[9];
char	g_rowright[9];
int		g_row[9][10];
int		g_col[9][10];
int		g_board[9][9];

void	initialize(char *argv, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i])
	{
		if (i % 2 == 0)
		{
			if (i < 2 * n)
				g_colup[j++] = argv[i];
			else if (i < 4 * n)
				g_coldown[j++] = argv[i];
			else if (i < 6 * n)
				g_rowleft[j++] = argv[i];
			else
				g_rowright[j++] = argv[i];
		}
		i++;
		if (j == n)
			j = 0;
	}
	return ;
}

int		isvalid(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (g_colup[i] != count(0, 1, i, n) + '0')
			return (0);
		if (g_coldown[i] != count(0, 0, i, n) + '0')
			return (0);
		if (g_rowleft[i] != count(1, 1, i, n) + '0')
			return (0);
		if (g_rowright[i] != count(1, 0, i, n) + '0')
			return (0);
		i++;
	}
	return (1);
}

void	print(int n)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			c = '0' + g_board[i][j++];
			write(1, &c, 1);
			if (j != n)
				write(1, " ", 1);
		}
		i++;
		write(1, "\n", 1);
	}
}

int		fill_one(int r, int c, int n)
{
	int	i;

	i = 1;
	while (i <= n)
	{
		if (g_row[r][i] || g_col[c][i])
		{
			i++;
			continue;
		}
		g_row[r][i] = 1;
		g_col[c][i] = 1;
		g_board[r][c] = i;
		if (fill_rec(r, c + 1, n))
			return (1);
		g_row[r][i] = 0;
		g_col[c][i] = 0;
		i++;
	}
	return (0);
}

int		fill_rec(int r, int c, int n)
{
	if (r == n)
	{
		if (isvalid(n))
		{
			print(n);
			return (1);
		}
		return (0);
	}
	if (c == n)
		return (fill_rec(r + 1, 0, n));
	else
		return (fill_one(r, c, n));
}
