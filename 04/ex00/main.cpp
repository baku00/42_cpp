#include "class/Animal/Animal.hpp"
#include "class/Cat/Cat.hpp"
#include "class/Dog/Dog.hpp"

#include "wrong/WrongAnimal/WrongAnimal.hpp"
#include "wrong/WrongCat/WrongCat.hpp"

int main()
{
	Animal* meta = new Animal();
	Animal* dog = new Dog();
	Animal* cat = new Cat();

	WrongAnimal *wrong_animal = new WrongAnimal();
	WrongAnimal *wrong_cat = new WrongCat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;

	std::cout << wrong_animal->getType() << " " << std::endl;
	std::cout << wrong_cat->getType() << " " << std::endl;

	cat->makeSound();
	dog->makeSound();
	meta->makeSound();

	wrong_animal->makeSound();
	wrong_cat->makeSound();

	delete meta;
	delete dog;
	delete cat;
	delete wrong_animal;
	delete wrong_cat;
	return 0;
}
