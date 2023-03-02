#ifndef DOG_HPP
# define DOG_HPP
# include<iostream>
# include "../Animal/Animal.hpp"

class Dog: public Animal {
	public:
		Dog();
		~Dog();

		void makeSound();
};
#endif
