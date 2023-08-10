#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Intern *intern = new Intern();

	AForm *shrubbery = intern->makeForm("shrubbery creation", "jardin");
	AForm *robotomy = intern->makeForm("robotomy request", "robot");
	AForm *presidential = intern->makeForm("presidential pardon", "president");

	std::cout << std::endl;

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

	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}

	delete intern;
	delete bureaucrat;
	delete shrubbery;
	delete robotomy;
	delete presidential;
	return 0;
}