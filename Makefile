# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/02 17:17:56 by amwahab           #+#    #+#              #
#    Updated: 2025/05/02 20:31:28 by amwahab          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC = ft_printf.c \
		ft_check.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_unsigned_putnbr.c \
		ft_adress.c \
		ft_puthex.c \
		ft_puthex_upper.c

OBJS = $(SRC:.c=.o)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re fclean clean
