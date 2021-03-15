/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:45:26 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/16 00:52:40 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int *temp;

	if (min >= max)
		return (0);
	size = max - min;
	*range = (int *)malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	temp = *range;
	while (min < max)
		*(temp++) = min++;
	return (size);
}
