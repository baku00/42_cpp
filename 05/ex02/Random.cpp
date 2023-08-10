#include "Random.hpp"

int	Random::getRandomInt(int min, int max)
{
	std::srand(std::time(0));
	return (std::rand() % (max - min + 1) + min);
}

int	Random::getRandomInt(int max)
{
	return (getRandomInt(0, max));
}
