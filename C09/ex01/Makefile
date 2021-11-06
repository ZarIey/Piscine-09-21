# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ctardy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/28 09:48:18 by ctardy            #+#    #+#              #
#    Updated: 2021/09/30 10:01:33 by ctardy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./srcs/ft_putchar.c \
	   ./srcs/ft_swap.c \
	   ./srcs/ft_putstr.c \
	   ./srcs/ft_strlen.c \
	   ./srcs/ft_strcmp.c \

SRCS_DIR =  

OBJS = ${SRCS:.c=.o}

CC = gcc
rmf = rm -f
HEAD = includes

CFLAGS = -Wall -Wextra -Werror

.c.o : 
			gcc ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEAD}

NAME = libft.a

all:		${NAME}

${NAME} :	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

clean:
			${rmf} ${OBJS}

fclean:	clean
			${rmf} ${NAME}

re : fclean all

.PHONY:		all clean fclean re
