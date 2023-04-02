#include "Zombie.hpp"

Zombie::Zombie(
	std::string name
) {
	std::cout << "Création du zombie '" << name << "'" << std::endl;
	this->name = name;
	std::cout << "Le zombie '" << this->name << "' a été créé" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Déstruction du zombie '" << this->name << "'" << std::endl;
	std::cout << "Le zombie '" << this->name << "' a été détruit" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
