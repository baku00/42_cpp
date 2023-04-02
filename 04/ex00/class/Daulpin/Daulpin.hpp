#ifndef DAULPIN_HPP
# define DAULPIN_HPP
# include<iostream>
# include "../Animal/Animal.hpp"

class Daulpin: public Animal {
	public:
		Daulpin();
		~Daulpin();

		void makeSound();
};
#endif
