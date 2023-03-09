SRCS = 	main.cpp \
		Phonebook.cpp \
		Contact.cpp
OBJS = $(SRCS:.cpp=.o)
DEBUG = -fsanitize=address -g
CFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = phonebook
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
