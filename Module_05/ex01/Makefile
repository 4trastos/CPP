# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/21 10:19:38 by usuario           #+#    #+#              #
#    Updated: 2024/09/22 14:23:52 by davgalle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

CC = c++

CFLAGS = -Wall -Werror -Wextra -g3 -std=c++98

RM = rm -f

SRC = main.cpp \
	Bureaucrat.cpp \
	Form.cpp

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