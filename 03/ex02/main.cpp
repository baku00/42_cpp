#include "class/ClapTrap/ClapTrap.hpp"
#include "class/ScavTrap/ScavTrap.hpp"
#include "class/FragTrap/FragTrap.hpp"

std::string	getSeparator(std::string str)
{
	std::string	separator = "";
	for (size_t i = 0; i < 10; i++)
		separator += str + "/";
	return (separator);
}

int main()
{
	ClapTrap	soldat("Soldat");
	ScavTrap	doomfist("Doomfist");
	FragTrap	reaper("Reaper");

/**
 * Programme begin
*/
	std::cout << std::endl;
	std::cout << "Démarrage du programme" << std::endl;
	std::cout << std::endl;

	std::cout << getSeparator("1") << "\n" << std::endl;
	reaper.display();
	std::cout << "\n" << getSeparator("2") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("3") << "\n" << std::endl;
	reaper.attack("Reaper");
	std::cout << "\n" << getSeparator("4") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("5") << "\n" << std::endl;
	reaper.display();
	std::cout << "\n" << getSeparator("6") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("7") << "\n" << std::endl;
	reaper.takeDamage(50);
	reaper.highFivesGuys();
	reaper.highFivesGuys();
	std::cout << "\n" << getSeparator("8") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("9") << "\n" << std::endl;
	reaper.display();
	std::cout << "\n" << getSeparator("10") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("11") << "\n" << std::endl;
	reaper.beRepaired(25);
	std::cout << "\n" << getSeparator("12") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("13") << "\n" << std::endl;
	reaper.display();
	std::cout << "\n" << getSeparator("14") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("15") << "\n" << std::endl;
	reaper.takeDamage(125);
	std::cout << "\n" << getSeparator("16") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("17") << "\n" << std::endl;
	reaper.display();
	std::cout << "\n" << getSeparator("18") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("19") << "\n" << std::endl;
	reaper.beRepaired(5);
	std::cout << "\n" << getSeparator("20") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("21") << "\n" << std::endl;
	reaper.display();
	std::cout << "\n" << getSeparator("22") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("23") << "\n" << std::endl;
	reaper.takeDamage(100);
	reaper.highFivesGuys();
	std::cout << "\n" << getSeparator("24") << std::endl;
	return (0);
}
