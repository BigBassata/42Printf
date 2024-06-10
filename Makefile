# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: licohen <licohen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/31 11:59:15 by licohen           #+#    #+#              #
#    Updated: 2024/06/10 16:19:35 by licohen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= cc 

NAME 	= libftprintf.a

CFLAGS	= -Wall -Wextra -Werror -c

SRCS	= 	ft_printf.c \
			ft_printf_Xxu.c \
			ft_printf_utils.c \
			ft_printf_di.c \
 		
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