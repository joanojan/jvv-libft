/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 09:18:13 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/12 11:39:10 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (NULL);
	subs = malloc(len + 1);
	if (!subs)
		return (NULL);
	i = 0;
	while (start < s_len && i < len)
		subs[i++] = s[start++];
	subs[i] = '\0';
	return (subs);
}
