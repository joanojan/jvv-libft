/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:43:14 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/15 12:34:44 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	add1_if_odd(unsigned int i, char c)
{
	if (i % 2)
		c++;
	return (c);
}

/* Replace for null */

static char null_check(unsigned int i, char c)
{
	// Explicitly ignoring i and c
    (void)i;
    (void)c; 
    return '\0';
}

void	test_strmapi(void)
{
   	char    *result;
    char    *test_str;
    int     i;

	printf("\n====== TEST STRMAPI ======\n\n");
	// Test 1. "0123456.,", add 1 if i % 2
	result = ft_strmapi("0123456.,", add1_if_odd);
	printf("Test 1: ft_strmapi(\"0123456.,\", add1_if_odd) =%s$\n", result);
	free(result);
    /* Test 2: Empty string */
    test_str = "";
    result = ft_strmapi(test_str, add1_if_odd);
    printf("Test 2: ft_strmapi(\"\", add1_if_odd) =%s$\n", result);
    free(result);
    /* Test 3: NULL input string */
    result = ft_strmapi(NULL, add1_if_odd);
    printf("Test 3: ft_strmapi(NULL, add1_if_odd) =%s$\n", result);
    /* Test 4: NULL function pointer */
    test_str = "test";
    result = ft_strmapi(test_str, NULL);
    printf("Test 4: ft_strmapi(\"test\", NULL) =%s$\n", result);
    /* Test 5: Verify null termination */
    test_str = "abcd";
    result = ft_strmapi(test_str, null_check);
    i = 0;
    printf("Test 5: ft_strmapi(\"abcd\", null_check) bytes = ");
    while (i < 5)  // Check 0-4 indexes (including terminator)
    {
        printf("%d ", result[i]);
        i++;
    }
    printf("$\n");
    free(result);
    /* Test 6: Long string */
    test_str = "123456789";
    result = ft_strmapi(test_str, add1_if_odd);
    printf("Test 6: ft_strmapi(\"123456789\", add1_if_odd) =%s$\n", result);
    free(result);
}
