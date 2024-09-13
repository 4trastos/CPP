# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/13 18:30:39 by davgalle          #+#    #+#              #
#    Updated: 2024/09/13 18:59:18 by davgalle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

CC = c++

CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

RM = rm -f

SRC = main.cpp \
	ClapTrap.cpp \
	FragTrap.cpp \
	ScavTrap.cpp

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