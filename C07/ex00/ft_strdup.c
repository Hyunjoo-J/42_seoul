/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 16:14:40 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/15 16:36:17 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int count;

	count = 0;
	while (src[count])
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		idx;

	idx = 0;
	ptr = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!ptr)
		return (NULL);
	while (src[idx])
	{
		ptr[idx] = src[idx];
		idx++;
	}
	ptr[idx] = 0;
	return (ptr);
}
