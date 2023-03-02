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

std::string	Cat::getType() const
{
	return this->type;
}

void	Cat::makeSound() const
{
	std::cout << "Wouf" << std::endl;
}
