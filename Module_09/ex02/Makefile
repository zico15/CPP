SRCS =  main.cpp PmergeMe.cpp

CC = c++
NAME = PmergeMe

CFLANG = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLANG)  -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

m: fclean

r: 
	make re && clear && ./$(NAME) 3 5 9 7 4 -9

.PHONY: all clean fclean re
