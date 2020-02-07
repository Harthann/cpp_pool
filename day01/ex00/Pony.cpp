#include "Pony.hpp"
#include <iostream>

Pony::Pony() : size(148), weigth(150), color("marron")
{}

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

void	Pony::chgweigth(int nb)
{
	this->weigth = nb;
}