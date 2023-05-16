#include "class/Bureaucrat/Bureaucrat.hpp"

int main()
{
	Bureaucrat *bureaucratToDecrement = new Bureaucrat("Patrick", 149);
	std::cout << *bureaucratToDecrement << std::endl;

	Bureaucrat *bureaucratToIncrement = new Bureaucrat("Bruel", 2);
	std::cout << *bureaucratToIncrement << std::endl;

	Form *formSell = new Form("Formulaire de vente", 10, 100);
	Form *formBuy = new Form("Formulaire d'achat", 150, 100);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "======================" << std::endl;
	std::cout << "| Sign form bad form |" << std::endl;
	std::cout << "======================" << std::endl;
	std::cout << *bureaucratToDecrement << std::endl;
	std::cout << std::endl;
	std::cout << *formBuy << std::endl;
	std::cout << std::endl;
	bureaucratToDecrement->signForm(*formSell);
	std::cout << *formBuy << std::endl;
	std::cout << std::endl;
	std::cout << *bureaucratToDecrement << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "====================" << std::endl;
	std::cout << "| Sign form to buy |" << std::endl;
	std::cout << "====================" << std::endl;
	std::cout << *bureaucratToDecrement << std::endl;
	std::cout << std::endl;
	std::cout << *formBuy << std::endl;
	std::cout << std::endl;
	bureaucratToDecrement->signForm(*formBuy);
	std::cout << *formBuy << std::endl;
	std::cout << std::endl;
	std::cout << *bureaucratToDecrement << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "=====================" << std::endl;
	std::cout << "| Sign form to sell |" << std::endl;
	std::cout << "=====================" << std::endl;
	std::cout << *bureaucratToIncrement << std::endl;
	std::cout << std::endl;
	std::cout << *formSell << std::endl;
	std::cout << std::endl;
	bureaucratToIncrement->signForm(*formSell);
	std::cout << std::endl;
	std::cout << *formSell << std::endl;
	std::cout << std::endl;
	std::cout << *bureaucratToIncrement << std::endl;

	delete formBuy;
	delete formSell;
	delete bureaucratToDecrement;
	delete bureaucratToIncrement;
	return (0);
}
