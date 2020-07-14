#include "Squad.hpp"

Squad::Squad() : count(0), list(0)
{
}

Squad::Squad(Squad const& squad)
{
	std::cout << "Starting copy contructor\n";
	for (int i = 0; i < squad.getCount(); i++)
		this->push(squad.getUnit(i)->clone());
	std::cout << "Ending copy contructor\n";
}

Squad::~Squad()
{
	int i;

	i = 0;
	while (i < count)
		delete list[i++];
	delete list;
}

int		Squad::getCount() const
{
	return (this->count);
}

ISpaceMarine *Squad::getUnit(int i) const
{
	if (i >= 0 && i < this->count)
		return (this->list[i]);
	return (NULL);
}

int		Squad::push(ISpaceMarine* tmp)
{
	ISpaceMarine **new_list;
	int	i;

	i = 0;
	if (!tmp)
		return (count);
	new_list = new ISpaceMarine*[count + 1];
	while (i < count)
	{
		if (list[i] == tmp)
			return (count);
		new_list[i] = list[i];
		i++;
	}
	new_list[i] = tmp;
	this->list = new_list;
	this->count++;
	return (count);
}


const Squad& Squad::operator=(Squad const& squad)
{
	std::cout << "Starting assignation contructor\n";
	if (this->getCount() > 0)
	{
		for (int i = 0; i < this->getCount(); i++)
			delete this->getUnit(i);
		this->count = 0;
	}
	for (int i = 0; i < squad.getCount(); i++)
		this->push(squad.getUnit(i)->clone());
	std::cout << "Ending assignation contructor\n";
	return (*this);
}