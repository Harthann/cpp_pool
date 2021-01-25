#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void	test_coplien(FragTrap frag, ScavTrap scav)
{
	FragTrap clap;
	ScavTrap scav2;

	clap = frag;
	scav2 = scav;
}


int		main(void)
{
	std::string scav_n = "SC4V-TP";
	std::string frag_n = "FR4G-TP";
	FragTrap frag(frag_n);
	ScavTrap scav(scav_n);



	std::cout << "\033[1;39m======\tTest Coplien\t======\n";
	test_coplien(frag, scav);
	std::cout << "\033[1;39m======\tTest Classe\t======\n";

	frag.meleeAttack(scav_n);
	scav.takeDamage(30);
	scav.rangedAttack(frag_n);
	frag.takeDamage(15);
	scav.meleeAttack(frag_n);
	frag.beRepaired(1);
	scav.beRepaired(1);
	frag.vaulthunter_dot_exe(scav_n);
	frag.LevelUP();
	frag.vaulthunter_dot_exe(scav_n);
	scav.takeDamage(50);
	scav.beRepaired(150);
	scav.challengerNewcomer(frag_n);
	std::cout << "\033[1;32mFunction take end here, both class will be now destroy.\n";
	return (0);
}