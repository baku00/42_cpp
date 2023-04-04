#include "class/ClapTrap/ClapTrap.hpp"

int main()
{
	ClapTrap	soldat("Soldat");

/**
 * Programme begin
*/
	std::cout << std::endl;
	std::cout << "Démarrage du programme" << std::endl;
	std::cout << std::endl;

	soldat.display();
	std::cout << std::endl;
	soldat.attack("Reaper");
	std::cout << std::endl;
	soldat.display();
	std::cout << std::endl;
	soldat.takeDamage(10);
	std::cout << std::endl;
	soldat.display();
	std::cout << std::endl;
	soldat.beRepaired(5);
	std::cout << std::endl;
	soldat.display();
	std::cout << std::endl;
	return (0);
}
