/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 09:12:56 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/15 09:16:42 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test_itoa(void)
{
    struct TestCase
	{
        int			input;
        const char	*expected;
    };
    
    struct TestCase tests[] = {
        {0, "0"},
        {1234, "1234"},
        {-1234, "-1234"},
        {INT_MAX, "2147483647"},
        {INT_MIN, "-2147483648"},
        {1, "1"},
        {-5, "-5"},
        {100, "100"},
        {-1000, "-1000"},
        {9, "9"},
        {-9, "-9"}
    };

    printf("\n=== Testing ft_itoa ===\n");
    for (size_t i = 0; i < sizeof(tests)/sizeof(tests[0]); i++)
    {
        char *result = ft_itoa(tests[i].input);
        int status = result ? strcmp(result, tests[i].expected) : 1;
        
        printf("Test %zu: %d\n", i + 1, tests[i].input);
        printf("Expected: \"%s\"\n", tests[i].expected);
        printf("Received: \"%s\"\n", result ? result : "(null)");
        printf("Status:   %s\n\n", status ? "FAIL" : "PASS");
        
        free(result);
    }
}
