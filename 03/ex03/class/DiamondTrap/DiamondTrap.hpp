#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include<iostream>
# include "../ScavTrap/ScavTrap.hpp"
# include "../FragTrap/FragTrap.hpp"

class DiamondTrap: public ScavTrap, FragTrap {
	private:
		std::string name;

	public:
		DiamondTrap	(
						std::string name
					);

		~DiamondTrap();

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
