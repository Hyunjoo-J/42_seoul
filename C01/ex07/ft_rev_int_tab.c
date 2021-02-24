/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:58:09 by hyjeong           #+#    #+#             */
/*   Updated: 2021/02/24 16:00:10 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int index;
	int c;
	int swap[size];

	c = 0;
	index = size - 1;
	while (index >= 0)
	{
		swap[c] = tab[index];
		index--;
		c++;
	}
	c = 0;
	while (c < size)
	{
		tab[c] = swap[c];
		c++;
	}
}
