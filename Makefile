# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lenamelard <lenamelard@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/21 18:17:05 by lmelard           #+#    #+#              #
#    Updated: 2022/04/22 15:47:27 by lenamelard       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = ./src/add_node.c \
	./src/add_rank.c \
	./src/atoi.c \
	./src/biggest.c \
	./src/check_digit.c \
	./src/check_double.c \
	./src/check_lst.c \
	./src/check_sort.c \
	./src/check_value.c \
	./src/free_all.c \
	./src/join_split.c \
	./src/lstlast.c \
	./src/main.c \
	./src/medium_sort.c \
	./src/push.c \
	./src/radix_sort.c \
	./src/reverse_rotate.c \
	./src/rotate.c \
	./src/small_sort.c \
	./src/smallest.c \
	./src/sort_all.c \
	./src/sorted.c \
	./src/split.c \
	./src/strjoin.c \
	./src/swap.c

OBJ = ${SRC:.c=.o}

CC = gcc
RM = rm -f

CFLAGS = -Wall -Werror -Wextra

.c.o:
	${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJ}
	${CC} ${CFLAGS} -o ${NAME} ${OBJ}

all: ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
