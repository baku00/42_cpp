#include "./Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain &brain){
	std::cout << "Brain copy constructor" << std::endl;
	*this = brain;
}

Brain::~Brain(){
	std::cout << "Default destructor of Brain" << std::endl;
}

void	Brain::printIdeas()
{
	for (int i = 0; i < 100; i++)
		std::cout << this->ideas[i] << std::endl;
}

Brain	&Brain::operator=(const Brain &brain){
	std::cout << "Brain assignation operator" << std::endl;
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = brain.ideas[i];
	}
	return *this;
}