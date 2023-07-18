# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/22 17:18:56 by ralopez-          #+#    #+#              #
#    Updated: 2023/06/22 17:18:57 by ralopez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span
SRCS = Span.cpp main.cpp
HDRS = Span.hpp

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = ${SRCS:.cpp=.o}


all: ${NAME}



${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY : all clean fclean re
