#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	public:
		NinjaTrap(std::string name);
		~NinjaTrap();

		void	meleeAttack(const std::string& target) const;
		void	ninjaShoebox(FragTrap& target);
		void	ninjaShoebox(ScavTrap& target);
		void	ninjaShoebox(NinjaTrap& target);
		void	ninjaShoebox(ClapTrap& target);
	private:
};

#endif