#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "brain.hpp"

class Human
{
	public:
		Human();
		std::string identify();
		Brain getBrain();
	private:
		const Brain humans_brain;
};

#endif