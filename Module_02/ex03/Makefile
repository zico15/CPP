SRCS =  main.cpp \
 		Fixed.cpp \
		Point.cpp \
		bsp.cpp

CC = c++
NAME = ex03

CFLANG = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)
 

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAG) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

m: fclean

r: 
	make re && clear && ./$(NAME)

.PHONY: all clean fclean re
