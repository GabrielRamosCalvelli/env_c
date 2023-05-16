# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcalvell <gcalvell@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/01 19:51:28 by gcalvell          #+#    #+#              #
#    Updated: 2023/05/01 19:51:28 by gcalvell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	main.c\
					printer_func.c\
					ft_substr.c\
					data_struct_add.c\
					data_struct_remove.c\
					env.c\

NAME = env_test

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

$(NAME):
			$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(NAME)

fclean:		clean

re:			fclean all

.PHONY:	all fclean re clean
