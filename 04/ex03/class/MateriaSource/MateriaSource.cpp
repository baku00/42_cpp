#include "MateriaSource.hpp"
#include "../objects/Cure/Cure.hpp"
#include "../objects/Ice/Ice.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	(void) src;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
	(void) src;
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	(void) materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	else
		return (NULL);
}
