#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Default constructor of Cure" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Default destructor of Cure" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria(src)
{
	std::cout << "Copy constructor of Cure" << std::endl;
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure & Cure::operator=(Cure const & src)
{
	std::cout << "Cure assignation operator" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}
