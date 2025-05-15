/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:52:41 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/14 13:08:22 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	free_arr(char **arr)
{
	char	**tmp;

	tmp = arr;
	while (*arr)
		free(*arr++);
	free(tmp);
}

static void	print_arr(char **arr)
{
	int	i;

	i = 0;
	printf("Result:$\n");
	while (arr[i])
	{
		printf("arr[%d]:%s$\n", i, arr[i]);
		i++;
	}
	printf("------\n");
}

void	test_split(void)
{
	char	**arr;

	printf("\n====== TEST SPLIT ======\n\n");
	// Test 1. empty string
	arr = ft_split("", 'a');
	printf("Test 1. arr = ft_split(\"\", 'a');\n");
	print_arr(arr);
	free_arr(arr);
	// Test 2. delimiter not in string
	arr = ft_split("a,b", '.');
	printf("Test 2. arr = ft_split(\"a,b\", '.');\n");
	print_arr(arr);
	free_arr(arr);
	// Test 3. delimiter in string
	arr = ft_split("a,b,c", ',');
	printf("Test 3. arr = ft_split(\"a,b,c\", ',');\n");
	print_arr(arr);
	free_arr(arr);
	// Test 4: Leading delimiters
    arr = ft_split("...hello", '.');
    printf("Test 4: arr = ft_split(\"...hello\", '.');\n");
    print_arr(arr);  // Expect: ["hello"]
    free_arr(arr);
	// Test 5: Trailing delimiters
    arr = ft_split("world---", '-');
    printf("Test 5: arr = ft_split(\"world---\", '-');\n");
    print_arr(arr);  // Expect: ["world"]
    free_arr(arr);
    // Test 6: Consecutive delimiters
    arr = ft_split("test,,split", ',');
    printf("Test 6: arr = ft_split(\"test,,split\", ',');\n");
    print_arr(arr);  // Expect: ["test", "split"]
    free_arr(arr);
    // Test 7: Only delimiters
    arr = ft_split("::::", ':');
    printf("Test 7: arr = ft_split(\"::::\", ':');\n");
    print_arr(arr);  // Expect: [NULL]
    free_arr(arr);
    // Test 8: NULL input
    arr = ft_split(NULL, 'a');
    printf("Test 8: arr = ft_split(NULL, 'a');\n");
    if (arr) {
        printf("FAIL: Expected NULL\n");
        free_arr(arr);
    } else {
        printf("PASS: Returned NULL\n");
    }
}	
