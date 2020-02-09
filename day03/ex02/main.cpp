#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int		main(void)
{
	std::string scav_n = "SC4V-TP";
	std::string clap_n = "CL4P-TP";
	FragTrap clap(clap_n);
	ScavTrap scav(scav_n);

	
	clap.meleeAttack(scav_n);
	scav.takeDamage(30);
	scav.rangedAttack(clap_n);
	clap.takeDamage(15);
	clap.beRepaired(1);
	scav.beRepaired(1);
	clap.vaulthunter_dot_exe(scav_n);
	scav.takeDamage(50);
	scav.beRepaired(150);
	scav.challengerNewcomer(clap_n);
	std::cout << "\033[1;32mFunction take end here, both class will be now destroy.\n";
	return (0);
}