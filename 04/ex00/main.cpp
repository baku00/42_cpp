#include "class/Animal/Animal.hpp"
#include "wrong/WrongAnimal/WrongAnimal.hpp"
#include "class/Cat/Cat.hpp"
#include "wrong/WrongCat/WrongCat.hpp"
#include "class/Dog/Dog.hpp"

int main()
{
	WrongAnimal* meta = new WrongAnimal();
	Animal* dog = new Dog();
	WrongAnimal* cat = new WrongCat();
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	delete meta;
	delete dog;
	delete cat;
	return 0;
}
