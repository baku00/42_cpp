NAME = Bureaucrat

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror -fsanitize=address

BUREAUCRAT = Bureaucrat.cpp
SHRUBBERY_CREATE_FORM = ShrubberyCreationForm.cpp
ROBOTOMY_REQUEST_FORM = RobotomyRequestForm.cpp
PRESIDENTIAL_PARDON_FORM = PresidentialPardonForm.cpp
INTERN = Intern.cpp
RANDOM = Random.cpp
FORM = AForm.cpp

FILES = main.cpp $(BUREAUCRAT) $(FORM) $(INTERN) $(SHRUBBERY_CREATE_FORM) $(ROBOTOMY_REQUEST_FORM) $(PRESIDENTIAL_PARDON_FORM) $(RANDOM)
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
