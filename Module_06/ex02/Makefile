# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/02 16:32:29 by davgalle          #+#    #+#              #
#    Updated: 2024/10/07 15:16:17 by davgalle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify

CC = c++

CFLAG = -Wall -Werro -Wextra -g3 -std=c++98

RM = rm -f

SRC = main.cpp \
	Base.cpp \
	A.cpp \
	B.cpp \
	C.cpp \
	Serializer.cpp

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