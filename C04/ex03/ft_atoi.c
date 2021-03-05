/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 16:13:51 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/05 18:25:13 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	space(char *str)
{
	if (*str == ' ' || *str == '\f' || *str == '\n')
		return (1);
	else if (*str == '\r' || *str == '\t' || *str == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int minus;
	int num;

	minus = 0;
	num = 0;
	while (space(str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus++;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *str - '0';
		str++;
	}
	if (minus == 1)
		num *= -1;
	return (num);
}
