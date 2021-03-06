#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <time.h>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(std::string name = "Unknown");
		FragTrap(const FragTrap &base);
		FragTrap &operator=(const FragTrap &base);
		~FragTrap();

		void	rangedAttack(const std::string& target) const;
		void	vaulthunter_dot_exe(std::string const &target);
};

#endif
