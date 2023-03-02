#include "src.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*	horde = new Zombie[N];
	char		buffer[10];
	std::string	index;

	for (int i = 0; i < N; i++)
	{
		std::sprintf(buffer, "%d", i + 1);
		index = buffer;
		std::string zombie_name = name;
		horde[i].set_name(zombie_name.append(": ").append(index));
	}
	
	return (horde);
}
