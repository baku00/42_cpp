#include "MateriaSource.hpp"
#include "../objects/Cure/Cure.hpp"
#include "../objects/Ice/Ice.hpp"

MateriaSource::MateriaSource()
{
	LIMIT_OF_MATERIAS_LIST = 100;
	for (int i = 0; i < LIMIT_OF_MATERIAS_LIST; i++)
		materias_list[i] = NULL;
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
	*this = src;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_materia[i] != NULL)
				delete this->_materia[i];
			this->_materia[i] = src._materia[i]->clone();
		}
	}
	return (*this);
}

AMateria	*MateriaSource::get_index(int index)
{
	if (index < 0 || index >= INVENTORY_SIZE)
		return (NULL);
	return (this->_materia[index]);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = materia;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria *new_mat;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
		{
			new_mat = this->_materia[i]->clone();
			return new_mat;
		}
	}
	return (NULL);
}
