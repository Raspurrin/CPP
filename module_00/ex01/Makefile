SRCS = 	main.cpp \
		Phonebook.cpp \
		Contact.cpp \
		utils.cpp
OBJS = $(SRCS:.cpp=.o)
DEBUG = -fsanitize=address -g
CFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = phonebook
CC = c++

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(DEBUG) -o $(NAME)

clean: 
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all
