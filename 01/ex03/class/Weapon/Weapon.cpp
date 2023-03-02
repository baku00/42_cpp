#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::Weapon()
{
	this->type = "";
}

Weapon::~Weapon()
{
	// Destructeur vide car il n'y a pas de mémoire dynamique allouée dans cette classe.
}

std::string Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}