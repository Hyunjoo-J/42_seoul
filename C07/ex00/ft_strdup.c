/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 16:14:40 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/13 22:34:06 by hyjeong          ###   ########.fr       */
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
	char	*pArr;
	int		idx;

	idx = 0;
	pArr = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!pArr)
		return (NULL);
	while (src[idx])
	{
		pArr[idx] = src[idx];
		idx++;
	}
	pArr[idx] = 0;
	return (pArr);
}
