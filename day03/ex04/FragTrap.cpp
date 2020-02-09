#include "FragTrap.hpp"

//###########################
//	CONSTRUCTOR/DESTRUCTOR	#
//###########################

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::srand(std::time(nullptr));

	std::cout << "\033[0;36m";
	std::cout << "<Glados> FR4G-TRAP mode initiate\n";
}

FragTrap::~FragTrap()
{
	std::cout << "\033[0;36m";
	std::cout << "<Glados> FR4G-TRAP mode deactivated.\n";
}

//#######################
//		MEMBER FUNCTION	#
//#######################

void		FragTrap::meleeAttack(const std::string& target) const
{
	ClapTrap::meleeAttack(target);
	std::cout << "I stab you from the shadow\n";
}

void		FragTrap::rangeAttack(const std::string& target) const
{
	ClapTrap::meleeAttack(target);
	std::cout << "My kunai will pierce you\n";
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int tmp;

	std::cout << "\033[0;36m";
	if (this->Energy < 25)
		std::cout << "Not enough power\n";
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
			std::cout << target << " is blown away by explosion\n";
		}
		
	}
	this->Energy -= 25;
	std::cout << this->Name << " have now " << this->Energy << " energy\n";
}
