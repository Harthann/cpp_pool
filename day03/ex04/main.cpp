#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main(void)
{
	std::string clap_n = "CL4P-TP";
	std::string super_n = "SUPER-TP";
	FragTrap clap(clap_n);
	SuperTrap super(super_n);

	std::cout << "VAULT HUNTER EXE : \n\n";
	super.vaulthunter_dot_exe("target");
	std::cout << "NINJA SHOEBOX :\n\n";
	super.ninjaShoebox(clap);
	super.meleeAttack("<Melee target>");
	super.rangeAttack("<Range target>");
	// ninja.ninjaShoebox(ninja);
	std::cout << "\033[1;32mFunction take end here, both class will be now destroy.\n";
	return (0);
}