#include "class/Animal/Animal.hpp"
#include "wrong/WrongAnimal/WrongAnimal.hpp"
#include "class/Cat/Cat.hpp"
#include "wrong/WrongCat/WrongCat.hpp"
#include "class/Dog/Dog.hpp"
#include "class/Daulpin/Daulpin.hpp"

int main()
{
	Animal* meta = new Animal();
	Animal* dog = new Dog();
	Animal* cat = new Cat();
	Animal* daulpin = new Daulpin();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	daulpin->makeSound();
	meta->makeSound();
	delete meta;
	delete dog;
	delete cat;
	delete daulpin;
	return 0;
}
