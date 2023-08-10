NAME = Bureaucrat

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror -fsanitize=address

BUREAUCRAT = class/Bureaucrat/Bureaucrat.cpp
SHRUBBERY_CREATE_FORM = class/Form/Type/ShrubberyCreationForm/ShrubberyCreationForm.cpp
SHRUBBERY_CREATE_FORM_CONFIG = class/Form/Type/ShrubberyCreationForm/Config/Config.cpp
ROBOTOMY_REQUEST_FORM = class/Form/Type/RobotomyRequestForm/RobotomyRequestForm.cpp
PRESIDENTIAL_PARDON_FORM = class/Form/Type/PresidentialPardonForm/PresidentialPardonForm.cpp
RANDOM = class/Utils/Random/Random.cpp
FORM = class/Form/AForm.cpp

FILES = main.cpp $(BUREAUCRAT) $(FORM) $(SHRUBBERY_CREATE_FORM) $(SHRUBBERY_CREATE_FORM_CONFIG) $(ROBOTOMY_REQUEST_FORM) $(PRESIDENTIAL_PARDON_FORM) $(RANDOM)
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
