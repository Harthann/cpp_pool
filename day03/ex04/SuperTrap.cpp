#include "SuperTrap.hpp"
#include <iostream>


//#######################################
//#		CONTRUCTOR/DESTRUCTOR			#
//#######################################

SuperTrap::SuperTrap(std::string& name) :
ClapTrap(name),
FragTrap(name),
NinjaTrap(name)
{
	this->HP = 100;
	this->MaxHP = 100;
	this->RangeDamage = 20;
	this->ArmorReduction = 5;
}

SuperTrap::~SuperTrap()
{};

//#######################################
//#		MEMBER FUNCTIONS				#
//#######################################


void		SuperTrap::printStat() const
{
	std::cout << "HP : " << this->HP << std::endl;
	std::cout << "MaxHP : " << this->MaxHP << std::endl;
	std::cout << "Energy : " << this->Energy << std::endl;
	std::cout << "MaxEnergy : " << this->MaxEnergy << std::endl;
	std::cout << "Level : " << this->Level << std::endl;
	std::cout << "MeleeDamage : " << this->MeleeDamage << std::endl;
	std::cout << "RangeDamage : " << this->RangeDamage << std::endl;
	std::cout << "ArmoreReduction : " << this->ArmorReduction << std::endl;
}
