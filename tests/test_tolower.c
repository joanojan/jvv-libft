/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 13:07:57 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/10 13:11:39 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void    test_tolower(void)
{
    char    c;

    printf("\n====== TEST TOLOWER ======\n\n");
    c = ft_tolower('a');
    printf("ft_tolower('a'): %c$\n", c);
    c = ft_tolower('1');
    printf("ft_tolower('1'): %c$\n", c);
	c = ft_tolower('Z');
    printf("ft_tolower('Z'): %c$\n", c);
}
