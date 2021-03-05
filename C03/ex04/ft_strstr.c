/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:35:24 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/04 01:20:02 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *s;
	char *f;

	if (*to_find == 0)
		return (str);
	while (*str != 0)
	{
		s = str;
		f = to_find;
		while (*f != 0 && *s == *f)
		{
			s++;
			f++;
		}
		if (*f == 0)
			return (str);
		str++;
	}
	return (0);
}
