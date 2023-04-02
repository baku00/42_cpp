#include "class/Zombie/Zombie.hpp"
#include "src/src.hpp"

int main()
{
	const int HORDE_SIZE = 8;

	Zombie *zombie = new Zombie("Carlos");
	zombie->announce();

	std::cout << std::endl;
	Zombie *horde = zombieHorde(HORDE_SIZE, "Horde Zombie");
	for (int i = 0; i < HORDE_SIZE; i++)
		horde[i].announce();

	delete zombie;
	delete[] horde;
	return (0);
}
