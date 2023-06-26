# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romartin <romartin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/03 12:50:46 by romartin          #+#    #+#              #
#    Updated: 2023/06/26 15:14:11 by romartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = main.c ft_sort.c actions.c ft_atoi.c divers.c divers2.c ft_unsigned_putnbr.c ft_hexa_min.c ft_hexa_max.c ft_pointer.c ft_putnbr_fd.c ft_putchar_fd.c ft_atoi_bis.c ft_printf.c ft_putstr_fd.c ft_split.c ft_substr.c ft_calloc.c ft_bzero.c ft_strlen.c lst_clear.c
FLAG    = -Wall -Werror -Wextra
OBJS	=  ${SRCS:.c=.o}

.c.o	:
		@gcc -Wall -Wextra -Werror -c $^
${NAME} : ${OBJS}
		@gcc -o ${NAME} ${OBJS}

all : ${NAME}

clean :
		@rm -f ${OBJS}

fclean : clean
		@rm -f ${NAME}

re : fclean all
