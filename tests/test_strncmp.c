/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 12:25:02 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/10 15:41:39 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void print_strncmp_result(const char *s1, const char *s2, size_t n) {
    int std_result = strncmp(s1, s2, n);
    int ft_result = ft_strncmp(s1, s2, n);

    printf("Comparing:\n");
    printf("  s1: \"%s\"\n", s1);
    printf("  s2: \"%s\"\n", s2);
    printf("  n : %zu\n", n);
    printf("  strncmp:    %d\n", std_result);
    printf("  ft_strncmp: %d\n", ft_result);

    if (ft_result == std_result)
        printf("  ✅ Results match\n\n");
    else
        printf("  ❌ Results differ\n\n");
}

void	test_strncmp(void)
{
    printf("\n====== TEST ft_strncmp ======\n\n");

    // Test 1: Identical strings, n < length
    print_strncmp_result("hello", "hello", 3);

    // Test 2: Identical strings, n > length
    print_strncmp_result("hello", "hello", 10);

    // Test 3: s1 < s2 (lex order), n=5
    print_strncmp_result("apple", "banana", 5);

    // Test 4: s1 > s2 (lex order), n=6
    print_strncmp_result("orange", "grape", 6);

    // Test 5: Different lengths, same prefix, n=3
    print_strncmp_result("hello", "hell", 3);

    // Test 6: Different lengths, n=5 (beyond shorter string)
    print_strncmp_result("hello", "hell", 5);

    // Test 7: n=0 (must return 0)
    print_strncmp_result("abc", "def", 0);

    // Test 8: Empty string vs non-empty, n=1
    print_strncmp_result("", "non-empty", 1);

    // Test 9: Non-empty vs empty, n=1
    print_strncmp_result("non-empty", "", 1);

    // Test 10: Special characters
    print_strncmp_result("hello!", "hello?", 6);

    // Test 11: Numbers in strings
    print_strncmp_result("123", "1234", 3);

    // Test 12: Case sensitivity
    print_strncmp_result("Hello", "hello", 5);

    // Test 13: Unicode/extended ASCII
    print_strncmp_result("\xff", "\x00", 1);
}
