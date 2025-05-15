/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 15:11:50 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/10 11:54:56 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_isdigit(void)
{
	printf("\n====== TEST ISDIGIT ======\n\n");
	printf("0 => False, 1 => True\n");
	printf("Test for 'f': %d\n", ft_isdigit('f'));
	printf("Test for '2': %d\n", ft_isdigit('2'));
	printf("Test for 2: %d\n", ft_isdigit(2));
}
