#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : ClapTrap
{
	public:
		NinjaTrap(std::string name);
		~NinjaTrap();
		void	ninjaShoebox(FragTrap& target);
		void	ninjaShoebox(ScavTrap& target);
		void	ninjaShoebox(NinjaTrap& target);
	private:
};

#endif