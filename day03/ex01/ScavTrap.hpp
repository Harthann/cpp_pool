#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <time.h>
#include <vector>


class ScavTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		void	rangedAttack(std::string const& target);
		void	meleeAttack(std::string const& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	challengerNewcomer(const std::string& target);
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