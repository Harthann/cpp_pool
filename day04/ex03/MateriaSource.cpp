#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	model[0] = 0;
	model[1] = 0;
	model[2] = 0;
	model[3] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &base)
{
	for (int i = 0; i < 4; i++)
		this->model[i] = base.model[i];

}

MateriaSource const & MateriaSource::operator=(const MateriaSource &base)
{
	for (int i = 0; i < 4; i++)
		this->model[i] = base.model[i];
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->model[i];

}

void	MateriaSource::learnMateria(AMateria* m)
{
	int i;

	i = 0;
	while (i < 4 && this->model[i])
		i++;
	if (i < 4)
	{
		this->model[i] = m;
		std::cout << "A template of type \"" << m->getType();
		std::cout << "\" has been stored\n";
	}
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->model[i] && this->model[i]->getType() == type)
			return (this->model[i]->clone());
	}
	return (NULL);
}
