NAME = Weapon

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror

HUMAN_A = class/HumanA/HumanA.cpp
HUMAN_B = class/HumanB/HumanB.cpp
WEAPON = class/Weapon/Weapon.cpp

FILES = main.cpp $(HUMAN_A) $(HUMAN_B) $(WEAPON)
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
