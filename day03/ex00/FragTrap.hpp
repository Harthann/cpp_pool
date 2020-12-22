#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>
#include <ctime>

class FragTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap();
		void	rangedAttack(std::string const& target);
		void	meleeAttack(std::string const& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const &target);
	private:
		int HP;
		int MaxHP;
		int Energy;
		int Level;
		std::string Name;
		int MeleeDamage;
		int RangeDamage;
		int ArmorReduction;
};

#endif
