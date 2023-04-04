#include "class/ClapTrap/ClapTrap.hpp"
#include "class/ScavTrap/ScavTrap.hpp"

int main()
{
	ClapTrap claptrap("Soldat");
	ScavTrap scavtrap("Doomfist");

	std::cout << std::endl;
	std::cout << "Démarrage du programme" << std::endl;
	std::cout << std::endl;

	std::cout << "Display of ClapTrap" << std::endl;
	claptrap.display();
	std::cout << std::endl;
	std::cout << "Display of ScavTrap" << std::endl;
	scavtrap.display();

	std::cout << std::endl;
	std::cout << "Attaque de " << claptrap.getName() << " sur " << scavtrap.getName() << std::endl;
	claptrap.attack(scavtrap.getName());
	scavtrap.takeDamage(claptrap.getAttackDamage());
	std::cout << std::endl;
	std::cout << "Attaque de " << scavtrap.getName() << " sur " << claptrap.getName() << std::endl;
	scavtrap.attack(claptrap.getName());
	claptrap.takeDamage(scavtrap.getAttackDamage());
	std::cout << std::endl;

	std::cout << "Display of ClapTrap" << std::endl;
	claptrap.display();
	std::cout << std::endl;
	std::cout << "Display of ScavTrap" << std::endl;
	scavtrap.display();
	
	scavtrap.guardGate();

	std::cout << std::endl;
	std::cout << "Destruction des objets" << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	return (0);
}
