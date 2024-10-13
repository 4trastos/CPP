# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: usuario <usuario@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/13 12:13:01 by usuario           #+#    #+#              #
#    Updated: 2024/10/13 12:13:50 by usuario          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutated

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -f

SRC = main.cpp

OBJTS = $(SRC:.cpp=.o)

$(NAME): $(OBJTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJTS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re