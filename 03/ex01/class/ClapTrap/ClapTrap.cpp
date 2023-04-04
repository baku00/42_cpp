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

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	*this = clapTrap;
	std::cout << "ClapTrap copier" << std::endl;
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
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->isDead())
		std::cout << this->getName() << " est déjà mort" << std::endl;
	else
	{
		std::cout << "ClapTrap take damage of " << amount << " hit point" << std::endl;
		this->hit_point -= amount;
		if (this->isDead())
			std::cout << this->getName() << " est mort" << std::endl;
	}
}

bool	ClapTrap::isDead()
{
	return this->getHitPoint() <= 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->isDead())
	{
		std::cout << this->getName() << " est mort, il ne peut pas être réparer" << std::endl;
		return;
	}

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
	std::cout << "Is Dead:\t" << this->isDead() << std::endl;
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

/**
 * Operator
*/
ClapTrap	&ClapTrap::operator=(const ClapTrap &clapTrap)
{
	std::cout << "Copie d'un claptrap" << std::endl;
	this->name = clapTrap.name;
	this->hit_point = clapTrap.hit_point;
	this->energy_point = clapTrap.energy_point;
	this->attack_damage = clapTrap.attack_damage;
	return *this;
}
