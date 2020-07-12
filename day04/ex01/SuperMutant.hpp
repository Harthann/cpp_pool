#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <iostream>
#include "Ennemy.hpp"

class SuperMutant : public Ennemy
{
	public:
		SuperMutant();
		~SuperMutant();
		SuperMutant(SuperMutant const&);

		void	takeDamage(int);
	private:
};

#endif