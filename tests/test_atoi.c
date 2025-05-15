/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 17:16:19 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/13 10:59:58 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	test_atoi(void)
{
	char	*tests[] = {
		"1234", "-5678", "+42", "0038", "003800", "   789", "\t\n  -321",
		"12abc34", "abc123", "  -abc", "", "+", "-", "999999999999999999999",
		"0", "   +0", "   -0", "++1"
	};
	int		n = sizeof(tests) / sizeof(tests[0]);
	printf("\n====== TEST ATOI ======\n\n");
	for (int i = 0; i < n; i++) {
		printf("ATOI	:: Input: \"%s\"  Output: %d\n", tests[i], atoi(tests[i]));
		printf("FT_ATOI	:: Input: \"%s\"  Output: %d\n", tests[i], ft_atoi(tests[i]));
	}
}
