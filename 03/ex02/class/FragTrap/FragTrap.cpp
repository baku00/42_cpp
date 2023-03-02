#include "./FragTrap.hpp"

FragTrap::FragTrap(
	std::string name
): ClapTrap(name) {
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap créer" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Déstruction de FragTrap" << std::endl;
}

/**
 * Getters of properties
*/
std::string	FragTrap::getName()
{
	return this->name;
}

int		FragTrap::getAttackDamage()
{
	return this->attack_damage;
}

int		FragTrap::getEnergyPoint()
{
	return this->energy_point;
}

int		FragTrap::getHitPoint()
{
	return this->hit_point;
}

/**
 * Methods
*/
void	FragTrap::attack(const std::string &target)
{
	const std::string name = this->getName();
	const int attack_damage = this->getAttackDamage();

	if (!FragTrap::hasEnoughtEnergyPoint())
		return this->notEnoughtEnergyPoint();

	std::cout << "FragTrap " << name << std::flush;
	std::cout << " attacks " << target << "," << std::flush;
	std::cout << " causing " << attack_damage << " points of damage!" << std::endl;
	this->removeEnergyPoint();
	this->hit_point -= attack_damage;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	this->attack_damage = amount;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (!FragTrap::hasEnoughtEnergyPoint())
		return this->notEnoughtEnergyPoint();

	std::cout << "FragTrap be repaired of " << amount << " hit point" << std::endl;
	this->hit_point += amount;
	this->removeEnergyPoint();
}

void	FragTrap::display()
{
	std::cout << "Name:\t\t" 		<< this->getName() << std::endl;
	std::cout << "Hit points:\t" 	<< this->getHitPoint() << std::endl;
	std::cout << "Energy points:\t" << this->getEnergyPoint() << std::endl;
}

void	FragTrap::highFivesGuys()
{
	const std::string name = this->getName();

	std::cout << name << " ask a high fives !" << std::endl;
}

/**
 * Manage energy point
*/
bool	FragTrap::hasEnoughtEnergyPoint()
{
	return this->energy_point >= 1;
}

void	FragTrap::notEnoughtEnergyPoint()
{
	std::cout << this->getName() << " ne possède pas assez de point d'énergie pour effectué une action" << std::endl;
}

void	FragTrap::removeEnergyPoint()
{
	this->energy_point -= 1;
}
