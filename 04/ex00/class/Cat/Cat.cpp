#include "./Cat.hpp"

Cat::Cat(): Animal("Cat")
{}

Cat::~Cat()
{
	std::cout << "Déstruction du chat: " << this->getType() << std::endl;
}

void	Cat::makeSound()
{
	std::cout << "Miaou" << std::endl;
}

