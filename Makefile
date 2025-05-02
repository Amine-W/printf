# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/02 17:17:56 by amwahab           #+#    #+#              #
#    Updated: 2025/05/02 17:19:20 by amwahab          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc = cc
FLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c /
		check.c /
		ft_putchar.c /
		ft_putnbr.c /
		ft_putstr.c /
		ft_unsigned_putnbr

OBJS	= $(SRCS:.c=.o)
OBJS_BONUS	= $(SRCS_BONUS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@rm -f $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re fclean clean bonus