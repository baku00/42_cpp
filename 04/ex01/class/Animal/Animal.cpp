#include "./Animal.hpp"

Animal::Animal(
	std::string type
) {
	this->type = type;
	std::cout << "Animal constructor with type" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = animal;
}

Animal::Animal()
{
	std::cout << "Animal default constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Déstruction de l'animal: " << this->getType() << std::endl;
}

std::string	Animal::getType()
{
	return this->type;
}

void	Animal::makeSound()
{
	std::cout << "Je veux bien emmettre un son mais je ne sais pas quel type d'animal je suis..." << std::endl;
}

Animal	&Animal::operator=(const Animal &animal)
{
	std::cout << "Assignation operator" << std::endl;
	this->type = animal.type;
	return *this;
}
