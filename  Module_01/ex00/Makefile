SRCS = ./main.cpp \
	./Zombie.cpp \
	./newZombie.cpp \
	./randomChump.cpp

CC = c++
NAME = zombie

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
	make re && clear && ./zombie

.PHONY: all clean fclean re
