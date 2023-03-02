#include "class/ClapTrap/ClapTrap.hpp"
#include "class/ScavTrap/ScavTrap.hpp"
#include "class/FragTrap/FragTrap.hpp"

int main()
{
	ClapTrap *claptrap	= new ClapTrap("ClapTrap");
	std::cout << std::endl;
	ScavTrap *scavtrap	= new ScavTrap("ScavTrap");
	std::cout << std::endl;
	FragTrap *fragtrap	= new FragTrap("FragTrap");

/**
 * Programme begin
*/
	std::cout << std::endl;
	std::cout << "Démarrage du programme" << std::endl;
	std::cout << std::endl;

	claptrap->display();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

/**
 * ====================
 * | TEST DE CLAPTRAP |
 * ====================
*/

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


/**
 * ====================
 * | TEST DE SCAVTRAP |
 * ====================
*/

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



/**
 * ====================
 * | TEST DE FRAGTRAP |
 * ====================
*/

	fragtrap->display();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

/**
 * First attack
*/
	std::cout << "Exécution numéro 1" << std::endl;
	std::cout << std::endl;
	fragtrap->takeDamage(10);

	fragtrap->attack("Doomfirst");
	std::cout << std::endl;

	fragtrap->display();
	std::cout << std::endl;

	fragtrap->beRepaired(15);
	std::cout << std::endl;

	fragtrap->display();
	std::cout << std::endl;

	fragtrap->highFivesGuys();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

/**
 * Second attack
*/
	std::cout << "Exécution numéro 2" << std::endl;
	std::cout << std::endl;
	fragtrap->takeDamage(150);

	fragtrap->attack("Doomfirst");
	std::cout << std::endl;

	fragtrap->display();
	std::cout << std::endl;

	fragtrap->beRepaired(20);
	std::cout << std::endl;

	fragtrap->display();
	std::cout << std::endl;

	fragtrap->highFivesGuys();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	for (size_t i = 0; i < 5; i++)
	{
		std::cout << "Exécution numéro " << i + 3 << std::endl;
		std::cout << std::endl;
		fragtrap->takeDamage(15);

		fragtrap->attack("Doomfirst");
		std::cout << std::endl;

		fragtrap->display();
		std::cout << std::endl;

		fragtrap->beRepaired(20);
		std::cout << std::endl;

		fragtrap->display();
		std::cout << std::endl;

		fragtrap->highFivesGuys();
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}


	std::cout << std::endl;

	delete claptrap;
	std::cout << std::endl;
	delete scavtrap;
	std::cout << std::endl;
	delete fragtrap;
	return (0);
}
