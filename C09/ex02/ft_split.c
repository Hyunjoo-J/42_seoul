/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 14:00:13 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/17 14:40:15 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			is_in(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

long long	wordsize(char *str, char *charset)
{
	long long word;

	word = 0;
	while (*str)
	{
		if (!is_in(*str, charset))
		{
			word++;
			while (*str && !is_in(*str, charset))
				str++;
		}
		str++;
	}
	return (word);
}

void		copy(char *dest, char *start, char *fin)
{
	while (start < fin)
	{
		*dest = *start;
		dest++;
		start++;
	}
	*dest = 0;
}

char		**ft_split(char *str, char *charset)
{
	long long	word;
	long long	idx;
	char		**ret;
	char		*temp;

	word = 0;
	idx = 0;
	word = wordsize(str, charset);
	ret = (char **)malloc(sizeof(char *) * word + 1);
	while (*str)
	{
		if (!is_in(*str, charset))
		{
			temp = str;
			while (*str && !is_in(*str, charset))
				str++;
			ret[idx] = (char *)malloc(str - temp + 1);
			copy(ret[idx], temp, str);
			idx++;
		}
		str++;
	}
	ret[idx] = 0;
	return (ret);
}
