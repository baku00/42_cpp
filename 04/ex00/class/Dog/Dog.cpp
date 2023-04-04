#include "./Dog.hpp"

Dog::Dog(): Animal("Dog") 
{
	std::cout << "Default constructor" << std::endl;
}

Dog::Dog(const Dog &dog): Animal(dog)
{
	std::cout << "Copy constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Déstruction du chien: " << this->getType() << std::endl;
}

void	Dog::makeSound()
{
	std::cout << "Wouf" << std::endl;
}

Dog &Dog::operator=(const Dog &dog) {
	this->type = dog.type;
	return *this;
}
