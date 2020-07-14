#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "Ennemy.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"

// int	main(void)
// {
// 	PlasmaRifle* rifle = new PlasmaRifle();
// 	PowerFist* fist = new PowerFist();
// 	SuperMutant* mutant = new SuperMutant();
// 	Character* player = new Character("John");

// 	std::cout << *player;
// 	std::cout << mutant->getHP() << std::endl;
// 	player->attack(mutant);
// 	player->equip(rifle);
// 	player->equip(fist);
// 	player->attack(mutant);
// 	player->attack(mutant);
// 	player->attack(mutant);
// 	std::cout << *player;
// 	player->recoverAP();
// 	std::cout << *player;
// 	std::cout << mutant->getHP() << std::endl;
	
// 	return (0);
// }

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Ennemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	std::cout << b->getHP() << std::endl;
	std::cout << b << std::endl;
	me->attack(b);
	std::cout << *me;
	std::cout << b << std::endl;
	return 0;
}