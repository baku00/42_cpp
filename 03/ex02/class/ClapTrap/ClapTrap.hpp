#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include<iostream>

class ClapTrap {
	protected:
		std::string	name;
		int			hit_point;
		int			energy_point;
		int			attack_damage;
	
	public:
		ClapTrap	(
						std::string name
					);

		~ClapTrap();

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
};
#endif
