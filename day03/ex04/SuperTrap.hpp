#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

// Frag stats :		HP = 100
//					MaxHP = 100
//					EnergyPoint = 100
//					MaxEnergy = 100
//					Level = 1
//					Melee Attack = 30
//					Range Attack = 20
//					Armor Reduc = 5

// Ninja stats :	HP = 60
//					MaxHP = 60
//					EnergyPoint = 120
//					MaxEnergy = 120
//					Level = 1
//					Melee Attack = 60
//					Range Attack = 5
//					Armor Reduc = 0


class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(std::string& name);
		~SuperTrap();
		void	printStat() const;
		using NinjaTrap::meleeAttack;
		using FragTrap::rangedAttack;
		using NinjaTrap::ninjaShoebox;
		using FragTrap::vaulthunter_dot_exe;
};

#endif