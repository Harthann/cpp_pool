#include "AWeapon.hpp"

//#######################################
//#			CONSTRUCTOR/DESTRUCTOR		#
//#######################################

AWeapon::AWeapon(std::string const& name, int apcost, int damage) :
name(name), ap_cost(apcost), damage(damage)
{

}

AWeapon::AWeapon(AWeapon const& weapon)
{
	this->name = weapon.name;
	this->ap_cost = weapon.ap_cost;
	this->damage = weapon.damage;
}

AWeapon::~AWeapon()
{}

AWeapon&	AWeapon::operator=(AWeapon const& weapon)
{
	name = weapon.name;
	ap_cost = weapon.ap_cost;
	damage = weapon.damage;
	return (*this);
}

//#######################################
//#			MEMEBR FUNCTIONS			#
//#######################################

int		AWeapon::getDamage() const
{
	return (this->damage);
}

int		AWeapon::getAPcost() const
{
	return (this->ap_cost);
}

std::string		AWeapon::getName() const
{
	return (this->name);
}

void	AWeapon::attack() const
{}

//#######################################
//#				OPERATOR				#
//#######################################