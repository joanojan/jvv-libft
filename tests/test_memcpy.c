/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:10:15 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/10 11:52:54 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_memcpy(void)
{
	char	*s;
	char	*scpy;
	size_t	len;

	printf("\n====== TEST MEMCPY ======\n\n");
	// test literal string and full length
	s = "foo";
	len = ft_strlen(s);
	scpy = malloc(len);
	if (!scpy)
	{
		printf("Allocation error\n");
		return ;
	}
	scpy = ft_memcpy((void *)scpy, s, len);
	printf("1. Copy the literal string up to strlen src, %s$, dest => %s$\n", s, scpy);
	free(scpy);
	// test literal string passing length - 3
	s = "foo bar baz";
	len = ft_strlen(s);
	scpy = malloc(len);
	if (!scpy)
	{
		printf("Allocation error\n");
		return ;
	}
	scpy = ft_memcpy((void *)scpy, s, len - 3);
	printf("2. Copy the literal string src minus 3, %s$, dest => %s$\n", s, scpy);
	free(scpy);
	// test literal string passing length + 3
	s = "foo bar baz";
	len = ft_strlen(s);
	scpy = malloc(len);
	if (!scpy)
	{
		printf("Allocation error\n");
		return ;
	}
	scpy = ft_memcpy((void *)scpy, s, len + 3);
	printf("3. Copy the literal string src plus 3, %s$, dest => %s$\n", s, scpy);
	free(scpy);
	// test a memory allocated string of length 3, copy with full length
	s = malloc(sizeof(char) * 4);
	if (!s)
	{
		printf("Allocation error\n");
		return ;
	}
	scpy = malloc(sizeof(char) * 4);
	if (!scpy)
	{
		printf("Allocation error\n");
		return ;
	}
	s[0] = 'f'; s[1] = 'o'; s[2] = 'o'; s[3] = '\0';
	scpy = ft_memcpy((void *)scpy, s, len);
	printf("4. Copy up to strlen + 1, the allocated string src, %s$, dest => %s$\n", s, scpy);
	free(scpy);
	free(s);
}
