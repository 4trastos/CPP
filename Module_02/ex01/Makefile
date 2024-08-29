NAME = fixed

CC = c++

CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

RM = rm -f

SRC = main.cpp \
	Fixed.cpp

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