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

void	FragTrap::highFivesGuys()
{
	const std::string name = this->getName();

	std::cout << name << " want a high fives" << std::endl;
}
