/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 17:39:07 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/10 17:46:03 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

void test_strdup_case(const char *input)
{
	char *std_result = strdup(input);
	char *ft_result = ft_strdup(input);
	int same = 1;

	printf("Input: \"%s\"\n", input);
	printf("  strdup:   %p -> \"%s\"\n", std_result, std_result);
	printf("  ft_strdup:%p -> \"%s\"\n", ft_result, ft_result);

	if ((!std_result && ft_result) || (std_result && !ft_result))
		same = 0;
	else if (std_result && ft_result && strcmp(std_result, ft_result) != 0)
		same = 0;

	printf("  %s\n\n", same ? "✅ PASS" : "❌ FAIL");

	free(std_result);
	free(ft_result);
}

void test_strdup(void)
{
	printf("\n====== STRDUP TESTS ======\n\n");
	test_strdup_case("Hello, world!");
	test_strdup_case("");       // Empty string
	test_strdup_case("12345");  // Numbers
	test_strdup_case("a");      // Single character
	test_strdup_case("test\0hidden"); // Embedded null
	// test_strdup_case(NULL);  // Undefined in standard (may crash)
}
