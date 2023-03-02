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
		~Dog();

		std::string	getType() const;
		void		makeSound() const;
};
#endif
