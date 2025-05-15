/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:15:50 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/12 16:13:03 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_substr(void)
{
	char const	*s;
	char		*substr;

	printf("\n====== TEST SUBSTR ======\n\n");
	// Test 1. substing of empty string
	s = "";
	substr = ft_substr(s, 0, 2);
	printf("Test 1. substing of empty string, should return NULL\n");
	if (substr != NULL)
		printf("\tFailed test, did not return NULL.\n\n");
	else
		printf("\tOk, indeed, the result was NULL.\n\n");
	// Test 2. start = 0, len = strlen(s)
	s = "i. i..";
	substr = ft_substr(s, 0, ft_strlen(s));
	if (substr == NULL)
		printf("There was an error with malloc\n");
	printf("Test 2. start = 0, len >= strlen(s)\n");
	printf("\toriginal string:%s$, substring:%s$\n\n", s, substr);
	// Test 3. start = 0, len = strlen(s) + 1
	s = "i. i..";
	substr = ft_substr(s, 0, ft_strlen(s) + 1);
	if (substr == NULL)
		printf("There was an error with malloc\n");
	printf("Test 3. start = 0, len = strlen(s) + 1\n");
	printf("\toriginal string:%s$, substring:%s$\n\n", s, substr);
	// Test 4. start = 2, len = strlen(s) + 1
	s = "i._i..";
	substr = ft_substr(s, 2, ft_strlen(s) + 1);
	if (substr == NULL)
		printf("There was an error with malloc\n");
	printf("Test 4. start = 2, len = strlen(s) + 1\n");
	printf("\toriginal string:%s$, substring:%s$\n\n", s, substr);  
	// Test 5. start = 2, len = 2
	s = "i._i..";
	substr = ft_substr(s, 2, 2);
	if (substr == NULL)
		printf("There was an error with malloc\n");
	printf("Test 5. start = 2, len = 2\n");
	printf("\toriginal string:%s$, substring:%s$\n\n", s, substr);
	// Test 6. start = strlen(s) - 1 len = 2
	s = "i._i..";
	substr = ft_substr(s, ft_strlen(s) - 1, 2);
	if (substr == NULL)
		printf("There was an error with malloc\n");
	printf("Test 6. start = strlen(s) - 1, len = 2\n");
	printf("\toriginal string:%s$, substring:%s$\n\n", s, substr);
	// Test 7. start = 0, len = 0
	s = "i._i..";
	substr = ft_substr(s, 0, 0);
	printf("Test 7. start = 0, len = 0\n");
	printf("\toriginal string:%s$, substring:%s$\n\n", s, substr);
	if (substr == NULL)
		printf("\tTest 7. Ok! NULL was expected!");
	// Test 8. NULL input 
	s = NULL;
	substr = ft_substr(s, 1, 1);
	printf("Test 8. NULL input\n");
	if (substr == NULL)
		printf("\tNULL was expected, Test Ok!\n");
	printf("\toriginal string:%s$, substring:%s$\n\n", s, substr);
}	
