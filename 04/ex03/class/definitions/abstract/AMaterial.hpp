#ifndef A_MATERIAL_HPP
# define A_MATERIAL_HPP

#include "../interface/ICharacter.hpp"
#include <iostream>

class AMateria
{
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
#endif