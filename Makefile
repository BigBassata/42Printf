# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: licohen <licohen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/31 11:59:15 by licohen           #+#    #+#              #
#    Updated: 2024/06/07 17:29:41 by licohen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS	= ft_printf.c 

OBJS		=	${SRCS:.c=.o}

HEAD		=	./includes/

CFLAGS		=	-Wall -Wextra -Werror -c

AR		=	ar rcs

RM		=	rm -f

