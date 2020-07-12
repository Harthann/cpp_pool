#include "RadScorpion.hpp"

//#######################################
//#			CONSTRUCTOR/DESTRUCTOR		#
//#######################################

RadScorpion::RadScorpion() : Ennemy(80, "RadScorpion")
{
	std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(RadScorpion const& scorpion) :
Ennemy(scorpion.getHP(), scorpion.getType())
{
	std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}

//#######################################
//#			MEMEBR FUNCTIONS			#
//#######################################


//#######################################
//#				OPERATOR				#
//#######################################