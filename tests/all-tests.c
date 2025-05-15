/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all-tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:17:23 by jvila-va          #+#    #+#             */

/* ************************************************************************** */

void	test_isalpha(void);
void	test_isdigit(void);
void	test_isalnum(void);
void	test_isascii(void);
void	test_isprint(void);
void	test_strlen(void);
void	test_memset(void);
void	test_bzero(void);
void	test_memcpy(void);
void	test_memmove(void);
void	test_strlcpy(void);
void	test_strlcat(void);
void	test_toupper(void);
void	test_tolower(void);
void	test_strchr(void);
void	test_strncmp(void);
void	test_memchr(void);
void	test_memcmp(void);
void	test_strnstr(void);
void	test_atoi(void);
void	test_calloc(void);
void	test_strdup(void);
void	test_substr(void);
void	test_strtrim(void);
void	test_strjoin(void);
void	test_split(void);
void	test_itoa(void);

int	main(void)
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
	test_memset();
	test_bzero();
	test_memcpy();
	test_memmove();
	test_strlcpy();
	test_strlcat();
	test_toupper();
	test_tolower();
	test_strchr();
	test_strncmp();
	test_memchr();
	test_memcmp();
	test_strnstr();
	test_atoi();
	test_calloc();
	test_strdup();
	test_substr();
	test_strtrim();
	test_strjoin();
	test_split();
	test_itoa();
	return (0);
}
