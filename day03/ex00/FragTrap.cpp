#include "FragTrap.hpp"

//###########################
//	CONSTRUCTOR/DESTRUCTOR	#
//###########################

FragTrap::FragTrap(std::string name) :
HP(100), MaxHP(100), Energy(100), Level(1), Name(name), MeleeDamage(30), RangeDamage(20), ArmorReduction(5)
{
	std::srand(std::time(nullptr));
	std::cout << "<" << name << "> I'm alive, i'm alive, i'm alive!!!!!!!\n";
}

FragTrap::~FragTrap()
{
	std::cout << "EXPLOSIOOOOOOOOONS!!!!!!\n";
}

//#######################
//		MEMBER FUNCTION	#
//#######################

void	FragTrap::rangedAttack(std::string const& target)
{
	std::cout << this->Name << " use ranged attack against " << target << std::endl;
	std::cout << this->Name << " inflicts " << this->RangeDamage << " damage\n";
}

void	FragTrap::meleeAttack(std::string const& target)
{
	std::cout << this->Name << " use melee attack against " << target << std::endl;
	std::cout << this->Name << " inflicts " << this->MeleeDamage << " damage\n";
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << this->Name << " lose " << amount - this->ArmorReduction << " HP\n";
	this->HP -= (amount - this->ArmorReduction);
	if (this->HP < 0)
		this->HP = 0;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << this->Name << " gain " << amount << " HP\n";
	this->HP += amount;
	if (this->HP > this->MaxHP)
		this->HP = this->MaxHP;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int tmp;

	if (this->Energy < 25)
		std::cout << "Not enough power\n";
	else if (this->Level < 2)
		std::cout << "Skill not learned yet, need to level up\n";
	else
	{
		tmp = std::rand() % 5;
		std::cout << "<" <<this->Name << ">" << " Launching vaulthunter.exe\n";
		if (tmp == 0)
		{
			std::cout << "< Bullet storm activated >\n";
			std::cout << "<" <<this->Name << ">" << " I am a storm of death and bullets.\n";
			std::cout << target << " is now like a strainer\n";
		}
		if (tmp == 1)
		{
			std::cout << "< Rainbow Nova activated >\n";
			std::cout << "<" <<this->Name << ">" << " Admire my deadly aura\n";
			std::cout << target << " is blind by the rainbow flash\n";
		}
		if (tmp == 2)
		{
			std::cout << "< M3D1C-TR4P activated >\n";
			std::cout << "<" <<this->Name << ">" << " Just a scratch you'll be fine\n";
			std::cout << target << " is healed by M3D1C-TR4P\n";
		}
		if (tmp == 3)
		{
			std::cout << "< Updating FR4G-TR4P >\n";
			std::cout << "<" << this->Name << ">" << " Hahaha, hahaha, I rise again\n";
			std::cout << target << " is astonish\n";
		}
		if (tmp == 4)
		{
			std::cout << "< B0MB0-TR4P activated >\n";
			std::cout << "<" << this->Name << ">" << " Activate the key, press the button and BOOOOOOOOM\n";
			std::cout << target << " is blown awy by the epxlosion\n";
		}	
	}
	this->Energy -= 25;
	if (this->Energy < 0)
		this->Energy = 0;
}
