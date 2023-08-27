#include "./Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Default constructor of Cat" << std::endl;
}

Cat::Cat(const Cat &cat): Animal()
{
	*this = cat;
	std::cout << "Copy constructor of Cat" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Déstruction du chat: " << this->getType() << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}

Cat &Cat::operator=(const Cat &cat) {
	if (this != &cat)
		this->type = cat.type;
	return *this;
}
