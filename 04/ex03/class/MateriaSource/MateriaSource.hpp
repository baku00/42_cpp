#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "../definitions/interface/IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		static int LIMIT_OF_MATERIAS_LIST;
		static AMateria *materias_list[100];
		static const int INVENTORY_SIZE = 4;
		AMateria* _materia[INVENTORY_SIZE];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const & src);
		MateriaSource & operator=(MateriaSource const & src);

		AMateria	*get_index(int index);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif