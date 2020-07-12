#include "Peon.hpp"

//###################################
//#		CONSTRUCTOR/DESTRUCTOR		#
//###################################

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog.\n";
}

Peon::~Peon()
{
	std::cout << "Bleuark ...\n";
}


//###################################
//#		MEMBER FUNCTIONS			#
//###################################

void	Peon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a pink pony!\n";
}