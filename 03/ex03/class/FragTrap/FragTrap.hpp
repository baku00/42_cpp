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

		std::string	getName();
		int			getHitPoint();
		int			getEnergyPoint();
		int			getAttackDamage();
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		removeEnergyPoint();
		bool		hasEnoughtEnergyPoint();
		void		notEnoughtEnergyPoint();
		void		display();
		void		highFivesGuys();
};
#endif
