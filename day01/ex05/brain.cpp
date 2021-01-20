#include "brain.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>

std::string Brain::identify() const
{
	unsigned long int addr;
	std::stringstream stream;

	addr = (unsigned long int)this;

	stream << "0x" << std::hex << addr;
	return (stream.str());
}
