SRCS =	main.cpp \
		ScalarConverter.cpp

OBJS = $(SRCS:.cpp=.o)
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c++98
DEBUG = -fsanitize=address -g
NAME = mess
CC = g++

ifdef DEBUG
	DEBUG = -fsanitize=address -g
else
	DEBUG = 
endif

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $(SRCS) -o $(OBJS)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean: 
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all
