#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <time.h>

class FragTrap
{
	public:
		FragTrap(std::string name = "Unknown");
		FragTrap(const FragTrap& base);
		FragTrap &operator=(const FragTrap &base);
		~FragTrap();
		void	LevelUP();
		void	rangedAttack(std::string const& target);
		void	meleeAttack(std::string const& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const &target);
	private:
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
