#include "class/Zombie/Zombie.hpp"
#include "src/src.hpp"

int main()
{
	Zombie *zombie = new Zombie("Carlos");
	zombie->announce();
	delete zombie;

	std::cout << std::endl;
	randomChump("Marco");
	std::cout << std::endl;

	Zombie *new_zombie = newZombie("Chorlas");
	new_zombie->announce();
	delete new_zombie;
	return (0);
}