#include "ScavTrap.hpp"

//###########################
//	CONSTRUCTOR/DESTRUCTOR	#
//###########################

ScavTrap::ScavTrap(std::string name) :
HP(100), MaxHP(100), Energy(100), Level(1), Name(name), MeleeDamage(20), RangeDamage(15), ArmorReduction(3)
{
	std::srand(std::time(nullptr));
	std::cout << "<" << name << "> Oh Hello there! My name is " << name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "HOW IS IT POSSIBLE!\n";
}

//#######################
//		MEMBER FUNCTION	#
//#######################

void	ScavTrap::rangedAttack(std::string const& target)
{
	std::cout << this->Name << " cause " << this->RangeDamage << " damage";
	std::cout << " to " << target << " with his range attack\n";
}

void	ScavTrap::meleeAttack(std::string const& target)
{
	std::cout << this->Name << " cause " << this->MeleeDamage << " damage";
	std::cout << " to " << target << " with his melee attack\n";
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << this->Name << " take " << amount - this->ArmorReduction << " HP (AR : " << this->ArmorReduction << ")\n";
	this->HP -= (amount - this->ArmorReduction);
	if (this->HP < 0)
		this->HP = 0;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << this->Name << " is repaired about " << amount << " HP\n";
	this->HP += amount;
	if (this->HP > 100)
		this->HP = 100;
}
