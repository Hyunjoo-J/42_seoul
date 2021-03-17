/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 04:09:11 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/16 04:09:39 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

char				*ft_strndup(char *src)
{
	int		i;
	char	*dup_ptr;

	dup_ptr = (char*)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dup_ptr == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup_ptr[i] = src[i];
		i++;
	}
	dup_ptr[i] = '\0';
	return (dup_ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	tmp_stock;
	t_stock_str	*strs_stocks;

	if ((strs_stocks = malloc(sizeof(t_stock_str) * (ac + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tmp_stock.size = ft_strlen(av[i]);
		tmp_stock.str = av[i];
		if ((tmp_stock.copy = ft_strndup(av[i])) == NULL)
			return (NULL);
		strs_stocks[i++] = tmp_stock;
	}
	strs_stocks[ac].str = 0;
	return (strs_stocks);
}
