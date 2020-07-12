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