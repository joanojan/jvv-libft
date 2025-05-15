/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:56:50 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/14 14:23:52 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_arr(char **arr)
{
	char	**tmp;

	tmp = arr;
	while (*arr)
		free(*arr++);
	free(tmp);
}

static size_t	wc(char const *s, char c)
{
	size_t	count;
	int		in_w;

	if (!s)
		return (0);
	in_w = 0;
	count = 0;
	while (*s)
	{
		if (*s == c && in_w)
		{
			count++;
			in_w = 0;
		}
		else if (*s != c)
			in_w = 1;
		s++;
	}
	if (in_w)
		count++;
	return (count);
}

size_t	w_len(char *start, char c)
{
	size_t	len;

	len = 0;
	while (*start != c && *start)
	{
		start++;
		len++;
	}
	return (len);
}

/* Add the word into the array.
	Returns a pointer to the next start */

char	*add_word(char **arr, char *start, char c, size_t i)
{
	size_t	len;

	len = w_len(start, c);
	arr[i] = malloc(len + 1);
	if (!arr[i])
		return (NULL);
	ft_memcpy(arr[i], start, len);
	arr[i][len] = '\0';
	return (start + len);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*start;
	size_t	i;

	arr = malloc(sizeof(char *) * (wc(s, c) + 1));
	if (!arr || !s)
		return (NULL);
	start = (char *)s;
	i = 0;
	while (i < wc(s, c))
	{
		while (*start == c && *start)
			start++;
		if (!*start)
			break ;
		start = add_word(arr, start, c, i);
		if (!start)
		{
			free_arr(arr);
			return (NULL);
		}
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
