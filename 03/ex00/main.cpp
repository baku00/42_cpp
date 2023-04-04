#include "class/ClapTrap/ClapTrap.hpp"

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

/**
 * Programme begin
*/
	std::cout << std::endl;
	std::cout << "Démarrage du programme" << std::endl;
	std::cout << std::endl;

	std::cout << getSeparator("1") << "\n" << std::endl;
	soldat.display();
	std::cout << "\n" << getSeparator("2") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("3") << "\n" << std::endl;
	soldat.attack("Reaper");
	std::cout << "\n" << getSeparator("4") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("5") << "\n" << std::endl;
	soldat.display();
	std::cout << "\n" << getSeparator("6") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("7") << "\n" << std::endl;
	soldat.takeDamage(7);
	std::cout << "\n" << getSeparator("8") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("9") << "\n" << std::endl;
	soldat.display();
	std::cout << "\n" << getSeparator("10") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("11") << "\n" << std::endl;
	soldat.beRepaired(5);
	std::cout << "\n" << getSeparator("12") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("13") << "\n" << std::endl;
	soldat.display();
	std::cout << "\n" << getSeparator("14") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("15") << "\n" << std::endl;
	soldat.takeDamage(8);
	std::cout << "\n" << getSeparator("16") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("17") << "\n" << std::endl;
	soldat.display();
	std::cout << "\n" << getSeparator("18") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("19") << "\n" << std::endl;
	soldat.beRepaired(5);
	std::cout << "\n" << getSeparator("20") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("21") << "\n" << std::endl;
	soldat.display();
	std::cout << "\n" << getSeparator("22") << std::endl;
	std::cout << std::endl;
	std::cout << getSeparator("23") << "\n" << std::endl;
	soldat.takeDamage(1);
	std::cout << "\n" << getSeparator("24") << std::endl;
	return (0);
}
