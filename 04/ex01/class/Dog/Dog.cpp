#include "./Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	this->brain = new Brain();
	std::cout << "Création du chien: " << this->getType() << std::endl;
}

Dog::Dog(const Dog &dog): Animal(dog.type)
{
	this->brain = new Brain(*dog.brain);
	std::cout << "Copy of constructor of dog: " << this->getType() << std::endl;
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

Dog	&Dog::operator=(const Dog &dog)
{
	std::cout << "Assignation operator" << std::endl;
	this->type = dog.type;
	delete this->brain;
	this->brain = new Brain(*dog.brain);
	return *this;
}
