#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string name) : size(148), weigth(150), color("marron"), name(name)
{}

Pony::~Pony()
{
	std::cout << this->name << " has been deleted\n";
}

int		Pony::getSize()
{
	return (this->size);
}

int		Pony::getWeigth()
{
	return(this->weigth);
}

std::string	Pony::getColor()
{
	return(this->color);
}

std::string	Pony::getName()
{
	return(this->name);
}

void	Pony::chgweigth(int nb)
{
	this->weigth = nb;
}