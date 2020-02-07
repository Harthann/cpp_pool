#include "brain.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>

std::string Brain::identify()
{
	unsigned long int addr;
	std::stringstream stream;

	addr = (unsigned long int)this;

	stream << "0x" << std::hex << addr;
	return (stream.str());
}

void	Brain::setNeuronnes(int nb)
{
	this->neuronnes = nb;
}

void	Brain::setIQ(char nb)
{
	this->iq = nb;
}

void	Brain::setMasse(int nb)
{
	this->masse = nb;
}