SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
CFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = megaphone
CC = c++

ifdef DEBUG
	DEBUG = -fsanitize=address -g
else
	DEBUG = 
endif

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(DEBUG) -o $(NAME)

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all
