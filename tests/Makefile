NAME := all-tests
CC := cc
CFLAGS := -Wall -Werror -Wextra -I../libft

LIB_PATH := ../libft/
LIB := -lft

OBJS_DIR := objs

#source files
SRCS := 				\
		all-tests.c		\
		test_isalpha.c	\
		test_isdigit.c	\
		test_isalnum.c	\
		test_isascii.c	\
		test_isprint.c	\
		test_strlen.c	\
		test_memset.c	\
		test_bzero.c	\
		test_memcpy.c	\
		test_memmove.c	\
		test_strlcpy.c	\
		test_strlcat.c	\
		test_toupper.c	\
		test_tolower.c	\
		test_strchr.c	\
		test_strncmp.c	\
		test_memchr.c	\
		test_memcmp.c	\
		test_strnstr.c	\
		test_atoi.c		\
		test_calloc.c	\
		test_strdup.c	\
		test_substr.c	\
		test_strtrim.c	\
		test_strjoin.c	\
		test_split.c	\
		test_itoa.c		\
		test_strmapi.c	\
		test_striteri.c

OBJS := $(addprefix $(OBJS_DIR)/, $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L$(LIB_PATH) -lft

$(OBJS_DIR)/%.o: %.c
	@mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
