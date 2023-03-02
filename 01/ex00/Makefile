NAME = Zombie

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror

ZOMBIE = class/Zombie/Zombie.cpp
NEW_ZOMBIE = src/newZombie.cpp
RANDOM_CHUMP = src/randomChump.cpp

FILES = main.cpp $(ZOMBIE) $(NEW_ZOMBIE) $(RANDOM_CHUMP)
OBJS = $(FILES:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)
	@echo "Cleaning"

fclean: clean
	@rm -rf $(NAME)
	@echo "Done"

re: fclean all
