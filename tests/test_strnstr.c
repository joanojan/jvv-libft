/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:01:51 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/10 16:54:16 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_strnstr(void)
{
	const char	*largestring = "Foo Bar Baz";
    const char	*smallstring = "Bar";
    char		*ptr;

	printf("\n====== TEST STRNSTR ======\n\n");
	printf("largestring: %s, smallstring: %s\n", largestring, smallstring);
	ptr = ft_strnstr(largestring, smallstring, 12);
	printf("1.ft_strnstr(largestring, smallstring, 12)"
		" ptr should point to Bar: ptr = %s\n", ptr);
	ptr = ft_strnstr(largestring,	smallstring, 4);
	printf("2.ft_strnstr(largestring,   smallstring, 4)i"
		" ptr should be null: ptr = %s\n", ptr);
	ptr = ft_strnstr("Foo Bar Baz",	"oo", 4);
	printf("3.ft_strnstr(\"Foo Bar Baz\", \"oo\", 4)i"
		" ptr should point oo: ptr = %s\n", ptr);
	ptr = ft_strnstr("Foo Bar Baz",	"Ba", 20);
	printf("4.ft_strnstr(\"Foo Bar Baz\", \"Ba\", 20)"
		" ptr should be the first Ba: ptr = %s\n", ptr);
}
