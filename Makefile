# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: omarquez <omarquez@student.42urduliz.com>    +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2026/05/09 10:45:10 by omarquez            #+#    #+#             #
#   Updated: 2026/05/19 13:15:46 by omarquez           ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_put_uint.c \
ft_puthex.c ft_putmem.c
INCLUDES = -C libft libft.h

OBJS = $(SRCS:.c=.o)

all : libft $(NAME)

libft :
	$(MAKE) -C libft

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) clean -C libft
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re libft