#include "./Dog.hpp"

Dog::Dog(): Animal("Dog") {}

Dog::~Dog()
{
	std::cout << "Déstruction du chien: " << this->getType() << std::endl;
}

void	Dog::makeSound()
{
	std::cout << "Wouf" << std::endl;
}
