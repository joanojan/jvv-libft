/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:22:18 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/10 11:50:45 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_bzero(void)
{
	char	*s;

	printf("\n====== TEST BZERO ======\ni\n");

	s = malloc(sizeof(char) * 5);
	if (!s)
	{
		printf("Allocation error\n");
		return ;
	}
	ft_bzero((void *)s, 5);
	for(int i = 0; i < 5; i++)
		printf("%d", s[i]);
	printf("\nShould be 5 zeros ...\n");
	free(s);
}
