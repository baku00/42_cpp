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

void	Dog::makeSound()
{
	std::cout << "Wouf" << std::endl;
}
