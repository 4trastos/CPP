# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/10 18:49:51 by davgalle          #+#    #+#              #
#    Updated: 2024/10/10 19:04:44 by davgalle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

CC = c++

CFLAG = -Wall -Werro -Wextra -g3 -std=c++98

RM = rm -f

SRC = main.cpp \
	Fixed.cpp

OBJTS = $(SRC:.cpp=.o)

$(NAME): $(OBJTS)
	$(CC) $(CFLAG) -o $(NAME) $(OBJTS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re