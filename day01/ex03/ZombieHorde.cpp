#include "ZombieHorde.hpp"
#include <iostream>

std::string randomName();

ZombieHorde::ZombieHorde(int nb)
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

ZombieHorde::~ZombieHorde()
{
	delete [] this->group;
}

void	ZombieHorde::announce()
{
	int i;

	i = 0;
	while (i < this->number)
	{
		this->group[i].advert();
		i++;
	}
}

void	ZombieHorde::setType(std::string str)
{
	int i;

	i = 0;
	while (i < this->number)
	{
		this->group[i].addType(str);
		i++;
	}
}
