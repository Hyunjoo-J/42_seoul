/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 17:19:17 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/05 17:25:37 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int checkbase(char *base)
{
	char check[128];

	while (*base != 0)
	{
		if (*base == '-' || *base == '+')
			return (1);
		if (check[*base] == 1)
		       return (1);
		else if
			check[*base] = 1;
		base++;	
	}
}
void	ft_putnbr_base(int nbr, char *base)
{
}
