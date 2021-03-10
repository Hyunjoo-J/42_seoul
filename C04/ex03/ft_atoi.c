/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 16:13:51 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/10 15:17:17 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	space(char *str)
{
	if (*str == 32)
		return (1);
	else if (*str >= 9 && *str <= 13)
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
	if (minus % 2)
		num *= -1;
	return (num);
}
