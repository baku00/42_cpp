#include "./Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Déstruction du chat: " << this->getType() << std::endl;
	delete this->brain;
}

void	Cat::makeSound()
{
	std::cout << "Miaou" << std::endl;
}
