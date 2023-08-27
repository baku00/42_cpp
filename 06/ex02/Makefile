NAME = Identifier

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror -fsanitize=address

BASE = Base.cpp
FILES = main.cpp $(BASE)
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
	@rm -rf *_shrubbery
	@echo "Done"

re: fclean all
