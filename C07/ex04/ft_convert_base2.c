/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 16:58:27 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/15 18:27:51 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	space(char *str)
{
	if (*str == 32 || (*str >= 9 && *str <= 13))
		return (1);
	return (0);
}

int		check_base(char *base)
{
	int chk[256];
	int i;
	int len;

	i = 0;
	while (i < 256)
		chk[i++] = 0;
	len = 0;
	while (base[len])
	{
		if (chk[(int)base[len]] || (base[len] >= 9 && base[len] <= 13)
			|| base[len] == 32 || base[len] == '+' || base[len] == '-')
			return (0);
		chk[(int)base[len++]] = 1;
	}
	return (len);
}

int		trans_int(char c, char *base, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (c == base[i])
			return (i);
		++i;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int ret;
	int sign;
	int len;
	int idx;

	sign = 1;
	len = check_base(base);
	if (len <= 1)
		return (0);
	while (space(str))
		str++;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	ret = 0;
	while (*str)
	{
		idx = trans_int(*str, base, len);
		str++;
		if (idx == -1)
			break ;
		ret *= len;
		ret += idx;
	}
	return (sign * ret);
}
