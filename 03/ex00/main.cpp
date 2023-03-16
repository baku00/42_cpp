#include "class/ClapTrap/ClapTrap.hpp"

int main()
{
	ClapTrap *soldat76	= new ClapTrap("Soldat 76");

/**
 * Programme begin
*/
	std::cout << std::endl;
	std::cout << "Démarrage du programme" << std::endl;
	std::cout << std::endl;

	soldat76->display();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

/**
 * First attack
*/
	std::cout << "Exécution numéro 1" << std::endl;
	std::cout << std::endl;
	soldat76->takeDamage(1);

	soldat76->attack("Doomfirst");
	std::cout << std::endl;

	soldat76->display();
	std::cout << std::endl;

	soldat76->beRepaired(1);
	std::cout << std::endl;

	soldat76->display();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

/**
 * Second attack
*/
	std::cout << "Exécution numéro 2" << std::endl;
	std::cout << std::endl;
	soldat76->takeDamage(1);

	soldat76->attack("Doomfirst");
	std::cout << std::endl;

	soldat76->display();
	std::cout << std::endl;

	soldat76->beRepaired(1);
	std::cout << std::endl;

	soldat76->display();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	for (size_t i = 0; i < 5; i++)
	{
			std::cout << "Exécution numéro " << i + 3 << std::endl;
			std::cout << std::endl;
			soldat76->takeDamage(1);

			soldat76->attack("Doomfirst");
			std::cout << std::endl;

			soldat76->display();
			std::cout << std::endl;

			soldat76->beRepaired(1);
			std::cout << std::endl;

			soldat76->display();
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
	}
	
	std::cout << std::endl;

	delete soldat76;
	return (0);
}
