/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:21:46 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/04 14:40:15 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (*dest && i < size)
	{
		++i;
		++dest;
	}
	while (*src && i + 1 < size)
	{
		*dest = *src;
		++dest;
		++src;
		++i;
	}
	if (i < size)
		*dest = 0;
	while (*src)
	{
		++i;
		++src;
	}
	return (i);
}
