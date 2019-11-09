# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danrodri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 15:49:46 by danrodri          #+#    #+#              #
#    Updated: 2019/11/09 20:43:03 by danrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:		all clean fclean re

NAME		= libft.a

SRCS		= *.c

OBJS		= $(SRCS:.c=.o)

RM			= rm -f

CFLAGS		= -Wall -Werror -Wextra

${NAME}:
			@cc $(CFLAGS) -c $(SRCS)
			@ar rc $(NAME) $(OBJS)

all:		$(NAME)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

