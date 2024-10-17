# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 16:07:49 by davgalle          #+#    #+#              #
#    Updated: 2024/10/17 10:02:18 by davgalle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRC = main.cpp \
	RPN.cpp

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
