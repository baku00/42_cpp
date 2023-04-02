#include "./Daulpin.hpp"

Daulpin::Daulpin(): Animal("Daulpin") {}

Daulpin::~Daulpin()
{
	std::cout << "Déstruction du dauphin: " << this->getType() << std::endl;
}

void	Daulpin::makeSound()
{
	std::cout << "Cricri" << std::endl;
}
