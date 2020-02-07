#include <iostream>
#include "Zombie.hpp"

class Horde
{
	public:
		Horde(int nb = 1);
		~Horde();
		void	announce();
		void	setType(std::string str);
	private:
		class Zombie* group;
		int number;
};