#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include<iostream>

# include "../ClapTrap/ClapTrap.hpp"

class FragTrap : public ClapTrap {
	private:
		FragTrap	();

	public:
		FragTrap	(std::string name);
		FragTrap	(const FragTrap &fragTrap);
		~FragTrap	();

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		void		display();

		void		highFivesGuys();

		FragTrap	&operator=(const FragTrap &fragTrap);
};
#endif
