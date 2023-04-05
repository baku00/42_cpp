NAME = FragTrap
CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror -fsanitize=address

CLAPTRAP = class/ClapTrap/ClapTrap.cpp
SCAVTRAP = class/ScavTrap/ScavTrap.cpp
FRAGTRAP = class/FragTrap/FragTrap.cpp

FILES = main.cpp $(CLAPTRAP) $(SCAVTRAP) $(FRAGTRAP)
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
