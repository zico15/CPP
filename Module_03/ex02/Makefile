SRCS =  main.cpp \
 		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp

CC = clang++
NAME = ex02

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
