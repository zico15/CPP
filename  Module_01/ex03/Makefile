SRCS =  main.cpp \
		Weapon.cpp \
		HumanA.cpp \
  		HumanB.cpp 

CC = clang++
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
