#include "human.hpp"
#include "brain.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

Human::Human() : humans_brain()
{}

std::string Human::identify()
{
	return (this->humans_brain.identify());
}

const Brain & Human::getBrain()
{
	return (this->humans_brain);
}
