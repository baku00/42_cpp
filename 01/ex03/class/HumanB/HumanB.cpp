#include "HumanB.hpp"

HumanB::HumanB(std::string name): weapon(NULL)
{
	std::cout << "Création de l'humain B " << name << " avec l'arme " << std::endl;
	this->name = name;
	std::cout << "L'humain B " << name << "a été créé avec l'arme " << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Destruction de l'humain B " << this->name << " avec l'arme " << this->weapon->getType() << std::endl;
	std::cout << "L'humain B " << this->name << " a été détruit avec l'arme " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
