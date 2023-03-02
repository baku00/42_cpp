#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "../Weapon/Weapon.hpp"
# include <iostream>

class HumanB {
	private:
		Weapon		*weapon;
		std::string	name;

	public:
		HumanB(std::string name);
		~HumanB();

		void	setWeapon(Weapon &weapon);
		Weapon	getWeapon();
		void	attack();
};
#endif