/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:57:01 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/08 16:57:00 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_clone;

	if (n == 0)
		return (NULL);
	i = 0;
	s_clone = (unsigned char *)s;
	while (i < n)
	{
		if (c == s_clone[i])
			return (&s_clone[i]);
		i++;
	}
	return (NULL);
}
