/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:11:49 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/08 23:36:18 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include <unistd.h>

int ft_strlen(char *base)
{
	int count;

	count = 0;
	while (base[count])
		count++;
	return (count);
}

int check(char *base)
{
	int i;
	int j;

	i = -1;
	if (ft_strlen(base) < 2)
		return (1);
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
	}
	return (0);
}
void	rec(int nb, int size, char *base)
{
	int num;

	if (nb == 0)
		return ;
	rec(nb / size, size, base);
	num = nb % size;
	write(1, &base[num], 1);
}

void	ft_putnbr(int nb, int size, char *base)
{
	int num;

	if (nb < 0)
	{
		write(1, "-", 1);
		rec(-(nb / size), size, base);
		num = - (nb % size);
	}
	else
	{
		rec((nb / size), size, base);
		num = nb % size;
	}
	write(1, &base[num], 1);
}
void	ft_putnbr_base(int nbr, char *base)
{
	int size;
	size = ft_strlen(base);
	if (check(base))
		return ;
	ft_putnbr(nbr, size, base);
}
