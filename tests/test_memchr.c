/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 16:07:22 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/10 16:19:17 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	memchr_test(const void *buf, int c, size_t n)
{
	void	*result = ft_memchr(buf, c, n);
	void	*expected = memchr(buf, c, n);

	printf("Buffer: \"");
	const unsigned char	*ubuf = (const unsigned char *)buf;
	for (size_t i = 0; i < n; i++)
	{
		if (ubuf[i] >= 32 && ubuf[i] <= 126)
			printf("%c", ubuf[i]);
		else
			printf("\\x%02x", ubuf[i]);
	}
	printf("\"\n");
	printf("Search: 0x%02x (ASCII %d), n: %zu\n", (unsigned char)c, (unsigned char)c, n);
	printf("Result:   %p\n", result);
	printf("Expected: %p\n", expected);
	printf("%s\n\n", (result == expected) ? "✅ PASS" : "❌ FAIL");
}

void	test_memchr(void)
{
	const char buf1[] = "abcdef";
	const char buf2[] = "abc\0def";
	const char buf3[] = "";
	const unsigned char buf4[] = {0x00, 0x01, 0x02, 0xFF, 0x10};
	const char buf5[] = "banana";

	printf("\n====== MEMCHR TESTS ======\n\n");
	memchr_test(buf1, 'c', 6);
	memchr_test(buf1, 'z', 6);
	memchr_test(buf2, '\0', 7);
	memchr_test(buf3, 'a', 0);
	memchr_test(buf4, 0xFF, 5);
	memchr_test(buf5, 'a', 6);
	memchr_test(buf5, 'a', 2);
	memchr_test(buf5, 'n', 4);
	memchr_test(buf4, 0x10, 4);
	memchr_test(buf4, 0x10, 5);
}

