/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 20:45:54 by hyjeong           #+#    #+#             */
/*   Updated: 2021/02/22 22:10:06 by hyjeong          ###   ########.fr       */
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

	if (nb < -2147483648 || nb > 2147486347)
		return ;
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
