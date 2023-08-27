#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "Constructor of AMateria with type" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Default destructor of AMateria" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	std::cout << "Copy constructor of AMateria" << std::endl;
	*this = src;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	(void) target;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	std::cout << "AMateria assignation operator" << std::endl;
	(void) rhs;
	return (*this);
}