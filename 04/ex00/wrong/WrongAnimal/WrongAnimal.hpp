#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP
# include<iostream>

class WrongAnimal {
	protected:
		std::string	type;

	public:
		WrongAnimal	(std::string type);
		WrongAnimal	(const WrongAnimal &wrongAnimal);
		WrongAnimal	();
		virtual ~WrongAnimal();

		std::string		getType() const;
		virtual void	makeSound() const;

		WrongAnimal	&operator=(const WrongAnimal &wrongAnimal);
};
#endif
