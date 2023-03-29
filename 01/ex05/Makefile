NAME = Harl

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror

HARL = class/Harl/Harl.cpp
FILES = main.cpp $(HARL)
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
