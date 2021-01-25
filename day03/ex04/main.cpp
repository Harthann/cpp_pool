#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

void	test_coplien(FragTrap frag, ScavTrap scav, ClapTrap clap, NinjaTrap ninja, SuperTrap super)
{
	FragTrap frag2;
	ScavTrap scav2;
	ClapTrap clap2;
	NinjaTrap ninja2;
	SuperTrap super2;

	frag2 = frag;
	scav2 = scav;
	clap2 = clap;
	ninja2 = ninja;
	super2 = super;
}

int		main(void)
{
	std::string frag_n = "FR4G-TP";
	std::string clap_n = "CL4P-TP";
	std::string ninja_n = "NINJ4-TP";
	std::string scav_n = "SC4V-TP";
	std::string super_n = "SUPER-TP";
	FragTrap frag(frag_n);
	ClapTrap clap(clap_n);
	ScavTrap scav(scav_n);
	NinjaTrap ninja(ninja_n);
	SuperTrap super(super_n);

	std::cout << "\033[1;39m======\tTest Coplien\t======\n";
	test_coplien(frag, scav, clap, ninja, super);
	std::cout << "\033[1;39m======\tTest Classe\t======\n";

	std::cout << std::endl;
	std::cout << "========= VAULT HUNTER EXE : =========\n\n";
	super.vaulthunter_dot_exe("target");
	super.LevelUP();
	super.vaulthunter_dot_exe("target");

	std::cout << "\n\n========= NINJA SHOEBOX : =========\n\n";
	super.ninjaShoebox(clap);
	super.ninjaShoebox(ninja);
	super.ninjaShoebox(scav);

	std::cout << "========= CLASSIC BATTLE: =========\n\n";
	super.meleeAttack("<Melee target>");
	super.rangedAttack("<Range target>");
	super.takeDamage(10);
	super.beRepaired(10);
	std::cout << "\033[1;32mFunction take end here, both class will be now destroy.\n";
	return (0);
}
