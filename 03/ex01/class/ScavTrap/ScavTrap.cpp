#include "./ScavTrap.hpp"

/**
 * Constructors
*/
ScavTrap::ScavTrap(
	std::string name
): ClapTrap(name) {
	this->name = name;
	this->hit_point = 100;
	this->energy_point = 50; // Set to 1 for test energy point managers
	this->attack_damage = 20;
	std::cout << "Constructor of ScavTrap with name" << std::endl;
}

ScavTrap::ScavTrap(): ClapTrap()
{
	this->name = "ScavTrap";
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
	std::cout << "Default constructor of ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap): ClapTrap(scavTrap)
{
	*this = scavTrap;
	std::cout << "ScavTrap copier" << std::endl;
}

/**
 * Destructor
*/
ScavTrap::~ScavTrap()
{
	std::cout << "Déstruction de ScavTrap" << std::endl;
}

/**
 * Default Methods
*/
void	ScavTrap::attack(const std::string &target)
{
	const std::string name = this->getName();
	const int attack_damage = this->getAttackDamage();

	if (!this->canMakeAction())
		return this->displayError("ScavTrap");

	std::cout << "ScavTrap " << name << std::flush;
	std::cout << " attacks " << target << "," << std::flush;
	std::cout << " causing " << attack_damage << " points of damage!" << std::endl;
	this->removeEnergyPoint();
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->isDead())
		std::cout << this->getName() << " est déjà mort" << std::endl;
	else
	{
		std::cout << "ScavTrap take damage of " << amount << " hit point" << std::endl;
		this->hit_point -= amount;
		if (this->isDead())
			std::cout << this->getName() << " est mort" << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (!this->canMakeAction())
		return this->displayError("ScavTrap");

	std::cout << "ScavTrap be repaired of " << amount << " hit point" << std::endl;
	this->hit_point += amount;
	this->removeEnergyPoint();
}

void	ScavTrap::display()
{
	std::cout << "ScavTrap" << std::endl;
	std::cout << "Name:\t\t" << this->getName() << std::endl;
	std::cout << "Hit points:\t" << this->getHitPoint() << std::endl;
	std::cout << "Energy points:\t" << this->getEnergyPoint() << std::endl;
	std::cout << "Is Dead:\t" << this->isDead() << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " have enterred in Gate keeper mode" << std::endl;
}

/**
 * Operator
*/
ScavTrap	&ScavTrap::operator=(const ScavTrap &scavTrap)
{
	std::cout << "Copie d'un claptrap" << std::endl;
	this->name = scavTrap.name;
	this->hit_point = scavTrap.hit_point;
	this->energy_point = scavTrap.energy_point;
	this->attack_damage = scavTrap.attack_damage;
	return *this;
}
