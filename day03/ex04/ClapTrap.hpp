#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hp, int mhp, int en, int lvl, int mdmg, int rdmg, int ard);
		~ClapTrap();
		void	rangedAttack(std::string const& target) const;
		void	meleeAttack(std::string const& target) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	protected:
		int HP;
		int MaxHP;
		int Energy;
		int MaxEnergy;
		int Level;
		std::string Name;
		int MeleeDamage;
		int RangeDamage;
		int ArmorReduction;
};

#endif