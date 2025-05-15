/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 17:16:10 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/10 17:19:49 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>

static void print_mem(const void *ptr, size_t n)
{
	const unsigned char	*p = (const unsigned char *)ptr;
	size_t				i;
	printf("  First bytes: ");
	for (i = 0; i < n && i < 8; i++)
		printf("%02x ", p[i]);
	if (n > 8)
		printf("...");
	printf("\n");
}

static void run_calloc_case(size_t nmemb, size_t size)
{
	void	*std_ptr;
	void	*ft_ptr;
	int		same = 1;
	size_t	total = nmemb * size;

	printf("calloc(%zu, %zu):\n", nmemb, size);
	std_ptr = calloc(nmemb, size);
	ft_ptr = ft_calloc(nmemb, size);
	printf("  calloc:   %p\n", std_ptr);
	printf("  ft_calloc:%p\n", ft_ptr);

	if ((std_ptr == NULL && ft_ptr != NULL) ||
		(std_ptr != NULL && ft_ptr == NULL))
		same = 0;

	if (std_ptr && ft_ptr && total > 0)
	{
		if (memcmp(std_ptr, ft_ptr, total) != 0)
			same = 0;
		// Check zero-initialization
		size_t i;
		for (i = 0; i < total; i++)
			if (((unsigned char *)ft_ptr)[i] != 0)
				same = 0;
}

if (ft_ptr && total > 0)
	print_mem(ft_ptr, total);

printf("  %s\n\n", same ? "✅ PASS" : "❌ FAIL");

free(std_ptr);
free(ft_ptr);
}

void test_calloc(void)
{
	printf("\n====== CALLOC TESTS ======\n\n");

	// Typical cases
	run_calloc_case(10, sizeof(int));
	run_calloc_case(5, 4);
	run_calloc_case(1, 1);

	// Zero nmemb or size
	run_calloc_case(0, 10);
	run_calloc_case(10, 0);
	run_calloc_case(0, 0);

	// Large allocation (may fail, but should match standard)
	run_calloc_case(1000000, 1000);

	// Edge/overflow cases (should return NULL)
	run_calloc_case(SIZE_MAX, 2);
	run_calloc_case(2, SIZE_MAX);
	run_calloc_case(SIZE_MAX, SIZE_MAX);
	run_calloc_case(SIZE_MAX / 2 + 1, 2);

	// Near-overflow, but not overflowing (may or may not succeed)
	run_calloc_case(5468, SIZE_MAX / 458);
	run_calloc_case(SIZE_MAX / 4865, SIZE_MAX / 54);

	// Smallest nonzero allocation
	run_calloc_case(1, 1);
}
