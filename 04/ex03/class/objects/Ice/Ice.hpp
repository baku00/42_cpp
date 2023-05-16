#ifndef ICE_HPP
# define ICE_HPP

# include "../../definitions/abstracts/AMateria.hpp"
# include "../../definitions/interface/ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(Ice const & src);
		Ice & operator=(Ice const & src);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
