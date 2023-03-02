#include "./Animal.hpp"

Animal::Animal(
	std::string type
) {
	this->type = type;
}

Animal::Animal() {}

Animal::~Animal()
{
	std::cout << "Déstruction de l'animal: " << std::endl;
}
