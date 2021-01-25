#include "FragTrap.hpp"

int		main(void)
{
	FragTrap clap("CL4P-TP");

	clap.meleeAttack("Random ship");
	clap.rangedAttack("Random ship");
	clap.takeDamage(15);
	clap.beRepaired(5);
	clap.beRepaired(3000);
	clap.vaulthunter_dot_exe("Vault Hunter");
	clap.LevelUP();
	for (int i = 0; i < 6; i++)
		clap.vaulthunter_dot_exe("Vault Hunter");
}