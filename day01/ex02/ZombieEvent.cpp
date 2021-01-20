#include "ZombieEvent.hpp"
#include <iostream>

ZombieEvent::ZombieEvent(std::string str) : type(str)
{}

void	ZombieEvent::setZombieType(std::string str)
{
	this->type = str;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(this->type, name));
}

std::string ZombieEvent::getType()
{
	return (this->type);
}
