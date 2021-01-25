#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void)
{
	std::string scav_n = "SC4V-TP";
	std::string clap_n = "CL4P-TP";
	std::string frag_n = "FR4G-TP";
	std::string ninja_n = "NINJA-TP";
	FragTrap clap(clap_n);
	FragTrap frag(frag_n);
	ScavTrap scav(scav_n);
	NinjaTrap ninja(ninja_n);

	std::cout << "\n\n======= FIGHT =======\n";

	clap.meleeAttack(scav_n);
	scav.takeDamage(30);
	scav.rangedAttack(clap_n);
	clap.takeDamage(15);
	ninja.meleeAttack(frag_n);
	frag.takeDamage(60);

	std::cout << "\n\n======= NINJASHOEBOX =======\n\n";
	ninja.ninjaShoebox(frag);
	std::cout << std::endl;
	ninja.ninjaShoebox(scav);
	std::cout << std::endl;
	ninja.ninjaShoebox(ninja);
	std::cout << std::endl;
	ninja.ninjaShoebox(clap);
	std::cout << std::endl;
	std::cout << "\033[1;32mFunction take end here, both class will be now destroy.\n";
	return (0);
}