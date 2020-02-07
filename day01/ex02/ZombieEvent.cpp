#include "ZombieEvent.hpp"
#include <iostream>

ZombieEvent::ZombieEvent() : type("Unknown")
{}

ZombieEvent::ZombieEvent(std::string str) : type("Unknown")
{}

void	ZombieEvent::setZombieType(std::string str)
{
	this->type = str;
}

std::string ZombieEvent::getType()
{
	return (this->type);
}
