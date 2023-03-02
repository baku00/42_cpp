#include "./Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Déstruction du chien: " << this->getType() << std::endl;
	delete this->brain;
}

std::string	Dog::getType() const
{
	return this->type;
}

void	Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
}
