/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 15:23:48 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/10 11:54:34 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_isalnum(void)
{
	printf("\n====== TEST ISALNUM ======\n\n");
	printf("0 => False, 1 => True\n");
	printf("Test for 'f': %d\n", ft_isalnum('f'));
	printf("Test for '0': %d\n", ft_isalnum('0'));
	printf("Test for 0: %d\n", ft_isalnum(0));
	printf("Test for 123: %d\n", ft_isalnum(123));
}
