#include "class/Bureaucrat/Bureaucrat.hpp"
#include "class/Intern/Intern.hpp"
#include "class/Form/Type/ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "class/Form/Type/RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "class/Form/Type/PresidentialPardonForm/PresidentialPardonForm.hpp"

int main()
{
	std::cout << std::endl;
	Intern *intern = new Intern();

	AForm *shrubbery = intern->makeForm("shrubbery creation", "shrubbery");
	AForm *robot = intern->makeForm("robotomy request", "robot");
	AForm *president = intern->makeForm("presidential pardon", "president");

	std::cout << *shrubbery << std::endl;
	std::cout << std::endl;

	std::cout << *robot << std::endl;
	std::cout << std::endl;

	std::cout << *president << std::endl;
	std::cout << std::endl;

	delete intern;
	delete shrubbery;
	delete robot;
	delete president;

	return 0;
}
