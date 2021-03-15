/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 18:51:54 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/15 22:56:45 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		++charset;
	}
	return (0);
}

long long	is_m_size(char *str, char *charset)
{
	long long	count;

	count = 0;
	while (*str)
	{
		if (!is_charset(*str, charset))
		{
			++count;
			while (*str && !is_charset(*str, charset))
				++str;
		}
		++str;
	}
	return (count);
}

void		ft_strcpy(char *dest, char *src, char *fin)
{
	while (src < fin)
		*(dest++) = *(src++);
	*dest = 0;
}

char		**ft_split(char *str, char *charset)
{
	char		**ret;
	long long	idx;
	char		*temp;

	ret = (char **)malloc(sizeof(char *) * is_m_size(str, charset) + 1);
	idx = 0;
	while (*str)
	{
		if (!is_charset(*str, charset))
		{
			temp = str;
			while (*str && !is_charset(*str, charset))
				++str;
			ret[idx] = (char *)malloc(str - temp + 1);
			ft_strcpy(ret[idx++], temp, str);
		}
		++str;
	}
	ret[idx] = 0;
	return (ret);
}
