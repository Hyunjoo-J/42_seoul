/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 03:44:09 by shpark            #+#    #+#             */
/*   Updated: 2020/01/30 08:41:14 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_ft.c"

int     main(void)
{
    int a;

    a = 1;
    printf("before: %d\n", a);
    ft_ft(&a);
    printf("after : %d\n", a);
}