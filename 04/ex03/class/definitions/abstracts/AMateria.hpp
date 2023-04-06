#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "../interface/ICharacter.hpp"
# include <iostream>

class AMateria
{
	protected:
		std::string	type;

	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		virtual ~AMateria();

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		AMateria & operator=(AMateria const & src);
};

#endif