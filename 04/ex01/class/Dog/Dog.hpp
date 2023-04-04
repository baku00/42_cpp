#ifndef DOG_HPP
# define DOG_HPP
# include<iostream>
# include "../Animal/Animal.hpp"
# include "../Brain/Brain.hpp"

class Dog: public Animal {
	private:
		Brain *brain;

	public:
		Dog();
		Dog(const Dog &dog);
		~Dog();

		void makeSound();

		Dog &operator=(const Dog &dog);
};
#endif
