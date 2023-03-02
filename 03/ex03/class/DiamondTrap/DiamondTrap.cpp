#include "./DiamondTrap.hpp"

DiamondTrap::DiamondTrap(
	std::string name
): ScavTrap(name), FragTrap(name) {
	ClapTrap::name = name;
	FragTrap::hit_point = 100;
	ScavTrap::energy_point = 50;
	FragTrap::attack_damage = 20;
	std::cout << "DiamondTrap créer" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Déstruction de DiamondTrap" << std::endl;
}

/**
 * Getters of properties
*/
std::string	DiamondTrap::getName()
{
	return this->name;
}

int		DiamondTrap::getAttackDamage()
{
	return this->attack_damage;
}

int		DiamondTrap::getEnergyPoint()
{
	return this->energy_point;
}

int		DiamondTrap::getHitPoint()
{
	return this->hit_point;
}

/**
 * Methods
*/
void	ScavTrap::attack(const std::string &target)
{
	const std::string name = this->getName();
	const int attack_damage = this->getAttackDamage();

	if (!ScavTrap::hasEnoughtEnergyPoint())
		return this->notEnoughtEnergyPoint();

	std::cout << "DiamondTrap " << name << std::flush;
	std::cout << " attacks " << target << "," << std::flush;
	std::cout << " causing " << attack_damage << " points of damage!" << std::endl;
	this->removeEnergyPoint();
	this->hit_point -= attack_damage;
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	this->attack_damage = amount;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	if (!DiamondTrap::hasEnoughtEnergyPoint())
		return this->notEnoughtEnergyPoint();

	std::cout << "DiamondTrap be repaired of " << amount << " hit point" << std::endl;
	this->hit_point += amount;
	this->removeEnergyPoint();
}

void	DiamondTrap::display()
{
	std::cout << "Name:\t\t" 		<< this->getName() << std::endl;
	std::cout << "Hit points:\t" 	<< this->getHitPoint() << std::endl;
	std::cout << "Energy points:\t" << this->getEnergyPoint() << std::endl;
}

void	DiamondTrap::guardGate()
{
	const std::string name = this->getName();

	std::cout << name << " gate keeper mode: enabled" << std::endl;
}

/**
 * Manage energy point
*/
bool	DiamondTrap::hasEnoughtEnergyPoint()
{
	return this->energy_point >= 1;
}

void	DiamondTrap::notEnoughtEnergyPoint()
{
	std::cout << this->getName() << " ne possède pas assez de point d'énergie pour effectué une action" << std::endl;
}

void	DiamondTrap::removeEnergyPoint()
{
	this->energy_point -= 1;
}
