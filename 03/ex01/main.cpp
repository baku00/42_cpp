#include "class/ClapTrap/ClapTrap.hpp"
#include "class/ScavTrap/ScavTrap.hpp"

ClapTrap	*execute_claptrap()
{
	ClapTrap *claptrap	= new ClapTrap("ClapTrap");
	std::cout << std::endl;

	claptrap->display();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	/**
 * First attack
*/
	std::cout << "Exécution numéro 1" << std::endl;
	std::cout << std::endl;
	claptrap->takeDamage(10);

	claptrap->attack("Doomfirst");
	std::cout << std::endl;

	claptrap->display();
	std::cout << std::endl;

	claptrap->beRepaired(15);
	std::cout << std::endl;

	claptrap->display();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

/**
 * Second attack
*/
	std::cout << "Exécution numéro 2" << std::endl;
	std::cout << std::endl;
	claptrap->takeDamage(150);

	claptrap->attack("Doomfirst");
	std::cout << std::endl;

	claptrap->display();
	std::cout << std::endl;

	claptrap->beRepaired(20);
	std::cout << std::endl;

	claptrap->display();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	for (size_t i = 0; i < 5; i++)
	{
			std::cout << "Exécution numéro " << i + 3 << std::endl;
			std::cout << std::endl;
			claptrap->takeDamage(15);

			claptrap->attack("Doomfirst");
			std::cout << std::endl;

			claptrap->display();
			std::cout << std::endl;

			claptrap->beRepaired(20);
			std::cout << std::endl;

			claptrap->display();
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
	}

	return (claptrap);
}

ScavTrap	*execute_scavtrap()
{
	ScavTrap *scavtrap	= new ScavTrap("ScavTrap");

	scavtrap->display();

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

/**
 * First attack
*/
	std::cout << "Exécution numéro 1" << std::endl;
	std::cout << std::endl;
	scavtrap->takeDamage(10);

	scavtrap->attack("Doomfirst");
	std::cout << std::endl;

	scavtrap->display();
	std::cout << std::endl;

	scavtrap->beRepaired(15);
	std::cout << std::endl;

	scavtrap->display();
	std::cout << std::endl;

	scavtrap->guardGate();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

/**
 * Second attack
*/
	std::cout << "Exécution numéro 2" << std::endl;
	std::cout << std::endl;
	scavtrap->takeDamage(150);

	scavtrap->attack("Doomfirst");
	std::cout << std::endl;

	scavtrap->display();
	std::cout << std::endl;

	scavtrap->beRepaired(20);
	std::cout << std::endl;

	scavtrap->display();
	std::cout << std::endl;

	scavtrap->guardGate();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	for (size_t i = 0; i < 5; i++)
	{
		std::cout << "Exécution numéro " << i + 3 << std::endl;
		std::cout << std::endl;
		scavtrap->takeDamage(15);

		scavtrap->attack("Doomfirst");
		std::cout << std::endl;

		scavtrap->display();
		std::cout << std::endl;

		scavtrap->beRepaired(20);
		std::cout << std::endl;

		scavtrap->display();
		std::cout << std::endl;

		scavtrap->guardGate();
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}

	return (scavtrap);
}

int main()
{
	ClapTrap *claptrap;
	ScavTrap *scavtrap;

	std::cout << std::endl;
	std::cout << "Démarrage du programme" << std::endl;
	std::cout << std::endl;

	claptrap	= execute_claptrap();
	std::cout << std::endl;
	scavtrap	= execute_scavtrap();

	std::cout << std::endl;

	delete claptrap;
	std::cout << std::endl;
	delete scavtrap;
	return (0);
}
