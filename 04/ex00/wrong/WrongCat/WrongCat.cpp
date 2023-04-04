#include "./WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "Default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat): WrongAnimal(wrongCat.type)
{
	std::cout << "Copy constructor" << std::endl;
	*this = wrongCat;
}

WrongCat::~WrongCat()
{
	std::cout << "Déstruction du mauvais chat: " << this->getType() << std::endl;
}

void	WrongCat::makeSound()
{
	std::cout << "Oups mauvais chat" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &wrongCat)
{
	std::cout << "Assignation operator" << std::endl;
	this->type = wrongCat.type;
	return *this;
}