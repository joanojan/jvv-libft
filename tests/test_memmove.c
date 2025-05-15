/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:35:06 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/10 11:52:34 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	test_memmove(void)
{
	char	src[20] = "0123456789--------";
	char	dest[20] = "__________xxxxxxxxxx";
	
	printf("\n====== TEST MEMMOVE ======\n\n");
	printf("Initial src[20]: %s and dest[20]: %s\n", src, dest);
	// dest and src do not overlap
	ft_memmove(dest, src, 12);
	printf("1. I move 12 char to src to dst, no overlap here:\n\tsrc: %s$, dst: %s$\n", src, dest);
	// will take dest as src + 3, 
	ft_memmove(src + 3, src, 7);
	printf("2. Moving 7 chars to &(src + 3), the &src:\n\tsrc: %s$, src + 3: %s$\n", src, src + 3);
	ft_memmove(src, src + 3, 7);
	printf("3. Finally moving 7 chars to &src, &(src + 3):\n\tsrc + 3: %s$, src: %s$\n", src + 3, src);
}
