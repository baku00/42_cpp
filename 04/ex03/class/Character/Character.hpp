#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "../definitions/interface/ICharacter.hpp"
# include "../definitions/abstracts/AMateria.hpp"

class Character: public ICharacter {
	private:
		static const int INVENTORY_SIZE = 4;
		std::string name;
		AMateria* inventory[INVENTORY_SIZE];
		Character();

	public:
		Character(std::string const & name);
		~Character();
		Character(Character const & src);
		Character & operator=(Character const & src);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif