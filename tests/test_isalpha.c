/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:38:02 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/10 11:55:10 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_isalpha(void)
{
	printf("\n====== TEST ISALPHA ======\n\n");
	printf("1 => is alpha, 0 => is not alpha\n");
	printf("Test for 'a'-> %d\n", ft_isalpha('a'));
	printf("Test for 22	-> %d\n", ft_isalpha(22));
	printf("Test for 'Z'-> %d\n", ft_isalpha('Z'));
	printf("Test for  9	-> %d\n", ft_isalpha(9));
}
