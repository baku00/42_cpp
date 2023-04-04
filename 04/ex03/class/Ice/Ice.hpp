#ifndef ICE_HPP
# define ICE_HPP

# include "../definitions/abstract/AMaterial.hpp"
# include "../definitions/interface/ICharacter.hpp"

class Ice : public AMateria
{
	private:
		/* data */
	public:
		Ice();
		Ice(Ice const & src);
		virtual ~Ice();
		Ice & operator=(Ice const & rhs);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
