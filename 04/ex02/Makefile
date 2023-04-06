NAME = Animal

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror -fsanitize=address

ANIMAL = class/Animal/Animal.cpp
CAT = class/Cat/Cat.cpp
DOG = class/Dog/Dog.cpp
BRAIN = class/Brain/Brain.cpp

FILES = main.cpp $(ANIMAL) $(CAT) $(DOG) $(BRAIN)
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
