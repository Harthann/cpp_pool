#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string type, std::string name) : type(type), name(name)
{}

Zombie::~Zombie()
{
	std::cout << this->name << " has been removed\n";
}

void	Zombie::advert()
{
	std::cout << "<" << this->name << " (" << this->type;
	std::cout << ")> Buhwaaaaaaaaaaahhh\n";
}

void	Zombie::addType(std::string str)
{
	this->type = str;
}

void	Zombie::addName(std::string str)
{
	this->name = str;
}

std::string Zombie::getType()
{
	return (this->type);
}
std::string Zombie::getName()
{
	return (this->name);
}
