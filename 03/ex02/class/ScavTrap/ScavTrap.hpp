#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include<iostream>
# include "../ClapTrap/ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap	(
						std::string name
					);

		~ScavTrap();

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
		void		guardGate();
};
#endif
