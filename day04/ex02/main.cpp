#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	Squad* bravo = new Squad;

	bravo->push(bob);
	bravo->push(jim);
	bravo->push(bob->clone());
	bravo->push(jim->clone());
	Squad alpha = *bravo;
	Squad charlie;
	charlie = *bravo;
	std::cout << "This is charlie turn to attack\n";
	for (int i = 0; i < charlie.getCount(); i++)
	{
		ISpaceMarine* cur = charlie.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "This is alpha turn to attack\n";
	for (int i = 0; i < alpha.getCount(); i++)
	{
		ISpaceMarine* cur = alpha.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "This is bravo turn to attack\n";
	for (int i = 0; i < alpha.getCount(); i++)
	{
		ISpaceMarine* cur = alpha.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "Assigning new units to charlie\n";
	charlie = alpha;
	delete bravo;
	return 0;
}