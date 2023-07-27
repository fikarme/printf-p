# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/15 21:38:36 by akdemir           #+#    #+#              #
#    Updated: 2023/07/26 00:40:02 by akdemir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
SRC		=	ft_printf.c ft_put.c
OBJS	=	$(SRC:.c=.o)
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -rf
AR		=	ar rc

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:
		$(RM) $(NAME) $(OBJS)

re:	fclean all

.PHONY:	all clean fclean re
