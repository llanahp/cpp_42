# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/20 08:41:43 by ralopez-          #+#    #+#              #
#    Updated: 2023/06/20 08:41:44 by ralopez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRCS = megaphone.cpp 

CC = c++
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = ${SRCS:.cpp=.o}

all: ${NAME}

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY : all clean fclean re
