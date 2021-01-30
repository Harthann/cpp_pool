#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "\033[0;32mTactical Marine ready for battle!\n\033[0m";
}

TacticalMarine::TacticalMarine(const TacticalMarine &base) : ISpaceMarine(base)
{	
}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &base)
{
	(void)base;
	return (*this);
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "\033[31mAaargh...\n\033[0m";
}

ISpaceMarine *TacticalMarine::clone() const
{
	ISpaceMarine *tmp = new TacticalMarine(*this);
	return (tmp);
}

void		TacticalMarine::battleCry() const
{
	std::cout << "\033[0;36mFor the holy PLOT!\n\033[0m";
}

void		TacticalMarine::rangedAttack() const
{
	std::cout << "\033[1;35m* attacks with a bolter *\n\033[0m";
}

void		TacticalMarine::meleeAttack() const
{
	std::cout << "\033[1;31m* attacks with a chainsword *\n\033[0m";
}
