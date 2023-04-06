NAME = Animal

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror -fsanitize=address

WRONG_ANIMAL = wrong/WrongAnimal/WrongAnimal.cpp
WRONG_CAT = wrong/WrongCat/WrongCat.cpp
ANIMAL = class/Animal/Animal.cpp
CAT = class/Cat/Cat.cpp
DOG = class/Dog/Dog.cpp

FILES = main.cpp $(ANIMAL) $(CAT) $(DOG) $(WRONG_ANIMAL) $(WRONG_CAT)
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
