# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danrodri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 15:49:46 by danrodri          #+#    #+#              #
#    Updated: 2019/11/07 15:51:15 by danrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:		all clean fclean re

NAME		= libft.a

PATHSRCS	= ./srcs/

PATHOBJS	= ./objs/

SRCS		= $(PATHSRCS)*.c

OBJS		= $(PATHOBJS)*.o

RM			= rm -f

CFLAGS		= -Wall -Werror -Wextra

${NAME}:
			@cc $(CFLAGS) -c ${SRCS}
			@mv *.o $(PATHOBJS)
			@ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
			@${RM} ${OBJS}

fclean:		clean
			@${RM} ${NAME}

re:			fclean all

