NAME = Character

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror -fsanitize=address

CHARACTER = class/Character/Character.cpp
ICE = class/objects/Ice/Ice.cpp
CURE = class/objects/Cure/Cure.cpp
MATERIA_SOURCE = class/MateriaSource/MateriaSource.cpp
AMATERIA = class/definitions/abstracts/AMateria.cpp
FILES = main.cpp $(CHARACTER) $(ICE) $(CURE) $(MATERIA_SOURCE) $(AMATERIA)
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
