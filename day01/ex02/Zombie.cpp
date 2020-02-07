#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : type("Unknown"), name("Unknown")
{}

Zombie::Zombie(std::string type, std::string name) : type(type), name(name)
{}

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