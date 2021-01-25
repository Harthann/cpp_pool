#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <time.h>
#include <vector>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string& name);
		~ScavTrap();
		void	challengerNewcomer(const std::string& target);
};

#endif