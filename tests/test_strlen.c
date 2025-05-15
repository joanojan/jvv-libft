/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 15:51:08 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/10 11:54:05 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_strlen(void)
{
	printf("\n====== TEST STRLEN ======\n\n");
	printf("result for empty string: %zu\n", ft_strlen(""));
	printf("result for one char string: %zu\n", ft_strlen("1"));
	printf("result for three char string: %zu\n", ft_strlen("123"));
}
