#include "Horde.hpp"
#include <iostream>

std::string randomName();

Horde::Horde(int nb)
{
	int i;

	i = 0;
	this->group = new Zombie[nb];
	while (i < nb)
	{
		this->group[i].addName(randomName());
		i++;
	}
	this->number = nb;
}

Horde::~Horde()
{
	delete [] this->group;
}

void	Horde::announce()
{
	int i;
	int max;

	i = 0;
	while (i < this->number)
	{
		this->group[i].advert();
		i++;
	}
}

void	Horde::setType(std::string str)
{
	int i;

	i = 0;
	while (i < this->number)
	{
		this->group[i].addType(str);
		i++;
	}
}
