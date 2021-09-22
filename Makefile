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
		ft_algo_bus.c\
		ft_big.c\
		ft_big_utils_1.c\
		ft_big_utils_2.c\
		ft_little.c\
		ft_little_utils_1.c\
		ft_little_utils_2.c\
		ft_spe.c\
		ft_sort_bus.c\
		ft_move_1.c\
		ft_move_2.c\
		ft_move_3.c

OBJS = $(SRCS:.c=.o)

#LINK = ar rc

all : $(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJS)
#	$(LINK) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(OB)

fclean: clean
	rm -f $(NAME) $(OB)

re: fclean all

.PHONY: re bonus clean fclean all