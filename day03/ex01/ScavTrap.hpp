#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

class ScavTrap
{
		public:
		ScavTrap(std::string name);
		~ScavTrap();
		void	rangedAttack(std::string const& target);
		void	meleeAttack(std::string const& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
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