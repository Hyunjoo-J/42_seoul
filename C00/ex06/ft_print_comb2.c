/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 20:18:59 by hyjeong           #+#    #+#             */
/*   Updated: 2021/02/23 02:13:26 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_num(int a, int b)
{
	ft_putchar('0' + a / 10);
	ft_putchar('0' + a % 10);
	ft_putchar(' ');
	ft_putchar('0' + b / 10);
	ft_putchar('0' + b % 10);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a < 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_num(a, b);
			b++;
		}
		a++;
	}
	write(1, "98 99", 5);
}
