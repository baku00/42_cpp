#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include<iostream>

class ClapTrap {
	protected:
		ClapTrap	();
		std::string	name;
		int			hit_point;
		int			energy_point;
		int			attack_damage;

		void		removeEnergyPoint();
		bool		hasEnoughtEnergyPoint();
		void		notEnoughtEnergyPoint();


	public:
		ClapTrap	(std::string name);
		ClapTrap	(const ClapTrap &clapTrap);
		~ClapTrap	();

		std::string	getName();
		void		setName(std::string name);
		int			getHitPoint();
		int			getEnergyPoint();
		int			getAttackDamage();

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		void		display();

		bool		isDead();

		bool		canMakeAction();
		void		displayError(std::string type);

		ClapTrap	&operator=(const ClapTrap &clapTrap);
};
#endif
