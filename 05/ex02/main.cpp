#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	AForm *shrubbery = new ShrubberyCreationForm("jardin");
	AForm *robotomy = new RobotomyRequestForm("robot");
	AForm *presidential = new PresidentialPardonForm("president");

	Bureaucrat *bureaucrat = new Bureaucrat("Patrick", 1);

	std::cout << *bureaucrat << std::endl;

	std::cout << std::endl;
	std::cout << *shrubbery << std::endl << std::endl;
	std::cout << "Sign form" << std::endl;
	bureaucrat->signForm(*shrubbery);

	std::cout << std::endl;
	std::cout << "Execute form" << std::endl;
	bureaucrat->executeForm(*shrubbery);
	std::cout << std::endl;


	std::cout << *robotomy << std::endl << std::endl;
	std::cout << "Sign form" << std::endl;
	bureaucrat->signForm(*robotomy);
	std::cout << "Execute form" << std::endl;
	bureaucrat->executeForm(*robotomy);
	std::cout << std::endl;

	std::cout << *presidential << std::endl << std::endl;
	std::cout << "Sign form" << std::endl;
	bureaucrat->signForm(*presidential);
	std::cout << "Execute form" << std::endl;
	bureaucrat->executeForm(*presidential);

	delete bureaucrat;
	delete shrubbery;
	delete robotomy;
	delete presidential;
	return 0;
}