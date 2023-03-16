#include "class/Animal/Animal.hpp"
#include "wrong/WrongAnimal/WrongAnimal.hpp"
#include "class/Cat/Cat.hpp"
#include "wrong/WrongCat/WrongCat.hpp"
#include "class/Dog/Dog.hpp"

int main()
{
	Animal* meta = new Animal();
	Animal* dog = new Dog();
	Animal* cat = new Cat();
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
