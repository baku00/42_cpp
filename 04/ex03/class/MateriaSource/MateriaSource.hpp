#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include <iostream>

#include "../definitions/interface/IMateriaSource.hpp"
#include "../definitions/abstract/AMaterial.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _inventory[4];
		MateriaSource();

	public:
		MateriaSource(MateriaSource const & src);
		~MateriaSource();
		MateriaSource & operator=(MateriaSource const & rhs);
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};
#endif