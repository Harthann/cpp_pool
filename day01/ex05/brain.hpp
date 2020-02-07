#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		void	setNeuronnes(int nb);
		void	setIQ(char nb);
		void	setMasse(int nb);
		std::string identify();

	private:
		int	neuronnes;
		int	masse;
		char iq;
};

#endif