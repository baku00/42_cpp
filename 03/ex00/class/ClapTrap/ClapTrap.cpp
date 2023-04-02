#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(
	std::string name
) {
	this->name = name;
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
	std::cout << "ClavTrap créer" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Déstruction de ClapTrap" << std::endl;
}

/**
 * Getters of properties
*/
std::string	ClapTrap::getName()
{
	return this->name;
}

int	ClapTrap::getAttackDamage()
{
	return this->attack_damage;
}

int	ClapTrap::getEnergyPoint()
{
	return this->energy_point;
}

int		ClapTrap::getHitPoint()
{
	return this->hit_point;
}

/**
 * Methods
*/
void	ClapTrap::attack(const std::string &target)
{
	const std::string name = this->getName();
	const int attack_damage = this->getAttackDamage();

	if (!ClapTrap::hasEnoughtEnergyPoint())
		return this->notEnoughtEnergyPoint();

	std::cout << "ClapTrap " << name << std::flush;
	std::cout << " attacks " << target << "," << std::flush;
	std::cout << " causing " << attack_damage << " points of damage!" << std::endl;
	this->removeEnergyPoint();
	this->hit_point -= attack_damage;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->attack_damage = amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!ClapTrap::hasEnoughtEnergyPoint())
		return this->notEnoughtEnergyPoint();

	std::cout << "ClapTrap be repaired of " << amount << " hit point" << std::endl;
	this->hit_point += amount;
	this->removeEnergyPoint();
}

void	ClapTrap::display()
{
	std::cout << "Name:\t\t" << this->getName() << std::endl;
	std::cout << "Hit points:\t" << this->getHitPoint() << std::endl;
	std::cout << "Energy points:\t" << this->getEnergyPoint() << std::endl;
}

/**
 * Manage energy point
*/
bool	ClapTrap::hasEnoughtEnergyPoint()
{
	return this->energy_point >= 1;
}

void	ClapTrap::notEnoughtEnergyPoint()
{
	std::cout << this->getName() << " ne possède pas assez de point d'énergie pour effectué une action" << std::endl;
}

void	ClapTrap::removeEnergyPoint()
{
	this->energy_point -= 1;
}
