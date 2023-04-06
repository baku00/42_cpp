#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "../definitions/interface/IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _materia[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const & src);
		MateriaSource & operator=(MateriaSource const & src);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif