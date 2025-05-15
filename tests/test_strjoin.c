/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:23:18 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/13 11:37:49 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_strjoin(void)
{
	char	*strj;

	printf("\n====== TEST STRJOIN ======\n\n");
	// Test 1. "a" + "b"
	strj = ft_strjoin("a", "b");
	printf("Test 1. strj = ft_strjoin(\"a\", \"b\")\n");
	printf("result: %s$\n", strj);
	free(strj);
	// Test 2. "" + "abc"
	strj = ft_strjoin("", "abc");
	printf("Test 2. strj = ft_strjoin(\"\", \"abc\")\n");
	printf("result: %s$\n", strj);
	free(strj);
	// Test 3. "abc" + ""
	strj = ft_strjoin("abc", "");
	printf("Test 3. strj = ft_strjoin(\"abc\", \"\")\n");
	printf("result: %s$\n", strj);
	free(strj);
	// Test 4. "" + ""
	strj = ft_strjoin("", "");
	printf("Test 4. strj = ft_strjoin(\"\", \"\")\n");
	printf("result: %s$\n", strj);
	free(strj);
	// Test 5. NULL + "abc"
	strj = ft_strjoin(NULL, "abc");
	printf("Test 5. strj = ft_strjoin(NULL, \"abc\")\n");
	printf("result: %s$\n", strj ? strj : "(null)");
	free(strj);
	// Test 6. "abc" + NULL
	strj = ft_strjoin("abc", NULL);
	printf("Test 6. strj = ft_strjoin(\"abc\", NULL)\n");
	printf("result: %s$\n", strj ? strj : "(null)");
	free(strj);
	// Test 7. NULL + NULL
	strj = ft_strjoin(NULL, NULL);
	printf("Test 7. strj = ft_strjoin(NULL, NULL)\n");
	printf("result: %s$\n", strj ? strj : "(null)");
	free(strj);
	// Test 8. Longer strings
	strj = ft_strjoin("Hello, ", "world!");
	printf("Test 8. strj = ft_strjoin(\"Hello, \", \"world!\")\n");
	printf("result: %s$\n", strj);
	free(strj);
}
