#include "./Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Default constructor" << std::endl;
}

Cat::Cat(const Cat &cat): Animal(cat)
{
	std::cout << "Copy constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Déstruction du chat: " << this->getType() << std::endl;
}

void	Cat::makeSound()
{
	std::cout << "Miaou" << std::endl;
}

Cat &Cat::operator=(const Cat &cat) {
	this->type = cat.type;
	return *this;
}
