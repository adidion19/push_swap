# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adidion <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/17 14:58:48 by adidion           #+#    #+#              #
#    Updated: 2021/09/17 14:58:51 by adidion          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME =	push_swap

SRCS =	ft_atoi.c\
		main.c\

OBJS = $(SRCS:.c=.o)

LINK = ar rc

all : $(NAME)

$(NAME):	$(OBJS)
	$(LINK) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(OB)

fclean: clean
	rm -f $(NAME) $(OB)

re: fclean all

.PHONY: re bonus clean fclean all