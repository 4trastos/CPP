# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 12:31:24 by davgalle          #+#    #+#              #
#    Updated: 2024/10/10 17:33:24 by davgalle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = functions

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