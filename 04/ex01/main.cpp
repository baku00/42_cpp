#include "class/Animal/Animal.hpp"
#include "class/Cat/Cat.hpp"
#include "class/Dog/Dog.hpp"

int main()
{
	const int ANIMAL_NUMBER = 100;

	Animal *animals[ANIMAL_NUMBER];
	for (int i = 0; i < ANIMAL_NUMBER; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < ANIMAL_NUMBER; i++)
	{
		std::cout << "\n=======================" << std::endl;
		std::cout << "Animal: " << i << " Display" << std::endl;
		std::cout << "Type: " << animals[i]->getType() << std::endl;
		std::cout << "Sound: " << std::flush;
		animals[i]->makeSound();
		std::cout << "=======================\n" << std::endl;
	}
	for (int i = 0; i < ANIMAL_NUMBER; i++)
		delete animals[i];
	return 0;
}
