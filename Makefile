# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytouate <ytouate@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 12:07:28 by ytouate           #+#    #+#              #
#    Updated: 2021/11/29 12:07:54 by ytouate          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

SRC = \
	./ft_putchar.c		\
	./ft_putstr.c		\
	./ft_putnbr.c		\
	./ft_strlen.c		\
	./ft_num_len.c		\
	./ft_printf.c		\
	./ft_putnbr_base.c	\
	./ft_u_putnbr.c		\
	./ft_print_address.c	\
	./ft_base_lenght.c

PARTS = $(SRC)

OBJS = $(PARTS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all


.PHONY : all clean fclean re
