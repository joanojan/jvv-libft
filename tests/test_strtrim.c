#include "libft.h"
#include <stdio.h>

void	test_strtrim(void)
{
	char	*s;

	printf("\n====== STRTRIM TESTS ======\n\n");
	// Test 1. trim empty string
	s = ft_strtrim("", ".");
	printf("Test 1: s = ft_strtrim(\"\", \".\"):\n");
	printf("%s$\n", s);
	if (!s)
		printf("\tNULL was expected, Test ok!\n");
	free(s);
	// Test 2. trim where set is empty string
	s = ft_strtrim("foo", "");
	if (!s)
		printf("*** Something went wrong!\n ***");
	printf("Test 2. s = f_strtrim(\"foo\", \"\")\n");
	printf("%s$\n", s);
	free(s);
	// Test 3. trim where set is one char
	s = ft_strtrim("foo", "f");
	if (!s)
		printf("*** Something went wrong!\n ***");
	printf("Test 3. s = ft_strtrim(\"foo\", \"f\")\n");
	printf("%s$\n", s);
	free(s);
	// Test 4. trim where set is several chars
	s = ft_strtrim(" foo bar baz! ", "f !");
	if (!s)
		printf("*** Something went wrong!\n ***");
	printf("Test 4. s = ft_strtrim(\" foo bar baz! \", \"f !\")\n");
	printf("%s$\n", s);
	free(s);
	// Test 5. trim where string has only set chars 
	s = ft_strtrim("...---...", ".-");
	printf("Test 5. s = ft_strtrim(\"...---...\", \".-\")\n");
	if (!s)
		printf("*** Something went wrong!\n ***");
	printf("%s$\n", s);
	free(s);
	// Test 6. trim where set is NULL
	s = ft_strtrim("foo", NULL);
	printf("Test 6. s = ft_strtrim(\"foo\", NULL);\n");
	if (!s)
		printf("*** Something went wrong!\n ***");
	printf("%s$\n", s);
	free(s);
}
