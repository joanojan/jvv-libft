/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:23:40 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/15 14:14:21 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	add1_if_odd(unsigned int i, char *c)
{
	if (i % 2)
		(*c)++;
}

/* Replace for null */

static void	null_check(unsigned int i, char *c)
{
	// Explicitly ignoring i and c
    (void)i;
    *c = '\0';
}

void	test_striteri(void)
{
	char	*result;
	int		i = 0;

	printf("\n====== TEST STRITERI ======\n\n");
	// Test 1. "0123456.,", add 1 if i % 2
	result = ft_strdup("0123456.,");
	ft_striteri(result, (void *) add1_if_odd);
	printf("Test 1: ft_striteri(\"0123456.,\", add1_if_odd) =%s$\n", result);
	free(result);
	// Test 2. Empty string
	result = ft_strdup("");
	ft_striteri(result, add1_if_odd);
	printf("Test 2: ft_striteri(\"\") =%s$\n", result);
	// Test 3: NULL input string
    ft_striteri(NULL, add1_if_odd);
    printf("Test 3: ft_striteri(NULL, add1_if_odd) did not crash.\n");
	// Test 4: Null function pointer
	result = ft_strdup("test");
	ft_striteri(result, NULL);
	printf("Test 4: ft_striteri(\"test\", NULL) =%s$\n", result);
	free(result);
    // Test 5: All characters to null
    result = ft_strdup("abcd");
    ft_striteri(result, (void *) null_check);
    printf("Test 5: ft_striteri(\"abcd\", null_check) =");
    while (i < 5)  // Check 0-4 indexes (including terminator)
    {
        printf("%d ", result[i]);
        i++;
    }
    printf("$\n");
    free(result);	
}
