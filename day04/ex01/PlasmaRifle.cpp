#include "PlasmaRifle.hpp"

//#######################################
//#			CONSTRUCTOR/DESTRUCTOR		#
//#######################################

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const& rifle) :
AWeapon(rifle.getName(), rifle.getAPcost(), rifle.getDamage())
{
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const& base)
{
	this->name = base.name;
	this->ap_cost = base.ap_cost;
	this->damage = base.damage;
	return(*this);
}

PlasmaRifle::~PlasmaRifle()
{}

//#######################################
//#			MEMEBR FUNCTIONS			#
//#######################################

void	PlasmaRifle::attack() const
{
	std::cout <<  "*piouuu piouuu piouuu *\n";
}

//#######################################
//#				OPERATOR				#
//#######################################
