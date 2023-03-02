#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP
# include<iostream>
# include "../WrongAnimal/WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat();
		~WrongCat();

		void makeSound();
};
#endif
