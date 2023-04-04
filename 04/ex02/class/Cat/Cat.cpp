#include "./Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Création du chat: " << this->getType() << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &cat): Animal(cat.type)
{
	std::cout << "Création du chat: " << this->getType() << std::endl;
	this->brain = new Brain(*cat.brain);
}

Cat::~Cat()
{
	std::cout << "Déstruction du chat: " << this->getType() << std::endl;
	delete this->brain;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}

std::string Cat::getType() const
{
	return this->type;
}

Cat	&Cat::operator=(const Cat &cat)
{
	std::cout << "Assignation operator" << std::endl;
	this->type = cat.type;
	delete this->brain;
	this->brain = new Brain(*cat.brain);
	return *this;
}
