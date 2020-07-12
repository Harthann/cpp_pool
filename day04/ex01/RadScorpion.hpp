#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include <iostream>
#include "Ennemy.hpp"

class RadScorpion : public Ennemy
{
	public:
		RadScorpion();
		RadScorpion(RadScorpion const&);
		~RadScorpion();
	private:
};

#endif