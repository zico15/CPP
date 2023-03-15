SRCS =  main.cpp \
 		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp

CC = c++
NAME = ex02

CFLANG = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)
 

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLANG) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

m: fclean

r: 
	make re && clear && ./$(NAME)

.PHONY: all clean fclean re
