#include "Squad.hpp"

Squad::Squad() : list(0)
{
}

Squad::Squad(Squad const& squad)
{
	std::cout << "Starting copy contructor\n";
	*this = squad;
	std::cout << "Ending copy contructor\n";
}

Squad::Squad(ISquad const& squad)
{
	std::cout << "Starting ISquad copy contructor\n";
	for (int i = 0; i < squad.getCount(); i++)
		this->push(squad.getUnit(i)->clone());
	std::cout << "Ending copy contructor\n";
}

Squad& Squad::operator=(Squad const& squad)
{
	std::cout << "Starting assignation contructor\n";
	if (!this->list.empty())
		this->list.clear();
	for (int i = 0; i < squad.getCount(); i++)
		this->push(squad.getUnit(i)->clone());
	std::cout << "Ending assignation contructor\n";
	return (*this);
}

Squad::~Squad()
{
	for (int i = 0; i < this->getCount(); i++)
		delete this->list[i];
}

int		Squad::getCount() const
{
	return ((int)this->list.size());
}

ISpaceMarine *Squad::getUnit(int i) const
{
	if (i >= 0 && i < this->getCount())
		return (this->list[i]);
	return (NULL);
}

int		Squad::push(ISpaceMarine* tmp)
{
	if (tmp)
		this->list.push_back(tmp);
	return (this->getCount());
}



