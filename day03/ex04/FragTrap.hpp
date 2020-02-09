#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap();
		void	vaulthunter_dot_exe(std::string const &target);
		void	meleeAttack(const std::string& target) const;
		void	rangeAttack(const std::string& target) const;
	private:
};

#endif