#include "ScavTrap.hpp"

//###########################
//	CONSTRUCTOR/DESTRUCTOR	#
//###########################

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 1, 20, 15, 3)
{
	std::srand(std::time(nullptr));

	std::cout << "\033[0;35m";
	std::cout << "<Glados> SC4V-TRAP mode initiate\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[0;35m";
	std::cout << "<Glados> SC4V-TRAP mode deactivated.\n";
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
	std::cout << "I'll let you choose a number between 1 and 10\n";
	std::cin >> a;
	std::cout << "Ohoh you choose the number " << a << std::endl;
	std::cout << "Please answer to this question!\n";
	std::cout << "Which creature has one voice and yet becomes four-footed and two-footed and three-footed?\n";
	std::cin >> answer;
	if (!answer.compare("SC4V-TRAP"))
	{
		std::cout << "I didn't expected you to found the answer, crap\n";
		std::cout << "Well it wasn't really difficult, it's the only riddle i know.\n";
	}
	else
		std::cout << "AHAH YOU FOOL IT WAS ME SC4V-TRAP\n";
}