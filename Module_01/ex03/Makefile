# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/19 12:59:54 by davgalle          #+#    #+#              #
#    Updated: 2024/08/20 15:46:46 by davgalle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon

CC = c++

CFLAGS = -Wall -Werror -Wextra -g3 -fsanitize=address -std=c++98

RM = rm -f

SRC = main.cpp \
	Weapon.cpp \
	HumanA.cpp \
	HumanB.cpp

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re