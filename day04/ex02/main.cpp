#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* bravo = new Squad;

	bravo->push(bob);
	bravo->push(jim);
	bravo->push(bob->clone());
	bravo->push(jim->clone());
	ISquad *alpha = new Squad(*bravo);
	ISquad *charlie;
	charlie = bravo;
	std::cout << "====\tThis is charlie turn to attack\t====\n";
	for (int i = 0; i < charlie->getCount(); i++)
	{
		ISpaceMarine* cur = charlie->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "====\tThis is alpha turn to attack====\t\n";
	for (int i = 0; i < alpha->getCount(); i++)
	{
		ISpaceMarine* cur = alpha->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "====\tThis is bravo turn to attack\t====\n";
	for (int i = 0; i < alpha->getCount(); i++)
	{
		ISpaceMarine* cur = alpha->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "Assigning new units to charlie\n";
	charlie = alpha;
	delete alpha;
	delete bravo;

	return 0;
}
