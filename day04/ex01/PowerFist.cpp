#include "PowerFist.hpp"

//#######################################
//#			CONSTRUCTOR/DESTRUCTOR		#
//#######################################

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{}

PowerFist::PowerFist(PowerFist const& fist) :
AWeapon(fist.getName(), fist.getAPcost(), fist.getDamage())
{
}

PowerFist &PowerFist::operator=(PowerFist const& base)
{
	this->name = base.name;
	this->ap_cost = base.ap_cost;
	this->damage = base.damage;
	return (*this);
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
