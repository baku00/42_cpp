#include "./Dog.hpp"

Dog::Dog(): Animal("Dog") 
{
	this->brain = new Brain();
	std::cout << "Default constructor of Dog" << std::endl;
}

Dog::Dog(const Dog &dog): Animal()
{
	*this = dog;
	std::cout << "Copy constructor of Dog" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Déstruction du chien: " << this->getType() << std::endl;
	delete this->brain;
}

void	Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
}

Dog &Dog::operator=(const Dog &dog) {
	if (this != &dog)
	{
		this->type = dog.type;
		this->brain = dog.brain;
	}
	return *this;
}
