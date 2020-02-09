#include "NinjaTrap.hpp"

//###############################
//#		CONSTRUCTOR/DESTRUCTOR	#
//###############################

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 1, 60, 5, 0)
{
	std::cout << "\033[0;33m";
	std::cout << "<Glados> NINJA-TRAP PROCESS LAUNCHING!\n";
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "\033[0;33m";
	std::cout << "<Glados> NINJA-TRAP mode deactivated.\n";
}


//###############################
//#		MEMBER FUNCTION			#
//###############################

void		NinjaTrap::meleeAttack(const std::string& target) const
{
	ClapTrap::meleeAttack(target);
	std::cout << "I stab you from the shadow\n";
}

void		NinjaTrap::rangeAttack(const std::string& target) const
{
	ClapTrap::meleeAttack(target);
	std::cout << "My kunai will pierce you\n";
}

void		NinjaTrap::ninjaShoebox(FragTrap& target)
{
	std::cout << "\033[0;33m";
	std::cout << "<" << this->Name << "> A FragTrap Unit? What a joke!\n";
	std::cout << "<" << this->Name << "> You're nothing against me.\n";
	std::cout << "<narator> Ninja trap disappear, then stab FRAG-TRAP in the back.\n";
	target.takeDamage(this->MeleeDamage);
}

void		NinjaTrap::ninjaShoebox(ScavTrap& target)
{
	std::cout << "\033[0;33m";
	std::cout << "<" << this->Name << "> A ScavTrap Unit? What a joke!\n";
	std::cout << "<" << this->Name << "> You're just a trash with circuit\n";
	std::cout << "<narator> Ninja trap throw a shuriken.\n";
	target.takeDamage(this->RangeDamage);
}

void		NinjaTrap::ninjaShoebox(NinjaTrap& target)
{
	std::cout << "\033[0;33m";
	std::cout << "<" << this->Name << "> I i i i i i it's time.\n";
	std::cout << "<" << this->Name << "> I'll show you my true power\n";
	std::cout << "<narator> Ninja-trap is shining.\n";
	this->takeDamage(this->MaxHP);
	std::cout << "\033[0;33m";
	std::cout << "<narator> Ninja-trap disappear in an impressive epxlosion.\n";
}