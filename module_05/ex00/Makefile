SRCS = 	main.cpp \
		Bureaucrat.cpp

OBJS = $(SRCS:.cpp=.o)
CFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = bureaucrat
CC = g++

ifdef DEBUG
	DEBUG = -fsanitize=address -g
else
	DEBUG = 
endif

all: $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean: 
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all
