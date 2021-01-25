#include "FragTrap.hpp"

void	test_coplien(FragTrap frag)
{
	FragTrap clap;

	clap = frag;
}

int		main(void)
{
	FragTrap clap("CL4P-TP");


	std::cout << "======\tTest Coplien\t======\n";
	test_coplien(clap);
	std::cout << "======\tTest Classe\t======\n";

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