#include "HumanB.hpp"

HumanB::HumanB (std::string name, Weapon *weapon) : name(name), weapon(weapon)
{}


void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with his ";
	std::cout << this->weapon->getType() << std::endl;
}