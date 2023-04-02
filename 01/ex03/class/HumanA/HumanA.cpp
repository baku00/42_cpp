#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon)
{
	std::cout << "Création de l'humain " << name << " avec l'arme " << weapon.getType() << std::endl;
	this->_name = name;
	std::cout << "L'humain " << name << "a été créé avec l'arme " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destruction de l'humain " << this->_name << " avec l'arme " << this->_weapon.getType() << std::endl;
	std::cout << "L'humain " << this->_name << " a été détruit avec l'arme " << this->_weapon.getType() << std::endl;
}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
