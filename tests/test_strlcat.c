#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_strlcat(void)
{
	char	buff[10] = "0";
	int		len;

	printf("\n====== TEST STRLCAT ======\n\n");
	printf("buff[10] = %s$\n", buff);
	// concatenate the string "1" to buff
	len = ft_strlcat(buff, "1", 10);
	printf("1. len = ft_strlcat(buff, \"1\", 10), results in:\n"
		"\tlen = %d, buff =  %s\n", len, buff);
	// concatenate up to 2 + '\0' to buff
	len = ft_strlcat(buff, "23456789", 3);
	printf("2. len = ft_strlcat(buff, \"23456789\", 3), results in: \n"
		"\tlen = %d, buff = %s\n", len, buff);
	// concatenate up to 3 + '\0' to buff
	len = ft_strlcat(buff, "23456789", 4);
	printf("3. len = ft_strlcat(buff, \"23456789\", 4), results in: \n"
		"\tlen = %d, buff = %s\n", len, buff);
}
