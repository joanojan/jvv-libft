/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:49:16 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/13 15:00:23 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\f' || c == '\r' || c == '\v');
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' )
	{
		sign = -1;
		nptr++;
	}
	if (*nptr == '+')
		nptr++;
	result = 0;
	while (ft_isdigit(*nptr))
	{
		if (result < 0)
			return (-1);
		result = result * 10 + (*nptr++ - '0');
	}
	return (result * sign);
}
