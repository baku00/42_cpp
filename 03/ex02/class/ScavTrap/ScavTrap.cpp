#include "./ScavTrap.hpp"

ScavTrap::ScavTrap(
	std::string name
): ClapTrap(name) {
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap créer" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Déstruction de ScavTrap" << std::endl;
}

/**
 * Getters of properties
*/
std::string	ScavTrap::getName()
{
	return this->name;
}

int		ScavTrap::getAttackDamage()
{
	return this->attack_damage;
}

int		ScavTrap::getEnergyPoint()
{
	return this->energy_point;
}

int		ScavTrap::getHitPoint()
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

	std::cout << "ScavTrap " << name << std::flush;
	std::cout << " attacks " << target << "," << std::flush;
	std::cout << " causing " << attack_damage << " points of damage!" << std::endl;
	this->removeEnergyPoint();
	this->hit_point -= attack_damage;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	this->attack_damage = amount;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (!ScavTrap::hasEnoughtEnergyPoint())
		return this->notEnoughtEnergyPoint();

	std::cout << "ScavTrap be repaired of " << amount << " hit point" << std::endl;
	this->hit_point += amount;
	this->removeEnergyPoint();
}

void	ScavTrap::display()
{
	std::cout << "Name:\t\t" 		<< this->getName() << std::endl;
	std::cout << "Hit points:\t" 	<< this->getHitPoint() << std::endl;
	std::cout << "Energy points:\t" << this->getEnergyPoint() << std::endl;
}

void	ScavTrap::guardGate()
{
	const std::string name = this->getName();

	std::cout << name << " gate keeper mode: enabled" << std::endl;
}

/**
 * Manage energy point
*/
bool	ScavTrap::hasEnoughtEnergyPoint()
{
	return this->energy_point >= 1;
}

void	ScavTrap::notEnoughtEnergyPoint()
{
	std::cout << this->getName() << " ne possède pas assez de point d'énergie pour effectué une action" << std::endl;
}

void	ScavTrap::removeEnergyPoint()
{
	this->energy_point -= 1;
}
