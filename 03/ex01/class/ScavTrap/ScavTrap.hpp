#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include<iostream>

# include "../ClapTrap/ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:
		ScavTrap	();

	public:
		ScavTrap	(std::string name);
		ScavTrap	(const ScavTrap &scavTrap);
		~ScavTrap	();

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		void		display();

		void		guardGate();

		ScavTrap	&operator=(const ScavTrap &scavTrap);
};
#endif
