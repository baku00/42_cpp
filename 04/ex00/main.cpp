#include "class/Animal/Animal.hpp"
#include "class/Cat/Cat.hpp"
#include "class/Dog/Dog.hpp"

#include "wrong/WrongAnimal/WrongAnimal.hpp"
#include "wrong/WrongCat/WrongCat.hpp"

int main()
{
	Animal* animal = new Animal();
	std::cout << "\n" << std::endl;
	Animal* animal_copy = new Animal(*animal);
	std::cout << "\n" << std::endl;
	Animal* dog = new Dog();
	std::cout << "\n" << std::endl;
	Animal* dog_copy = new Dog((Dog &) *dog);
	// dog_copy->setType("Animal");
	std::cout << "\n" << std::endl;
	Animal* cat = new Cat();
	std::cout << "\n" << std::endl;
	Animal* cat_copy = new Cat((Cat &) *cat);
	std::cout << "\n" << std::endl;

	WrongAnimal *wrong_animal = new WrongAnimal();
	std::cout << "\n" << std::endl;
	WrongAnimal *wrong_animal_copy = new WrongAnimal(*wrong_animal);
	std::cout << "\n" << std::endl;
	WrongAnimal *wrong_cat = new WrongCat();
	std::cout << "\n" << std::endl;
	WrongAnimal *wrong_cat_copy = new WrongCat((WrongCat &) *wrong_cat);
	std::cout << "\n" << std::endl;

	std::cout << "=======================" << std::endl;
	std::cout << "     Animal Display    " << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Type: " << animal->getType() << std::endl;
	std::cout << "Sound: " << std::flush;
	animal->makeSound();

	std::cout << "=======================" << std::endl;
	std::cout << "  Copy Animal Display    " << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Type: " << animal_copy->getType() << std::endl;
	std::cout << "Sound: " << std::flush;
	animal_copy->makeSound();

	std::cout << "\n\n\n" << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "     Dog Display    " << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Type: " << dog->getType() << std::endl;
	std::cout << "Sound: " << std::flush;
	dog->makeSound();

	std::cout << "\n\n\n" << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "     Copy Dog Display    " << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Type: " << dog_copy->getType() << std::endl;
	std::cout << "Sound: " << std::flush;
	dog_copy->makeSound();

	std::cout << "\n\n\n" << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "     Cat Display    " << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Type: " << cat->getType() << std::endl;
	std::cout << "Sound: " << std::flush;
	cat->makeSound();

	std::cout << "\n\n\n" << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "   Copy Cat Display    " << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Type: " << cat_copy->getType() << std::endl;
	std::cout << "Sound: " << std::flush;
	cat_copy->makeSound();

	std::cout << "\n\n\n" << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "  Wrong Animal Display    " << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Type: " << wrong_animal->getType() << std::endl;
	std::cout << "Sound: " << std::flush;
	wrong_animal->makeSound();

	std::cout << "\n\n\n" << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Wrong Copy Animal Display    " << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Type: " << wrong_animal_copy->getType() << std::endl;
	std::cout << "Sound: " << std::flush;
	wrong_animal_copy->makeSound();
	std::cout << "\n\n\n" << std::endl;

	std::cout << "\n\n\n" << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "   Wrong Cat Display    " << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Type: " << wrong_cat->getType() << std::endl;
	std::cout << "Sound: " << std::flush;
	wrong_cat->makeSound();

	std::cout << "\n\n\n" << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Wrong Copy Cat Display    " << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Type: " << wrong_cat_copy->getType() << std::endl;
	std::cout << "Sound: " << std::flush;
	wrong_cat_copy->makeSound();
	std::cout << "\n\n\n" << std::endl;

	delete animal;
	std::cout << "\n" << std::endl;
	delete animal_copy;
	std::cout << "\n" << std::endl;
	delete dog;
	std::cout << "\n" << std::endl;
	delete dog_copy;
	std::cout << "\n" << std::endl;
	delete cat;
	std::cout << "\n" << std::endl;
	delete cat_copy;
	std::cout << "\n" << std::endl;
	delete wrong_animal;
	std::cout << "\n" << std::endl;
	delete wrong_cat;
	std::cout << "\n" << std::endl;
	delete wrong_animal_copy;
	std::cout << "\n" << std::endl;
	delete wrong_cat_copy;
	return 0;
}
