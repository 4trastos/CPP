# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/09 08:58:19 by davgalle          #+#    #+#              #
#    Updated: 2024/08/09 10:24:15 by davgalle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Megaphone

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98 -g3 -fsanitize=address

RM = rm -f

LIB = ar rcs

SRC = Megaphone.cpp

OBJS = $(SRC:.cpp=.opp)

all:
	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(OBJS)

re: fclean all

.PHONY: all fclean clean re