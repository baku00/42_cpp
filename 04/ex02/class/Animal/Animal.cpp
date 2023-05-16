#include "./Animal.hpp"

Animal::Animal(
	std::string type
) {
	std::cout << "Constructor of Animal with type" << std::endl;
	this->type = type;
}

Animal::Animal(const Animal &animal) {
	*this = animal;
	std::cout << "Copy constructor of Animal" << std::endl;
}

Animal::Animal() {
	std::cout << "Default constructor of Animal" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Déstruction de l'animal: " << this->getType() << std::endl;
}

std::string	Animal::getType() const
{
	return this->type;
}

Animal &Animal::operator=(const Animal &animal) {
	if (this != &animal)
		this->type = animal.type;
	return *this;
}
