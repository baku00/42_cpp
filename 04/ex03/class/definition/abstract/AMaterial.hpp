#ifndef AMATERIAL_HPP
# define AMATERIAL_HPP

#include <iostream>
#include "../interface/ICharacter.hpp"

class AMateria
{
	protected:
		
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
#endif