NAME = Zombie

CC = c++

CFLAGS = -Wall -Werror -Wextra -g3 -fsanitize=address -std=c++98

RM = rm -f

SRC = Zombie.cpp \
	main.cpp \
	newZombie.cpp \
	randomChump.cpp

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