#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	// FragTrap clap("CL4P-TP");
	ScavTrap trap("SC4V-TP");

	trap.meleeAttack("Melee Target");
	trap.rangedAttack("Range Target");
	trap.takeDamage(50);
	trap.beRepaired(15);
	return (0);
}