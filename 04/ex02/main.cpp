#include "class/Animal/Animal.hpp"
#include "class/Cat/Cat.hpp"
#include "class/Dog/Dog.hpp"

int main()
{
	const int ANIMAL_NUMBER = 10;
	Animal* animals[ANIMAL_NUMBER];

	for (int i = 0; i < ANIMAL_NUMBER; i++)
	{
		if (i <= ANIMAL_NUMBER / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < ANIMAL_NUMBER; i++)
	{
		std::cout << i << ": " << animals[i]->getType() << ", " << std::flush;
		animals[i]->makeSound();
	}
	for (int i = 0; i < ANIMAL_NUMBER; i++)
		delete animals[i];
	return 0;
}
