#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(int nb = 1);
		~ZombieHorde();
		void	announce();
		void	setType(std::string str);
	private:
		class Zombie* group;
		int number;
};

#endif
