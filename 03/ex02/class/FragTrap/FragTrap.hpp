#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include<iostream>
# include "../ClapTrap/ClapTrap.hpp"

class FragTrap: public ClapTrap {
	public:
		FragTrap	(
						std::string name
					);

		~FragTrap();
		
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		highFivesGuys();
};
#endif
