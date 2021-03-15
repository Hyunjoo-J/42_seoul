/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:45:27 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/15 22:42:06 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long long	ft_strlen(char *str)
{
	long long count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char		*ft_strcat(char *dest, char *src)
{
	while (*src)
		*(dest++) = *(src++);
	return (dest);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	long long	len;
	int			i;
	char		*ptr;
	char		*temp;

	len = 0;
	i = 0;
	if (size == 0)
	{
		ptr = (char *)malloc(1);
		ptr[0] = 0;
		return (ptr);
	}
	while (i < size)
		len += ft_strlen(strs[i++]);
	ptr = (char *)malloc(len + (size - 1) * ft_strlen(sep) + 1);
	temp = ft_strcat(ptr, strs[0]);
	i = 1;
	while (i < size)
	{
		temp = ft_strcat(temp, sep);
		temp = ft_strcat(temp, strs[i++]);
	}
	*temp = 0;
	return (ptr);
}
