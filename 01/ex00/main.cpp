#include "class/Zombie/Zombie.hpp"
#include "src/src.hpp"

int main()
{
	Zombie *zombie = new Zombie("Carlos");
	zombie->announce();

	std::cout << std::endl;
	randomChump("Marco");
	std::cout << std::endl;

	Zombie *new_zombie = newZombie("Chorlas");
	new_zombie->announce();

	delete new_zombie;
	delete zombie;
	return (0);
}