#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int		main(void)
{
	Sorcerer john("John", "sheep master");
	Victim	timmy("Timmy");
	Peon	jimmy("Jimmy");

	std::cout << john << timmy << jimmy;

	john.polymorph(timmy);
	john.polymorph(jimmy);
	return (0);
}