#include "human.hpp"
#include "brain.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

Human::Human() : humans_brain()
{}

std::string Human::identify()
{
	unsigned long int addr;
	std::stringstream stream;

	addr = (unsigned long int)&this->humans_brain;

	stream << "0x" << std::hex << addr;
	return (stream.str());
}

Brain Human::getBrain()
{
	return (this->humans_brain);
}