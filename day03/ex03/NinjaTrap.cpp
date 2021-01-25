#include "NinjaTrap.hpp"

//###############################
//#		CONSTRUCTOR/DESTRUCTOR	#
//###############################

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 1, 60, 5, 0)
{
	std::cout << "\033[0;34m";
	std::cout << "<" << name << "> NINJA-TRAP PROCESS LAUNCHING!\n";
}

NinjaTrap::NinjaTrap(const NinjaTrap & base)
{
	std::cout << "\033[0;34m";
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

NinjaTrap &NinjaTrap::operator=(const NinjaTrap& base)
{
	std::cout << "\033[0;34m";
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

NinjaTrap::~NinjaTrap()
{
	std::cout << "\033[0;34m";
	std::cout << "<" << this->Name << "> NINJA-TRAP mode deactivated.\n";
}

//###############################
//#		MEMBER FUNCTION			#
//###############################

void		NinjaTrap::ninjaShoebox(FragTrap& target)
{
	std::cout << "\033[0;34m";
	std::cout << "<" << this->Name << "> A FragTrap Unit? What a joke!\n";
	std::cout << "<" << this->Name << "> You're nothing against me.\n";
	std::cout << "<narator> Ninja trap disappear, then stab FRAG-TRAP in the back.\n";
	target.takeDamage(this->MeleeDamage);
	this->Energy = 0;
}

void		NinjaTrap::ninjaShoebox(ScavTrap& target)
{
	std::cout << "\033[0;34m";
	std::cout << "<" << this->Name << "> A ScavTrap Unit? What a joke!\n";
	std::cout << "<" << this->Name << "> You're just a trash with circuit\n";
	std::cout << "<narator> Ninja trap throw a shuriken.\n";
	target.takeDamage(this->RangeDamage);
	this->Energy = 0;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap& target)
{
	std::cout << "\033[0;34m";
	std::cout << "<" << this->Name << "> I i i i i i it's time.\n";
	std::cout << "<" << this->Name << "> I'll show you my true power\n";
	std::cout << "<narator> Ninja-trap is shining.\n";
	this->takeDamage(this->MaxHP);
	std::cout << "\033[0;34m";
	std::cout << "<narator> Ninja-trap disappear in an impressive epxlosion.\n";
	target.takeDamage(30);
	this->Energy = 0;
}

void		NinjaTrap::ninjaShoebox(ClapTrap& target)
{
	std::cout << "\033[0;34m";
	std::cout << "<" << this->Name << "> Is it you father?\n";
	std::cout << "<" << this->Name << "> I truly missed you!!!!\n";
	std::cout << "<narator> " << this->Name << " starts crying oily tear!\n";
	target.meleeAttack(this->Name);
	this->takeDamage(30);
	this->Energy = 0;
}