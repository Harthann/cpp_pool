#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

void	test_coplien(Sorcerer s, Victim v, Peon p)
{
	Sorcerer s2;
	Victim v2;
	Peon p2;

	s2= s;
	p2=p;
	v2=v;
}

int		main(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim	jim("jim");
	Peon	joe("Joe");

	std::cout << "=======\tTEST COPLIEN =======\n";
	test_coplien(robert, jim, joe);
	std::cout << "=======\tTEST NORMAL =======\n";

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);
	return (0);
}
