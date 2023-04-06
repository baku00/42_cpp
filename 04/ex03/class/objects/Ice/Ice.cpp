#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Default constructor of Ice" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Default destructor of Ice" << std::endl;
}

Ice::Ice(Ice const & src) : AMateria(src)
{
	(void) src;
	std::cout << "Copy constructor of Ice" << std::endl;
}

void Ice::use(int idx, ICharacter& target)
{
	(void) idx;
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice & Ice::operator=(Ice const & rhs)
{
	std::cout << "Ice assignation operator" << std::endl;
	(void) rhs;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}
