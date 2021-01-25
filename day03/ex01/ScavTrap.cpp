#include "ScavTrap.hpp"

//###########################
//	CONSTRUCTOR/DESTRUCTOR	#
//###########################

ScavTrap::ScavTrap(std::string name) :
HP(100), MaxHP(100), Energy(100), Level(1), Name(name), MeleeDamage(20), RangeDamage(15), ArmorReduction(3)
{
	std::srand(std::time(NULL));

	std::cout << "\033[0;35m";
	std::cout << "<" << name << "> Oh Hello there! My name is " << name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[0;35m";
	std::cout << "<" << this->Name << "> HOW IS IT POSSIBLE!\n";
}

//#######################
//		MEMBER FUNCTION	#
//#######################

void	ScavTrap::rangedAttack(std::string const& target)
{
	std::cout << "\033[0;35m";
	if (this->Energy)
	{
		this->Energy -= 10;
		std::cout << this->Name << " cause " << this->RangeDamage << " damage";
		std::cout << " to " << target << " with his range attack\n";
	}
	else
		std::cout << this->Name << " doesn't have enough energy to attack\n";
}

void	ScavTrap::meleeAttack(std::string const& target)
{
	std::cout << "\033[0;35m";
	if (this->Energy)
	{
		this->Energy -= 10;
		std::cout << this->Name << " cause " << this->MeleeDamage << " damage";
		std::cout << " to " << target << " with his melee attack\n";
	}
	else
		std::cout << this->Name << " doesn't have enough energy to attack\n";
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "\033[0;35m";
	std::cout << this->Name << " take " << amount - this->ArmorReduction << " HP (AR : " << this->ArmorReduction << ")\n";
	this->HP -= (amount - this->ArmorReduction);
	if (this->HP < 0)
		this->HP = 0;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "\033[0;35m";
	std::cout << this->Name << " is repaired about " << amount << " HP\n";
	this->HP += amount;
	if (this->HP > this->MaxHP)
		this->HP = this->MaxHP;
	std::cout << this->Name << " have now " << this->HP << " HP\n";
}

void	ScavTrap::challengerNewcomer(const std::string& target)
{
	int a;
	std::string answer;

	std::cout << "\033[0;35m";
	std::cout << "<" << this->Name << "> Oh Hello wanderer, i'm pretty sure you want to pass this door\n";
	std::cout << "If you really want to do so, you have to be challenge!!\n";
	std::cout << "Please answer to this question!\n";
	a = std::rand() % 3;
	switch (a = std::rand() % 3) {
		case 1 : 
			std::cout << "Which creature has one voice and yet becomes four-footed and two-footed and three-footed?\n";
			break ;
		case 2 :
			std::cout << "Who am I ?\n";
			break ;
		case 3 :
			std::cout << "Who is the greatest robot in the world?\n";
			break;
	}
	std::cin >> answer;
	if (!answer.compare("SC4V-TRAP") || !answer.compare(this->Name))
	{
		std::cout << "I didn't expected you to found the answer, crap\n";
		std::cout << "Well it wasn't really difficult.\n";
	}
	else 
	{
		std::cout << "AHAH YOU FOOL IT WAS ME SC4V-TRAP\n";
		this->Level++;
		std::cout << "Thanks to you " << target << " i have now level up to level : " << this->Level << std::endl;

	}
}