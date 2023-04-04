#include "./FragTrap.hpp"

FragTrap::FragTrap(
	std::string name
): ClapTrap(name) {
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
	std::cout << "Default constructor of FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragtrap): ClapTrap(fragtrap)
{
	*this = fragtrap;
	std::cout << "Copy of initial constructor of FragTrap" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destroy of FragTrap" << std::endl;
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

/**
 * Operator
*/
FragTrap&	FragTrap::operator=(const FragTrap& fragtrap)
{
	this->name = fragtrap.name;
	this->hit_point = fragtrap.hit_point;
	this->energy_point = fragtrap.energy_point;
	this->attack_damage = fragtrap.attack_damage;
	return *this;
}
