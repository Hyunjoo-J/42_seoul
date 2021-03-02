/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 00:19:04 by hyjeong           #+#    #+#             */
/*   Updated: 2021/02/23 00:40:34 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	increase(int n, int *arr)
{
	int i;
	int max;

	i = n - 1;
	max = 9;
	while (arr[i] == max)
	{
		i -= 1;
		max -= 1;
	}
	arr[i] += 1;
	while (i < n)
	{
		arr[i + 1] = arr[i] + 1;
		i += 1;
	}
}

void	print(int n, int *arr, int fin)
{
	int i;

	if (fin == 1)
		write(1, ", ", 2);
	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
}

void	ft_print_combn(int n)
{
	int arr[10];
	int i;

	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	print(n, arr, 0);
	while (arr[0] != 10 - n || arr[n - 1] != 9)
	{
		if (arr[n - 1] != 9)
			arr[n - 1]++;
		else
			increase(n, arr);
		print(n, arr, 1);
	}
}
