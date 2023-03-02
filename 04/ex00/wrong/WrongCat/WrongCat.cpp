#include "./WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{}

WrongCat::~WrongCat()
{
	std::cout << "Déstruction du mauvais chat: " << this->getType() << std::endl;
}

void	WrongCat::makeSound()
{
	std::cout << "Oups mauvais chat" << std::endl;
}
