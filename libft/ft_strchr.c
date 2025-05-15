/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:04:32 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/10 14:17:37 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  strchr() function returns a pointer to the first occurrence of the
       character c in the string s. */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*s_clone;

	s_clone = s;
	while (*s_clone)
	{
		if (*s_clone == (char)c)
			return ((char *)s_clone);
		s_clone++;
	}
	if (*s_clone == c)
		return ((char *)s_clone);
	return (NULL);
}
