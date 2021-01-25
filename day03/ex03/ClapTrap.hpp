#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(std::string name = "Unknown");
		ClapTrap(std::string& name, int hp, int mhp, int en, int lvl, int mdmg, int rdmg, int ard);
		ClapTrap(const ClapTrap &base);
		ClapTrap &operator=(const ClapTrap & base);
		~ClapTrap();

		void	LevelUP(void);
		void	rangedAttack(std::string const& target);
		void	meleeAttack(std::string const& target);
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