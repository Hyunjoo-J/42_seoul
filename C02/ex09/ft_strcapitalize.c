/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:29:52 by hyjeong           #+#    #+#             */
/*   Updated: 2021/02/25 16:23:21 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		return (0);
	else if (*str >= 'A' && *str <= 'Z')
		return (1);
	else if (*str >= '0' && *str <= '9')
		return (2);
	else
		return (3);
}

char	*ft_strcapitalize(char *str)
{
	char *copy;

	copy = str;
	if (*str >= 'a' && *str <= 'z')
		*str = *str - 'a' + 'A';
	copy++;
	while (*copy != 0)
	{
		if (check(copy - 1) == 3)
		{
			if (check(copy) == 0)
				*copy = *copy - 'a' + 'A';
		}
		else if (check(copy - 1) != 3)
		{
			if (check(copy) == 1)
				*copy = *copy - 'A' + 'a';
		}
		copy++;
	}
	return (str);
}
