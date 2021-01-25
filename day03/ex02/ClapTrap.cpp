#include "ClapTrap.hpp"

//###########################
//	CONSTRUCTOR/DESTRUCTOR	#
//###########################

ClapTrap::ClapTrap(std::string name) :
HP(100), MaxHP(100), Energy(100), MaxEnergy(100), Level(1), Name(name), MeleeDamage(30), RangeDamage(20), ArmorReduction(5)
{
	std::cout << "\033[0;33m";
	std::cout << "<Glados> CL4P-TRAP UNIT CREATED!!\n";
	std::cout << "\033[0;39m";
}

ClapTrap::ClapTrap(std::string& name, int hp, int mhp, int en, int lvl, int mdmg, int rdmg, int ard) :
HP(hp), MaxHP(mhp), Energy(en), MaxEnergy(en), Level(lvl), Name(name), MeleeDamage(mdmg), RangeDamage(rdmg), ArmorReduction(ard)
{
	std::cout << "\033[0;33m";
	std::cout << "<Glados> CL4P-TRAP UNIT CREATED!!\n";
	std::cout << "\033[0;39m";
}

ClapTrap::ClapTrap(const ClapTrap & base)
{
	std::cout << "\033[0;33m";
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

ClapTrap &ClapTrap::operator=(const ClapTrap& base)
{
	std::cout << "\033[0;33m";
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

ClapTrap::~ClapTrap()
{
	std::cout << "\033[0;33m";
	std::cout << "<Glados> CL4P-TRAP UNIT DESTROYED!!\n";
	std::cout << "\033[0;39m";
}

//#######################
//		MEMBER FUNCTION	#
//#######################

void	ClapTrap::LevelUP()
{
	this->Level++;
	std::cout << "\033[0;33m";
	std::cout << this->Name << " has leveled up to level : " << this->Level << std::endl;
	std::cout << "\033[0;39m";
}

void	ClapTrap::rangedAttack(std::string const& target)
{
	std::cout << "\033[0;33m";
	std::cout << this->Name << " use ranged attack against " << target << std::endl;
	std::cout << this->Name << " inflicts " << this->RangeDamage << " damage\n";
	std::cout << "\033[0;39m";
}

void	ClapTrap::meleeAttack(std::string const& target)
{
	std::cout << "\033[0;33m";
	std::cout << this->Name << " use melee attack against " << target << std::endl;
	std::cout << this->Name << " inflicts " << this->MeleeDamage << " damage\n";
	std::cout << "\033[0;39m";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "\033[0;33m";
	std::cout << this->Name << " lose " << amount - this->ArmorReduction << " HP (AR : " << this->ArmorReduction << ")\n";
	this->HP -= (amount - this->ArmorReduction);
	if (this->HP < 0)
		this->HP = 0;
	std::cout << "\033[0;39m";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "\033[0;33m";
	std::cout << this->Name << " gain " << amount << " HP\n";
	this->HP += amount;
	if (this->HP > this->MaxHP)
		this->HP = this->MaxHP;
	std::cout << this->Name << " have now " << this->HP << " HP\n";
	this->Energy += amount;
	if (this->Energy > this->MaxEnergy)
		this->Energy = this->MaxEnergy;
	std::cout << this->Name << " have now " << this->Energy << " Energy\n";
	std::cout << "\033[0;39m";
}