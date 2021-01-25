#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(std::string name = "Unknown");
		NinjaTrap(const NinjaTrap & base);
		NinjaTrap &operator=(const NinjaTrap& base);
		~NinjaTrap();
		void	ninjaShoebox(FragTrap& target);
		void	ninjaShoebox(ScavTrap& target);
		void	ninjaShoebox(NinjaTrap& target);
		void	ninjaShoebox(ClapTrap& target);
	private:
};

#endif