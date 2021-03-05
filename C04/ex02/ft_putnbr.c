/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:53:45 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/04 14:54:40 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rec(int nb)
{
	char num;

	if (nb == 0)
		return ;
	rec(nb / 10);
	num = nb % 10 + '0';
	write(1, &num, 1);
}

void	ft_putnbr(int nb)
{
	char num;

	if (nb < 0)
	{
		write(1, "-", 1);
		rec(-(nb / 10));
		num = '0' - nb % 10;
	}
	else
	{
		rec(nb / 10);
		num = '0' + nb % 10;
	}
	write(1, &num, 1);
}
