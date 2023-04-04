#include "./class/Character/Character.hpp"

int main()
{
	Character* zaz = new Character("zaz");
	std::cout << zaz->getName() << std::endl;
	delete zaz;
	return 0;
}