NAME = accounts

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = $(wildcard *.cpp)

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

r:
	make re && ./$(NAME)
re: fclean all