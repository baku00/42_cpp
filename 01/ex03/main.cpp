#include <iostream>
#include "class/Weapon/Weapon.hpp"
#include "class/HumanA/HumanA.hpp"
#include "class/HumanB/HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		std::cout << std::endl;

		HumanA bob("Bob", club);
		std::cout << std::endl;
		std::cout << std::endl;

		bob.attack();

		club.setType("some other type of club");

		bob.attack();
		std::cout << std::endl;
	}
	{
		Weapon club = Weapon("crude spiked club");
		std::cout << std::endl;

		HumanB jim("Jim");
		std::cout << std::endl;
		std::cout << std::endl;

		jim.setWeapon(club);
		std::cout << std::endl;

		jim.attack();
		club.setType("some other type of club");
		jim.attack();
		std::cout << std::endl;
	}

	return (0);
}