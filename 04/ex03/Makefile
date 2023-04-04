NAME = Character

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror

CHARACTER = class/Character/Character.cpp

FILES = main.cpp $(CHARACTER)
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
