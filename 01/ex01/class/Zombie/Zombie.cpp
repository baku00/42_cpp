#include "Zombie.hpp"

Zombie::Zombie(
	std::string name
) {
	this->name = name;
	std::cout << "Création du zombie '" << this->name << "'" << std::endl;
}

Zombie::Zombie(){}

Zombie::~Zombie()
{
	std::cout << "Déstruction du zombie '" << this->name << "'" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}