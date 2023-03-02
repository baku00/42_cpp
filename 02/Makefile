NAME = Zombie

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror

PHONEBOOK = class/PhoneBook/PhoneBook.cpp
CONTACT = class/Contact/Contact.cpp

FILES = main.cpp $(PHONEBOOK) $(CONTACT)
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
