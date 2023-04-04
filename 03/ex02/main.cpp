#include "class/ClapTrap/ClapTrap.hpp"
#include "class/ScavTrap/ScavTrap.hpp"
#include "class/FragTrap/FragTrap.hpp"

int main()
{
	ClapTrap	claptrap("ClapTrap");
	ScavTrap	scavtrap("ScavTrap");
	FragTrap	fragtrap("FragTrap");

	std::cout << std::endl;
	std::cout << "Démarrage du programme" << std::endl;
	std::cout << std::endl;

	std::cout << "Display of ClapTrap" << std::endl;
	claptrap.display();
	std::cout << std::endl;

	std::cout << "Display of ScavTrap" << std::endl;
	scavtrap.display();
	std::cout << std::endl;

	std::cout << "Display of FragTrap" << std::endl;
	fragtrap.display();
	std::cout << std::endl;

	std::cout << "Attack of ClapTrap on ScavTrap" << std::endl;
	claptrap.attack(scavtrap.getName());
	scavtrap.takeDamage(claptrap.getAttackDamage());
	std::cout << std::endl;

	std::cout << "Attack of ScavTrap on FragTrap" << std::endl;
	scavtrap.attack(fragtrap.getName());
	fragtrap.takeDamage(scavtrap.getAttackDamage());
	std::cout << std::endl;

	std::cout << "Attack of FragTrap on ClapTrap" << std::endl;
	fragtrap.attack(claptrap.getName());
	claptrap.takeDamage(fragtrap.getAttackDamage());
	std::cout << std::endl;

	std::cout << "Display of ClapTrap" << std::endl;
	claptrap.display();
	std::cout << std::endl;

	std::cout << "Display of ScavTrap" << std::endl;
	scavtrap.display();
	std::cout << std::endl;

	std::cout << "Display of FragTrap" << std::endl;
	fragtrap.display();
	std::cout << std::endl;

	std::cout << "Attack of ClapTrap on ScavTrap" << std::endl;
	claptrap.attack(scavtrap.getName());
	scavtrap.takeDamage(claptrap.getAttackDamage());
	std::cout << std::endl;

	std::cout << "Attack of ScavTrap on FragTrap" << std::endl;
	scavtrap.attack(fragtrap.getName());
	fragtrap.takeDamage(scavtrap.getAttackDamage());
	std::cout << std::endl;

	std::cout << "Attack of FragTrap on ClapTrap" << std::endl;
	fragtrap.attack(claptrap.getName());
	claptrap.takeDamage(fragtrap.getAttackDamage());
	std::cout << std::endl;

	std::cout << "Display of ClapTrap" << std::endl;
	claptrap.display();
	std::cout << std::endl;

	std::cout << "Display of ScavTrap" << std::endl;
	scavtrap.display();
	std::cout << std::endl;

	std::cout << "Display of FragTrap" << std::endl;
	fragtrap.display();
	std::cout << std::endl;

	std::cout << "ScavTrap go in guardGate" << std::endl;
	scavtrap.guardGate();
	std::cout << std::endl;

	std::cout << "FragTrap go in highFivesGuys" << std::endl;
	fragtrap.highFivesGuys();
	std::cout << std::endl;
	return (0);
}
