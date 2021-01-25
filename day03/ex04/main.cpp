#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main(void)
{
	std::string clap_n = "FR4G-TP";
	std::string ninja_n = "NINJ4-TP";
	std::string scav_n = "SC4V-TP";
	std::string super_n = "SUPER-TP";
	FragTrap clap(clap_n);
	ScavTrap scav(scav_n);
	NinjaTrap ninja(ninja_n);
	SuperTrap super(super_n);

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
