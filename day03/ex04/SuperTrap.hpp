#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
	public:
		SuperTrap(std::string name);
		~SuperTrap();
		void meleeAttack(const std::string& target) const;
		void rangeAttack(const std::string& target) const;
	private:
};

#endif