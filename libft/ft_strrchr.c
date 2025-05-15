/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:10:49 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/08 16:53:58 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_clone;
	int		len;

	s_clone = (char *)s;
	len = (int)ft_strlen(s);
	while (len >= 0)
	{
		if (s_clone[len] == c)
			return (&s_clone[len]);
		len--;
	}
	return (NULL);
}
