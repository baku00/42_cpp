#include "class/Zombie/Zombie.hpp"
#include "src/src.hpp"

int main()
{
	Zombie *zombie = new Zombie("Carlos");
	zombie->announce();
	delete zombie;

	std::cout << std::endl;
	Zombie *horde = zombieHorde(10, "Horde Zombie");
	for (int i = 0; i < 10; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}