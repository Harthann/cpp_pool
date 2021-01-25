#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void	test_coplien(FragTrap frag, ScavTrap scav, ClapTrap clap)
{
	FragTrap frag2;
	ScavTrap scav2;
	ClapTrap clap2;

	frag2 = frag;
	scav2 = scav;
	clap2 = clap;
}


int		main(void)
{
	std::string scav_n = "SC4V-TP";
	std::string clap_n = "CL4P-TP";
	std::string frag_n = "FR4G-TP";
	FragTrap frag(frag_n);
	ClapTrap clap(clap_n);
	ScavTrap scav(scav_n);

	

	std::cout << "\033[1;39m======\tTest Coplien\t======\n";
	test_coplien(frag, scav, clap);
	std::cout << "\033[1;39m======\tTest Classe\t======\n";

	frag.meleeAttack(scav_n);
	scav.takeDamage(30);
	scav.rangedAttack(frag_n);
	frag.takeDamage(15);
	frag.beRepaired(1);
	scav.beRepaired(1);
	frag.vaulthunter_dot_exe(scav_n);
	scav.takeDamage(50);
	scav.beRepaired(150);
	scav.challengerNewcomer(frag_n);
	std::cout << "\033[1;32mFunction take end here, both class will be now destroy.\n";
	return (0);
}