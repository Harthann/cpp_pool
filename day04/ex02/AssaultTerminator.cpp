#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "\033[0;32m*teleports from space *\n\033[0m";
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &base) : ISpaceMarine(base)
{
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator& base)
{
	(void)base;
	return (*this);
}


AssaultTerminator::~AssaultTerminator()
{
	std::cout << "\033[31mI’ll be back...\n\033[0m";
}

ISpaceMarine *AssaultTerminator::clone() const
{
	ISpaceMarine *tmp = new AssaultTerminator(*this);
	return (tmp);
}

void		AssaultTerminator::battleCry() const
{
	std::cout << "\033[0;36mThis code is unclean. PURIFY IT!\n\033[0m";
}

void		AssaultTerminator::rangedAttack() const
{
	std::cout << "\033[1;35m* does nothing *\n\033[0m";
}

void		AssaultTerminator::meleeAttack() const
{
	std::cout << "\033[1;31m* attacks with chainfists *\n\033[0m";
}
