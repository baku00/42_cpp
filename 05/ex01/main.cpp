#include "class/Bureaucrat/Bureaucrat.hpp"

void print_bureaucrat(Bureaucrat bureaucrat)
{
	std::cout << "Bureaucrat: " << bureaucrat << std::endl;
}

void print_form(Form form)
{
	std::cout << "Information formulaire:" << std::endl;
	std::cout << form << std::endl;
	std::cout << std::endl;
}

int main()
{
	Bureaucrat *bureaucratToDecrement = new Bureaucrat("Patrick", 149);
	print_bureaucrat(*bureaucratToDecrement);

	Bureaucrat *bureaucratToIncrement = new Bureaucrat("Bruel", 2);
	print_bureaucrat(*bureaucratToIncrement);

	Form *formSell = new Form("Formulaire de vente", 10, 100);
	Form *formBuy = new Form("Formulaire d'achat", 150, 100);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "======================" << std::endl;
	std::cout << "| Sign form bad form |" << std::endl;
	std::cout << "======================" << std::endl;
	print_bureaucrat(*bureaucratToDecrement);
	std::cout << std::endl;
	print_form(*formBuy);
	std::cout << std::endl;
	bureaucratToDecrement->signForm(*formSell);
	print_form(*formBuy);
	std::cout << std::endl;
	print_bureaucrat(*bureaucratToDecrement);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "====================" << std::endl;
	std::cout << "| Sign form to buy |" << std::endl;
	std::cout << "====================" << std::endl;
	print_bureaucrat(*bureaucratToDecrement);
	std::cout << std::endl;
	print_form(*formBuy);
	std::cout << std::endl;
	bureaucratToDecrement->signForm(*formBuy);
	print_form(*formBuy);
	std::cout << std::endl;
	print_bureaucrat(*bureaucratToDecrement);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "=====================" << std::endl;
	std::cout << "| Sign form to sell |" << std::endl;
	std::cout << "=====================" << std::endl;
	print_bureaucrat(*bureaucratToIncrement);
	std::cout << std::endl;
	print_form(*formSell);
	std::cout << std::endl;
	bureaucratToIncrement->signForm(*formSell);
	std::cout << std::endl;
	print_form(*formSell);
	std::cout << std::endl;
	print_bureaucrat(*bureaucratToIncrement);

	delete formBuy;
	delete formSell;
	delete bureaucratToDecrement;
	delete bureaucratToIncrement;
	return (0);
}
