# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/20 08:41:54 by ralopez-          #+#    #+#              #
#    Updated: 2023/06/20 08:41:55 by ralopez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook
SRCS = PhoneBook.cpp Contact.cpp Main.cpp

CC = c++
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
