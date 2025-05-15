/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:00:57 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/10 11:56:04 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

void	test_memset(void)
{
	char	*s;

	printf("\n====== TEST MEMSET ======\n\n");
	s = malloc(sizeof(char) * 5);
	if (!s)
	{
		printf("Allocation error\n");
		return ;
	}
	s = (char *)ft_memset((void *)s, 'a', 5);
	write(1, "malloc(5) + memset(s, 'a' , 5):", 32);
	write(1, s, 5);
	write(1, "$\n", 2);
	free(s);
}
