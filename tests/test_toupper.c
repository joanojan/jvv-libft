/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 12:59:30 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/10 13:05:22 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_toupper(void)
{
	char	c;

	printf("\n====== TEST TOUPPER ======\n\n");
	c = ft_toupper('a');
	printf("ft_toupper('a'): %c$\n", c);
	c = ft_toupper('1');
	printf("ft_toupper('1'): %c$\n", c);
}
