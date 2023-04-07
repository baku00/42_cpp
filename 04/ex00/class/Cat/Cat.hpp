#ifndef CAT_HPP
# define CAT_HPP
# include<iostream>
# include "../Animal/Animal.hpp"

class Cat: public Animal {
	public:
		Cat();
		Cat(const Cat &cat);
		~Cat();

		void makeSound() const;

		Cat &operator=(const Cat &cat);
};
#endif
