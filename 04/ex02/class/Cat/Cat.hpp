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

		std::string	getType()	const;
		void		makeSound()	const;


		Cat &operator=(const Cat &cat);
};
#endif
