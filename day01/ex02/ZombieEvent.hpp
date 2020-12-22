#ifndef ZOMBIEVENT_HPP
#define ZOMBIEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent(std::string str = "Unknown");	
		void setZombieType(std::string str);
		Zombie *newZombie(std::string name);
		std::string getType();
	private:
		std::string type;
};

#endif
