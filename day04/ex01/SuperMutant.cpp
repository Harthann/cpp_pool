#include "SuperMutant.hpp"

//#######################################
//#			CONSTRUCTOR/DESTRUCTOR		#
//#######################################

SuperMutant::SuperMutant() : Ennemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::SuperMutant(SuperMutant const& mutant) :
Ennemy(mutant.getHP(), mutant.getType())
{
	std::cout << "Gaaah. Me want smash hea ds!\n";
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh...\n";
}

//#######################################
//#			MEMEBR FUNCTIONS			#
//#######################################

void	SuperMutant::takeDamage(int nb)
{
	if (nb - 3 > 0)
		hp -= (nb - 3);
}

//#######################################
//#				OPERATOR				#
//#######################################
