/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 12:10:04 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/10 20:48:39 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_check(char *base, int size)
{
	int i;
	int j;

	i = 0;
	if (size < 2)
		return (1);
	while (i < size)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == 32)
			return (1);
		else if (9 <= base[i] && base[i] <= 13)
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	type_change(char *str, char *base, int num)
{
	int minus;
	int i;
	int j;

	minus = 0;
	i = -1;
	while (*str == '-' || *str == '+')
		if (*(str++) == '-')
			minus++;
	while (str[++i])
	{
		j = -1;
		while (base[++j])
			if (str[i] == base[j])
				str[i] = j + 48;
	}
	j = -1;
	while (++j < (i - 1))
	{
		num *= 10;
		num += str[j] - '0';
	}
	if (minus % 2 == 1)
		num = num * (-1);
	return (num);
}

int	multi(int num, int size, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		num *= size;
		i++;
	}
	return (num);
}

int	decimal(int num, int size)
{
	int ret;
	int n;
	int mod;

	n = 0;
	ret = 0;
	mod = 0;
	while (num)
	{
		mod = num % 10;
		num = num / 10;
		ret += multi(mod, size, n);
		n++;
	}
	return (ret);
}

int	ft_atoi_base(char *str, char *base)
{
	int		num;
	int		size;
	int		a;
	char	s[1000000];
	char	*ptr;

	num = 0;
	while (*str)
	{
		s[num] = *str;
		str++;
		num++;
	}
	ptr = s;
	num = 0;
	size = 0;
	while (base[size])
		size++;
	if (base_check(base, size) == 1)
		return (0);
	while ((*ptr >= 9 && *s <= 13) || *ptr == 32)
		ptr++;
	a = type_change(s, base, num);
	num = decimal(a, size);
	return (num);
}
