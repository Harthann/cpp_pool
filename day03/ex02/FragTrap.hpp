#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap();
		void	vaulthunter_dot_exe(std::string const &target);
	private:
};

#endif