#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {
	private:
		std::string nom;
		std::string nom_de_famille;
		std::string surnom;
		std::string numero_de_telephone;
		std::string secret;
		int index;

	public:
		Zombie(
			std::string nom
		);

		void		announce();
};

#endif