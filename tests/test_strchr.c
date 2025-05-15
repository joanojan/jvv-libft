/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 13:13:19 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/10 14:57:33 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_strchr(void)
{
	char	*ptr;
	char	*str;

	printf("\n====== TEST STRCHR ======\n\n");
    /* Test 1: Find '!' in "Hi!" (valid character) */
    str = "Hi!";
    printf("Test 1: Find '!' in \"%s\"\n", str);
    ptr = ft_strchr(str, '!');
    printf("  - String address: %p\n", (void *)str);
    printf("  - Returned address: %p\n", (void *)ptr);
    printf("  - Expected: %p (address of '!')\n", (void *)(str + 2));
    printf("  - %s\n\n", (ptr == str + 2) ? "✅ Correct position" : "❌ Wrong position");
	/* Test 2: Find 'z' in "Hi!" (not found) */
    printf("Test 2: Find 'z' in \"%s\"\n", str);
    ptr = ft_strchr(str, 'z');
    printf("  - Returned address: %p\n", (void *)ptr);
    printf("  - Expected: %p (NULL)\n", (void *)NULL);
    printf("  - %s\n\n", (ptr == NULL) ? "✅ Correct (not found)" : "❌ Incorrect (found)");
    /* Test 3: Find null terminator in "Hello" */
    str = "Hello";
    printf("Test 3: Find '\\0' in \"%s\"\n", str);
    ptr = ft_strchr(str, '\0');
    printf("  - String length: %zu\n", ft_strlen(str));
    printf("  - Returned address: %p\n", (void *)ptr);
    printf("  - Expected: %p (end of string)\n", (void *)(str + 5));
    printf("  - %s\n\n", (ptr == str + 5) ? "✅ Correct terminator" : "❌ Wrong terminator");
    /* Test 4: Search empty string */
    str = "";
    printf("Test 4: Find 'a' in empty string\n");
    ptr = ft_strchr(str, 'a');
    printf("  - Returned address: %p\n", (void *)ptr);
    printf("  - Expected: %p (NULL)\n", (void *)NULL);
    printf("  - %s\n\n", (ptr == NULL) ? "✅ Correct (empty)" : "❌ Incorrect");
    /* Test 5: First occurrence check */
    str = "banana";
    printf("Test 5: First 'a' in \"%s\"\n", str);
    ptr = ft_strchr(str, 'a');
    printf("  - Returned address: %p\n", (void *)ptr);
    printf("  - Expected: %p (position 1)\n", (void *)(str + 1));
    printf("  - %s\n\n", (ptr == str + 1) ? "✅ First occurrence" : "❌ Wrong position");
}
