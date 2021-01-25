#include "ScavTrap.hpp"

//###########################
//	CONSTRUCTOR/DESTRUCTOR	#
//###########################

ScavTrap::ScavTrap(std::string name) :
ClapTrap(name, 100, 100, 50, 1, 20, 15, 3)
{
	std::srand(std::time(NULL));
	std::cout << "\033[0;35m";
	std::cout << "<" << name << "> Oh Hello there! My name is " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & base)
{
	std::cout << "\033[0;35m";
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

ScavTrap &ScavTrap::operator=(const ScavTrap& base)
{
	std::cout << "\033[0;35m";
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

ScavTrap::~ScavTrap()
{
	std::cout << "\033[0;35m";
	std::cout << "<" << this->Name << "> HOW IS IT POSSIBLE!\n";
}

//#######################
//		MEMBER FUNCTION	#
//#######################

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