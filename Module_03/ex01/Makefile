# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/11 15:47:33 by davgalle          #+#    #+#              #
#    Updated: 2024/09/13 18:14:47 by davgalle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

RM = rm -f

SRC = main.cpp \
	ScavTrap.cpp \
	ClapTrap.cpp

OBJTS = $(SRC:.cpp=.o)

all: $(NAME)

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