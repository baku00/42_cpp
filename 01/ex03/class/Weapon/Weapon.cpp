#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	std::cout << "Création de l'arme " << type << std::endl;
	this->type = type;
	std::cout << "L'arme " << type << "a été créée" << std::endl;
}

Weapon::Weapon()
{
	std::cout << "Création d'une arme vide" << std::endl;
	this->type = "";
	std::cout << "Arme vide créée" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Destruction de l'arme " << this->type << std::endl;
	std::cout << "L'arme " << this->type << " a été détruite" << std::endl;
}

const std::string &Weapon::getType() const
{
	return (this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}