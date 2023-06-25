# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/22 11:03:43 by ralopez-          #+#    #+#              #
#    Updated: 2023/06/22 11:03:45 by ralopez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed
SRCS = Fixed.cpp main.cpp

CC = c++
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = ${SRCS:.cpp=.o}

all: ${NAME}

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY : all clean fclean re
