#include "SuperTrap.hpp"
#include <iostream>


//#######################################
//#		CONTRUCTOR/DESTRUCTOR			#
//#######################################

SuperTrap::SuperTrap(std::string name) :ClapTrap(name, 100, 100, 120, 1, 60, 20, 5), NinjaTrap(name), FragTrap(name)
{
}

SuperTrap::~SuperTrap()
{};

//#######################################
//#		MEMBER FUNCTIONS				#
//#######################################

void		SuperTrap::meleeAttack(const std::string& target) const
{
	NinjaTrap::meleeAttack(target);
}

void		SuperTrap::rangeAttack(const std::string& target) const
{
	FragTrap::rangeAttack(target);
}