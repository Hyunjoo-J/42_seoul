/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 18:31:47 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/15 18:33:23 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	space(char *str);
int		check_base(char *str);
int		trans_int(char c, char *base, int len);
int		ft_atoi_base(char *str, char *base);

int		find_pos(int num, int base_len)
{
	int ret;

	if (!num)
		return (1);
	ret = 0;
	if (num < 0)
		++ret;
	while (num)
	{
		num /= base_len;
		++ret;
	}
	return (ret);
}

char	*trans_base_to(long long num, char *base_to, int size, int pos)
{
	char	*ret;

	if (num == 0)
	{
		ret = (char *)malloc(2);
		ret[0] = base_to[0];
		ret[1] = 0;
		return (ret);
	}
	ret = (char *)malloc(pos + 1);
	ret[pos] = 0;
	if (num < 0)
	{
		ret[0] = '-';
		num *= -1;
	}
	while (num)
	{
		ret[--pos] = base_to[num % size];
		num = num / size;
	}
	return (ret);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long	num;
	int			size;
	int			pos;

	size = check_base(base_to);
	if (check_base(base_from) <= 1 || size <= 1)
		return (0);
	num = ft_atoi_base(nbr, base_from);
	pos = find_pos(num, size);
	return (trans_base_to(num, base_to, size, pos));
}
