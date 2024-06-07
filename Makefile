# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: licohen <licohen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/31 11:59:15 by licohen           #+#    #+#              #
#    Updated: 2024/06/07 17:57:24 by licohen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= cc 

NAME 	= libftprintf.a

CFLAGS	= -Wall -Wextra -Werror -c

SRCS	= 	ft_printf.c \
			ft_strlen.c \
			ft_printf_Xxu.c \
			ft_printf_putstr.c \
			ft_printf_putchar.c \
			ft_printf_di.c 
		
INCLUDES = -I ft_printf.h

OBJS	= ${SRCS:.c=.o}

AR		= ar rcs

RM		= rm -f 

%.o : %.c 
			$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
			
$(NAME) : 	$(OBJS)
			$(AR) $(NAME) $(OBJS)

all : 		$(NAME)

clean : 
			$(RM) $(OBJS)

fclean : clean 
			$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re 