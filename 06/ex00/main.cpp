#include "class/Bureaucrat/Bureaucrat.hpp"

void	decrementBureaucrat(Bureaucrat *bureaucrat)
{
	try
	{
		bureaucrat->decrementGrade();
		std::cout << *bureaucrat << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	incrementBureaucrat(Bureaucrat *bureaucrat)
{
	try
	{
		bureaucrat->incrementGrade();
		std::cout << *bureaucrat << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main()
{
	std::cout << "=============" << std::endl;
	std::cout << "| Decrement |" << std::endl;
	std::cout << "=============" << std::endl;
	Bureaucrat *bureaucratToDecrement = new Bureaucrat("Patrick", 149);
	std::cout << *bureaucratToDecrement << std::endl;

	decrementBureaucrat(bureaucratToDecrement);
	decrementBureaucrat(bureaucratToDecrement);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "=============" << std::endl;
	std::cout << "| Increment |" << std::endl;
	std::cout << "=============" << std::endl;
	Bureaucrat *bureaucratToIncrement = new Bureaucrat("Bruel", 2);

	std::cout << *bureaucratToIncrement << std::endl;
	incrementBureaucrat(bureaucratToIncrement);
	incrementBureaucrat(bureaucratToIncrement);

	delete bureaucratToDecrement;
	delete bureaucratToIncrement;
	return (0);
}
