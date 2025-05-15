/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 15:40:10 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/10 11:49:14 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_isprint(void)
{
	printf("\n====== TEST ISPRINT ======\n\n");
	printf("0 => False, 1 => True\n");
	printf("Test for 31: %d\n", ft_isprint(31));
	printf("Test for 127: %d\n", ft_isprint(127));
	printf("Test for 32: %d\n", ft_isprint(32));
	printf("Test for 126: %d\n", ft_isprint(126));
}
