# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/20 15:59:23 by davgalle          #+#    #+#              #
#    Updated: 2024/08/21 12:25:01 by davgalle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

CC = c++

CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address -std=c++98

RM = rm -f

SRC = main.cpp

OBJTS = $(SRC:.cpp=.o)

all:
	$(NAME)

$(NAME): $(OBJTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJTS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
