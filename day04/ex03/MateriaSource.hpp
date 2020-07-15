#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		void	learnMateria(AMateria*);
		AMateria* createMateria(std::string const& type);
	private:
		AMateria* model[4];
};

#endif