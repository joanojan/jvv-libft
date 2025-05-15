/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 15:31:02 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/10 11:53:34 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_isascii(void)
{
	printf("\n====== TEST ISASCII ======\n\n");
	printf("0 => False, 1 => True\n");
	printf("Test for 'f': %d\n", ft_isascii('f'));
	printf("Test for 991: %d\n", ft_isascii(991));
	printf("Test for -1: %d\n", ft_isascii(-1));
	printf("Test for 1: %d\n", ft_isascii(1));
	printf("Test for 0: %d\n", ft_isascii(0));
	printf("Test for 127: %d\n", ft_isascii(127));
	printf("Test for 128: %d\n", ft_isascii(128));
}
