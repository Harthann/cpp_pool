#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &base);

		MateriaSource const &operator=(const MateriaSource &base);
		~MateriaSource();
		void	learnMateria(AMateria*);
		AMateria* createMateria(std::string const& type);
	private:
		AMateria* model[4];
};

#endif
