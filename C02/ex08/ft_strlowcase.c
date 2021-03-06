/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:09:16 by hyjeong           #+#    #+#             */
/*   Updated: 2021/02/25 16:24:29 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *copy;

	copy = str;
	while (*copy != 0)
	{
		if (*copy >= 'A' && *copy <= 'Z')
			*copy = *copy + 'a' - 'A';
		copy++;
	}
	return (str);
}
