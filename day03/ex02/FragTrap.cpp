#include "FragTrap.hpp"

//###########################
//	CONSTRUCTOR/DESTRUCTOR	#
//###########################

FragTrap::FragTrap(std::string name) :
ClapTrap(name, 100, 100, 100, 1, 30, 20, 5)
{
	std::srand(std::time(NULL));
	std::cout << "\033[0;32m";
	std::cout << "<" << name << "> I'm alive, i'm alive, i'm alive!!!!!!!\n";
	std::cout << "\033[0;39m";
}

FragTrap::FragTrap(const FragTrap &base)
{
	std::cout << "\033[0;32m";
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

FragTrap &FragTrap::operator=(const FragTrap &base)
{
	std::cout << "\033[0;32m";
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

FragTrap::~FragTrap()
{
	std::cout << "\033[0;32m";
	std::cout << "EXPLOSIOOOOOOOOONS!!!!!!\n";
	std::cout << "\033[0;39m";
}

//#######################
//		MEMBER FUNCTION	#
//#######################

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int tmp;

	std::cout << "\033[0;32m";
	if (this->Energy < 25)
		std::cout << "Not enough power\n";
	else if (this->Level < 2)
		std::cout << "Skill not learned yet, need to level up\n";
	else
	{
		switch (tmp = std::rand() % 5) {
			case 0 :
				std::cout << "< Bullet storm activated >\n";
				std::cout << "<" <<this->Name << ">" << " I am a storm of death and bullets.\n";
				std::cout << target << " is now like a strainer\n";
				break ;
			case 1 :
				std::cout << "< Rainbow Nova activated >\n";
				std::cout << "<" <<this->Name << ">" << " Admire my deadly aura\n";
				std::cout << target << " is blind by the rainbow flash\n";
				break ;
			case 2 :
				std::cout << "< M3D1C-TR4P activated >\n";
				std::cout << "<" <<this->Name << ">" << " Just a scratch you'll be fine\n";
				std::cout << target << " is healed by M3D1C-TR4P\n";
				break ;
			case 3 : 
				std::cout << "< Updating FR4G-TR4P >\n";
				std::cout << "<" << this->Name << ">" << " Hahaha, hahaha, I rise again\n";
				std::cout << target << " is astonish\n";
				break ;
			case 4 :
				std::cout << "< B0MB0-TR4P activated >\n";
				std::cout << "<" << this->Name << ">" << " Activate the key, press the button and BOOOOOOOOM\n";
				std::cout << target << " is blown awy by the epxlosion\n";
				break ;
		}
	}

	this->Energy -= 25;
	if (this->Energy < 0)
		this->Energy = 0;
	std::cout << "\033[0;39m";
}