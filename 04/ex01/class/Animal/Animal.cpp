#include "./Animal.hpp"

Animal::Animal(
	std::string type
) {
	this->type = type;
}

Animal::Animal() {}

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
