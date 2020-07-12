#include "PowerFist.hpp"

//#######################################
//#			CONSTRUCTOR/DESTRUCTOR		#
//#######################################

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8)
{}

PowerFist::PowerFist(PowerFist const& fist) :
AWeapon(fist.getName(), fist.getAPcost(), fist.getDamage())
{
}

PowerFist::~PowerFist()
{}

//#######################################
//#			MEMEBR FUNCTIONS			#
//#######################################

void	PowerFist::attack() const
{
	std::cout <<  "*pschhh... SBAM! *\n";
}

//#######################################
//#				OPERATOR				#
//#######################################