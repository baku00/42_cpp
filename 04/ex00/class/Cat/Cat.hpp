#ifndef CAT_HPP
# define CAT_HPP
# include<iostream>
# include "../Animal/Animal.hpp"

class Cat: public Animal {
	public:
		Cat();
		~Cat();

		void makeSound();
};
#endif
