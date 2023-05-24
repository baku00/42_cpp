#include "class/Bureaucrat/Bureaucrat.hpp"
#include "class/Intern/Intern.hpp"
#include "class/Form/Type/ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "class/Form/Type/RobotomyRequestForm/RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat *bureaucratToDecrement = new Bureaucrat("Patrick", 149);
	std::cout << *bureaucratToDecrement << std::endl;

	Bureaucrat *bureaucratToIncrement = new Bureaucrat("Bruel", 2);
	std::cout << *bureaucratToIncrement << std::endl;

	Form *shrubbery = new ShrubberyCreationForm("Jardin");
	Form *robot = new RobotomyRequestForm("Perceuse");

	try
	{
		shrubbery->execute(*bureaucratToIncrement);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	bureaucratToDecrement->executeForm(*shrubbery);

	Intern *intern = new Intern();
	Form *form = NULL;
	try
	{
		form = intern->makeForm("robotomy request", "Bender");
		std::cout << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	Intern	someRandomIntern;
	Form *rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	delete rrf;
	delete bureaucratToDecrement;
	delete bureaucratToIncrement;
	delete shrubbery;
	delete robot;
	delete intern;
	delete form;
	return (0);
}
