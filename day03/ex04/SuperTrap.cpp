#include "SuperTrap.hpp"
#include <iostream>


//#######################################
//#		CONTRUCTOR/DESTRUCTOR			#
//#######################################

SuperTrap::SuperTrap(std::string name) :
ClapTrap(name),
FragTrap(name),
NinjaTrap(name)
{
	this->HP = 100;
	this->MaxHP = 100;
	this->RangeDamage = 20;
	this->ArmorReduction = 5;
}

SuperTrap::SuperTrap(const SuperTrap & base)
{
	std::cout << "\033[0;96m";
	this->HP = base.HP;
	this->MaxHP = base.MaxHP;
	this->Energy = base.Energy;
	this->MaxEnergy = base.MaxEnergy;
	this->Name = base.Name;
	this->MeleeDamage = base.MeleeDamage;
	this->RangeDamage = base.RangeDamage;
	this->ArmorReduction = base.ArmorReduction;
	std::cout << "<" << this->Name << "> I'm a copy!\n";
	std::cout << "\033[0;39m";
}

SuperTrap &SuperTrap::operator=(const SuperTrap& base)
{
	std::cout << "\033[0;96m";
	this->HP = base.HP;
	this->MaxHP = base.MaxHP;
	this->Energy = base.Energy;
	this->MaxEnergy = base.MaxEnergy;
	this->Name = base.Name;
	this->MeleeDamage = base.MeleeDamage;
	this->RangeDamage = base.RangeDamage;
	this->ArmorReduction = base.ArmorReduction;
	std::cout << "<" << this->Name << "> I'm a assignated!\n";
	std::cout << "\033[0;39m";
	return (*this);
}

SuperTrap::~SuperTrap()
{};

//#######################################
//#		MEMBER FUNCTIONS				#
//#######################################

