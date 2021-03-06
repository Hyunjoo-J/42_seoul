/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_sub.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:25:05 by jinhpark          #+#    #+#             */
/*   Updated: 2021/03/06 17:25:05 by jinhpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern	int	g_board[9][9];

int	rl_cnt(int i, int n)
{
	int	idx;
	int	maxheight;
	int	cnt;

	cnt = 1;
	idx = 1;
	maxheight = g_board[i][0];
	while (idx < n)
	{
		if (maxheight < g_board[i][idx])
		{
			maxheight = g_board[i][idx];
			cnt++;
		}
		if (maxheight == n)
			break ;
		idx++;
	}
	return (cnt);
}

int	rr_cnt(int i, int n)
{
	int	idx;
	int	maxheight;
	int	cnt;

	cnt = 1;
	idx = 2;
	maxheight = g_board[i][n - 1];
	while (idx >= 0)
	{
		if (maxheight < g_board[i][idx])
		{
			maxheight = g_board[i][idx];
			cnt++;
		}
		if (maxheight == n)
			break ;
		idx--;
	}
	return (cnt);
}

int	cu_cnt(int i, int n)
{
	int	idx;
	int	maxheight;
	int	cnt;

	cnt = 1;
	idx = 1;
	maxheight = g_board[0][i];
	while (idx < n)
	{
		if (maxheight < g_board[idx][i])
		{
			maxheight = g_board[idx][i];
			cnt++;
		}
		if (maxheight == n)
			break ;
		idx++;
	}
	return (cnt);
}

int	cd_cnt(int i, int n)
{
	int idx;
	int maxheight;
	int cnt;

	cnt = 1;
	idx = 2;
	maxheight = g_board[n - 1][i];
	while (idx >= 0)
	{
		if (maxheight < g_board[idx][i])
		{
			maxheight = g_board[idx][i];
			cnt++;
		}
		if (maxheight == n)
			break ;
		idx--;
	}
	return (cnt);
}

int	count(int isrow, int isuporleft, int i, int n)
{
	int	cnt;

	if (isrow)
	{
		if (isuporleft)
			cnt = rl_cnt(i, n);
		else
			cnt = rr_cnt(i, n);
	}
	if (isrow == 0)
	{
		if (isuporleft)
			cnt = cu_cnt(i, n);
		else
			cnt = cd_cnt(i, n);
	}
	return (cnt);
}
