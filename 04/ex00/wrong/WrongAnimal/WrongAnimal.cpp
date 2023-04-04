#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal(
	std::string type
) {
	this->type = type;
	std::cout << "Constructor with type" << std::endl;
}

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal)
{
	std::cout << "Copy constructor" << std::endl;
	*this = wrongAnimal;
}

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

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	std::cout << "Assignation operator" << std::endl;
	this->type = wrongAnimal.type;
	return *this;
}
