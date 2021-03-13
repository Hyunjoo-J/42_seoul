/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:59:34 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/13 16:04:12 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

void	ft_putchar(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int idx;
	int rep;
	char *temp;

	idx = 0;
	rep = 0;
	while (++rep < argc)
	{
		idx = 1;
		while (++idx < argc)
		{
			if (ft_strcmp(argv[idx - 1], argv[idx]) > 0)
			{
				temp = argv[idx - 1];
				argv[idx - 1] = argv[idx];
				argv[idx] = temp;
			}
		}
	}
	idx = 0;
	while (++idx < argc)
		ft_putchar(argv[idx]);
	return (0);
}
