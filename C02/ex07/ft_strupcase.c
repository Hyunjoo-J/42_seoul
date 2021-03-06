/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:52:37 by hyjeong           #+#    #+#             */
/*   Updated: 2021/02/25 16:25:36 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char *copy;

	copy = str;
	while (*copy != 0)
	{
		if (*copy >= 'a' && *copy <= 'z')
			*copy = *copy - 'a' + 'A';
		copy++;
	}
	return (str);
}
