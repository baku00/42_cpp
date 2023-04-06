#include "./WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "Default constructor of wrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat): WrongAnimal(wrongCat.type)
{
	std::cout << "Copy constructor of wrongCat" << std::endl;
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
	if (this != &wrongCat)
		this->type = wrongCat.type;
	return *this;
}
