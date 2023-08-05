#include "class/Bureaucrat/Bureaucrat.hpp"
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

	delete bureaucratToDecrement;
	delete bureaucratToIncrement;
	delete shrubbery;
	delete robot;
	return (0);
}