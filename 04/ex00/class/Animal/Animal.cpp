#include "./Animal.hpp"

Animal::Animal(
	std::string type
) {
	std::cout << "Constructor with type" << std::endl;
	this->type = type;
}

Animal::Animal(const Animal &animal) {
	*this = animal;
	std::cout << "Copy constructor" << std::endl;
}

Animal::Animal() {
	std::cout << "Default constructor" << std::endl;
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

Animal &Animal::operator=(const Animal &animal) {
	this->type = animal.type;
	return *this;
}
