# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danrodri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 15:49:46 by danrodri          #+#    #+#              #
#    Updated: 2019/11/06 19:55:46 by danrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./srcs/*.c

OBJS	= ./objs/*.o

NAME	= libft.a

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

${NAME}:
			@cc -c  ${SRCS}
			@mv *.o ./objs
			@ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
			@${RM} ${OBJS}

fclean:		clean
			@${RM} ${NAME}

cleantest:	fclean
			@${RM} programa main.o

bmain:		
			@cc -c main.c

test:		bmain
			@cc ${CFLAGS} -o programa main.o -L. -lft

re:			fclean all

.PHONY:		all clean fclean re test bmain



