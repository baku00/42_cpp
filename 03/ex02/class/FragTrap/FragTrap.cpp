#include "./FragTrap.hpp"

/**
 * Constructors
*/
FragTrap::FragTrap(
	std::string name
): ClapTrap(name) {
	this->name = name;
	this->hit_point = 100;
	this->energy_point = 100; // Set to 1 for test energy point managers
	this->attack_damage = 30;
	std::cout << "Constructor of FragTrap with name" << std::endl;
}

FragTrap::FragTrap(): ClapTrap()
{
	this->name = "FragTrap";
	this->hit_point = 10;
	this->energy_point = 100;
	this->attack_damage = 30;
	std::cout << "Default constructor of FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap): ClapTrap(fragTrap)
{
	*this = fragTrap;
	std::cout << "FragTrap copier" << std::endl;
}

/**
 * Destructor
*/
FragTrap::~FragTrap()
{
	std::cout << "Déstruction de FragTrap" << std::endl;
}

/**
 * Default Methods
*/
void	FragTrap::attack(const std::string &target)
{
	const std::string name = this->getName();
	const int attack_damage = this->getAttackDamage();

	if (!this->canMakeAction())
		return this->displayError("FragTrap");

	std::cout << "FragTrap " << name << std::flush;
	std::cout << " attacks " << target << "," << std::flush;
	std::cout << " causing " << attack_damage << " points of damage!" << std::endl;
	this->removeEnergyPoint();
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->isDead())
		std::cout << this->getName() << " est déjà mort" << std::endl;
	else
	{
		std::cout << "FragTrap take damage of " << amount << " hit point" << std::endl;
		this->hit_point -= amount;
		if (this->isDead())
			std::cout << this->getName() << " est mort" << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (!this->canMakeAction())
		return this->displayError("FragTrap");

	std::cout << "FragTrap be repaired of " << amount << " hit point" << std::endl;
	this->hit_point += amount;
	this->removeEnergyPoint();
}

void	FragTrap::display()
{
	std::cout << "FragTrap" << std::endl;
	std::cout << "Name:\t\t" << this->getName() << std::endl;
	std::cout << "Hit points:\t" << this->getHitPoint() << std::endl;
	std::cout << "Energy points:\t" << this->getEnergyPoint() << std::endl;
	std::cout << "Is Dead:\t" << this->isDead() << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (!this->canMakeAction())
		return this->displayError("FragTrap");
	std::cout << "FragTrap ask a High five" << std::endl;
}

/**
 * Operator
*/
FragTrap	&FragTrap::operator=(const FragTrap &fragTrap)
{
	std::cout << "Copie d'un fragtrap" << std::endl;
	this->name = fragTrap.name;
	this->hit_point = fragTrap.hit_point;
	this->energy_point = fragTrap.energy_point;
	this->attack_damage = fragTrap.attack_damage;
	return *this;
}
