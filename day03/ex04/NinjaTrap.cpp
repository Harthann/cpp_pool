#include "NinjaTrap.hpp"

//###############################
//#		CONSTRUCTOR/DESTRUCTOR	#
//###############################

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->HP = 60;
	this->MaxHP = 60;
	this->Energy = 120;
	this->MaxEnergy = 120;
	this->MeleeDamage = 60;
	this->RangeDamage = 5;
	this->ArmorReduction = 0;
	std::cout << "\033[0;34m";
	std::cout << "<" << name << "> NINJA-TRAP PROCESS LAUNCHING!\n";
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "\033[0;34m";
	std::cout << "<" << this->Name << "> NINJA-TRAP mode deactivated.\n";
}


//###############################
//#		MEMBER FUNCTION			#
//###############################

void		NinjaTrap::meleeAttack(const std::string& target) const
{
	std::cout << "\033[0;34m";
	std::cout << "<" << this->Name << "> swing his katana frantically ";
	std::cout << "causing " << this->MeleeDamage << " to " << target << std::endl;
}

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