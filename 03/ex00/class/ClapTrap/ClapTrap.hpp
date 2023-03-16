#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include<iostream>

class ClapTrap {
	private:
		std::string	name;
		int			hit_point;
		int			energy_point;
		int			attack_damage;

		void		removeEnergyPoint();
		bool		hasEnoughtEnergyPoint();
		void		notEnoughtEnergyPoint();
		std::string	getName();
		int			getHitPoint();
		int			getEnergyPoint();
		int			getAttackDamage();

	public:
		ClapTrap	(
						std::string name
					);

		~ClapTrap();

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		display();
};
#endif
