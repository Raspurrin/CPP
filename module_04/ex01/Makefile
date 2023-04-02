SRCS =	main.cpp \
		Brain.cpp \
		Cat.cpp \
		Dog.cpp \
		Animal.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)
CFLAGS = -Wall -Werror -Wextra -g -std=c++98
DEBUG = -fsanitize=address -g
NAME = catdog
CC = g++


all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $(SRCS) -o $(OBJS)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(DEBUG) -o $(NAME)

clean: 
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all
