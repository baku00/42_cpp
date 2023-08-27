#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include<iostream>

class Animal {
	protected:
		std::string	type;

	public:
		Animal (std::string type);
		Animal (const Animal &animal);
		
		Animal();
		virtual ~Animal();

		std::string		getType() const;
		void			setType(std::string type);
		virtual void	makeSound() const;

		Animal &operator=(const Animal &animal);
};
#endif
