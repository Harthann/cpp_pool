#include "ClapTrap.hpp"

//###########################
//	CONSTRUCTOR/DESTRUCTOR	#
//###########################

ClapTrap::ClapTrap(std::string name) :
HP(100), MaxHP(100), Energy(100), Level(1), Name(name), MeleeDamage(30), RangeDamage(20), ArmorReduction(5)
{
	std::cout << "\033[0;32m";
	std::cout << "<Glados> CL4P-TRAP UNIT CREATED!!\n";
}

ClapTrap::ClapTrap(std::string name, int hp, int mhp, int en, int lvl, int mdmg, int rdmg, int ard) :
HP(hp), MaxHP(mhp), Energy(en), MaxEnergy(en), Level(lvl), Name(name), MeleeDamage(mdmg), RangeDamage(rdmg), ArmorReduction(ard)
{
	std::cout << "\033[0;32m";
	std::cout << "<Glados> CL4P-TRAP UNIT CREATED!!\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[0;32m";
	std::cout << "<Glados> CL4P-TRAP UNIT DESTROYED!!\n";
}

//#######################
//		MEMBER FUNCTION	#
//#######################

void	ClapTrap::rangedAttack(std::string const& target)
{
	std::cout << "\033[0;32m";
	std::cout << this->Name << " use ranged attack against " << target << std::endl;
	std::cout << this->Name << " inflicts " << this->RangeDamage << " damage\n";
}

void	ClapTrap::meleeAttack(std::string const& target)
{
	std::cout << "\033[0;32m";
	std::cout << this->Name << " use melee attack against " << target << std::endl;
	std::cout << this->Name << " inflicts " << this->MeleeDamage << " damage\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "\033[0;32m";
	std::cout << this->Name << " lose " << amount - this->ArmorReduction << " HP\n";
	this->HP -= (amount - this->ArmorReduction);
	if (this->HP < 0)
		this->HP = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "\033[0;32m";
	std::cout << this->Name << " gain " << amount << " HP\n";
	this->HP += amount;
	if (this->HP > 100)
		this->HP = 100;
	std::cout << this->Name << " have now " << this->HP << " HP\n";
}