/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 11:08:58 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/13 10:26:46 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void    test_strlcpy(void)
{
	size_t	src_len;
	char	s[10];
	char	*src;

	printf("\n====== TEST STRLCPY ======\n\n");

	// 1. Copy up to 2 chars of the string literal
	src = "Foo";
	src_len = ft_strlcpy(s, src, 2);
	printf("1. copy up to 2 chars of the string literal\n"
		"\tsrc: %s$, the copy: %s$\n\tValue returned by strlcpy: %zu\n", src,  s, src_len);

	// 2. Copy zero char of the string literal
	src_len = ft_strlcpy(s, src, 0);
	printf("2. copy zero char of the string literal\n"
		"\tsrc: %s$, the copy: %s$\n\tValue returned by strlcpy: %zu\n", src,  s, src_len);

	// 3. Copy the four bytes of the same literal
	src_len = ft_strlcpy(s, src, 4);
	printf("3. copy the four bytes of the same literal\n"
		"\tsrc: %s$, the copy: %s$\n\tValue returned by strlcpy: %zu\n", src,  s, src_len);

	// 4. Copy with size larger than src length
	src_len = ft_strlcpy(s, src, 10);
	printf("4. copy with size larger than src length\n"
		"\tsrc: %s$, the copy: %s$\n\tValue returned by strlcpy: %zu\n", src,  s, src_len);

	// 5. Copy an empty string
	src = "";
	src_len = ft_strlcpy(s, src, 5);
	printf("5. copy an empty string\n"
		"\tsrc: \"%s\", the copy: \"%s\"\n\tValue returned by strlcpy: %zu\n", src,  s, src_len);

	// 6. Copy to a buffer of size 1 (should only null-terminate)
	src = "Hello";
	src_len = ft_strlcpy(s, src, 1);
	printf("6. copy to a buffer of size 1\n"
		"\tsrc: %s$, the copy: %s$\n\tValue returned by strlcpy: %zu\n", src,  s, src_len);

	// 7. Copy a string with special characters
	src = "1\n3\t6";
	src_len = ft_strlcpy(s, src, 5);
	printf("7. copy a string with special characters\n"
		"\tsrc: %s$, the copy: %s$\n\tValue returned by strlcpy: %zu\n", src,  s, src_len);

	printf("\n------ end ------\n");
}
