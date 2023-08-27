#ifndef CURE_HPP
# define CURE_HPP

# include "../../definitions/abstracts/AMateria.hpp"
# include "../../definitions/interface/ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(Cure const & src);
		Cure & operator=(Cure const & src);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
