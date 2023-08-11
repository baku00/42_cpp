NAME = Serializer

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror -fsanitize=address

DATA = Data.cpp
SERIALIZER = Serializer.cpp

FILES = main.cpp $(SERIALIZER) $(DATA)
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