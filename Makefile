# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/15 11:17:05 by dbenkhar          #+#    #+#              #
#    Updated: 2022/01/15 11:17:35 by dbenkhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS =	*.c

CC = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror -g

LIBFT = ./libft/libft.a

all :
	$(MAKE) -C ./libft
	${CC} ${CFLAGS} -o ${NAME} ${SRCS} ${LIBFT}

clean :
	$(MAKE) clean -C ./libft

fclean : clean
	$(MAKE) fclean -C ./libft
	${RM} ${NAME}

re : fclean all
