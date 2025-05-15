/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 16:25:36 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/10 16:37:43 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	run_memcmp_case(const void *s1, const void *s2, size_t n)
{
	int	res;
	int	exp;
	size_t	 i;
	const unsigned char	*us1;
	const unsigned char	*us2;

	res = ft_memcmp(s1, s2, n);
	exp = memcmp(s1, s2, n);
	us1 = (const unsigned char *)s1;
	us2 = (const unsigned char *)s2;
	printf("s1: \"");
	i = 0;
	while (i < n)
	{
		if (us1[i] >= 32 && us1[i] <= 126)
			printf("%c", us1[i]);
		else
			printf("\\x%02x", us1[i]);
		i++;
	}
	printf("\"\n");
	printf("s2: \"");
	i = 0;
	while (i < n)
	{
		if (us2[i] >= 32 && us2[i] <= 126)
			printf("%c", us2[i]);
		else
			printf("\\x%02x", us2[i]);
		i++;
	}
	printf("\"\n");
	printf("n: %zu\n", n);
	printf("ft_memcmp: %d\n", res);
	printf("memcmp:    %d\n", exp);
	if (res == exp)
		printf("✅ PASS\n\n");
	else
		printf("❌ FAIL\n\n");
}

void test_memcmp(void)
{
	const char	buf1[] = "abcdef";
	const char	buf2[] = "abcdeg";
	const char	buf3[] = "abcdef";
	const char	buf4[] = "abc\0ef";
	const char	buf5[] = "";
	const unsigned char buf6[] = {0x00, 0x01, 0x02, 0xFF, 0x10};
	const unsigned char buf7[] = {0x00, 0x01, 0x02, 0xFE, 0x10};

	printf("\n====== MEMCMP TESTS ======\n\n");
	run_memcmp_case(buf1, buf3, 6);
	run_memcmp_case(buf1, buf2, 6);
	run_memcmp_case(buf1, buf2, 3);
	run_memcmp_case(buf1, buf4, 6);
	run_memcmp_case(buf5, buf5, 0);
	run_memcmp_case(buf1, buf2, 0);
	run_memcmp_case(buf6, buf7, 5);
	run_memcmp_case(buf6, buf7, 3);
	run_memcmp_case("xabcdef", "abcdefg", 7);
	run_memcmp_case("abcdefx", "abcdefg", 7);
}

