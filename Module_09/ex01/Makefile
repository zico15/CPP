SRCS =  main.cpp \
		RPN.cpp

CC = c++
NAME =  RPN

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
	make re && clear && ./$(NAME)  "8 9 * 9 - 9 - 9 - 4 - 1  + 8"

.PHONY: all clean fclean re
