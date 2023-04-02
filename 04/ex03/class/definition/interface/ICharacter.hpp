#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "../abstract/AMaterial.hpp"

class ICharacter
{
	private:
		/* data */
		AMateria	materias[4];
		std::string	name;
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};
#endif
