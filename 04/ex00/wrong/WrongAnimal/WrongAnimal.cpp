#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal(
	std::string type
) {
	this->type = type;
}

WrongAnimal::WrongAnimal() {}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Déstruction du mauvais animal: " << this->getType() << std::endl;
}

std::string	WrongAnimal::getType()
{
	return this->type;
}

void	WrongAnimal::makeSound()
{
	std::cout << "Oups mauvais animal..." << std::endl;
}