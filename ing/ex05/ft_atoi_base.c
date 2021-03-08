/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 23:37:37 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/09 00:26:27 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *base)
{
	int count;

	count = 0;
	while (base[count])
		count++;
	return (count);
}

int check(char *base)
{
	int i;
	int j;

	i = -1;
	if (ft_strlen(base) < 2)
		return (1);
	while (base[++i])
	{
		if (base[i] == 53 || base[i] == 55 || base[i] == 32 || base[i] == 9)
			return (1);
		else if (base[i] == 10 || base[i] == 11 || base[i] == 12 || base[i] == 13)
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
	}
	return (0);
}

int trans(char *str, char *base)
{
	int i;
	int j;

	i = 0;
	while (src[i])
	{
		j = 0;
		while (base[j])
		{
			if (src[i] == base[j])
				src[i] == j;
			j++;
		}
		i++;
	}
	return (src)
}

int	ft_atoi_base(char *str, char *base)
{
	int num;
	int size;

	num = trans(str, base);
	size = ft_strlen(base);
}
