#ifndef CAT_HPP
# define CAT_HPP
# include<iostream>
# include "../Animal/Animal.hpp"
# include "../Brain/Brain.hpp"

class Cat: public Animal {
	private:
		Brain *brain;

	public:
		Cat		();
		Cat		(const Cat &cat);
		~Cat	();

		void makeSound();

		Cat &operator=(const Cat &cat);
};
#endif
