#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal(
	std::string type
) {
	this->type = type;
	std::cout << "Constructor of WrongAnimal with type" << std::endl;
}

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal)
{
	std::cout << "Copy constructor of WrongAnimal" << std::endl;
	*this = wrongAnimal;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Déstruction du wrongAnimal: " << this->getType() << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Oups mauvais animal..." << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	if (this != &wrongAnimal)
		this->type = wrongAnimal.type;
	return *this;
}
