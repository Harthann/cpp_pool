#include "Victim.hpp"

//###############################
//#		CONSTRUCTOR/DESTRUCTOR	#
//###############################

Victim::Victim() : name("Default")
{
	std::cout << "Some random victim called ";
	std::cout << this->name << " just appeared!\n";
}

Victim::Victim(std::string name) : name(name)
{
	std::cout << "Some random victim called ";
	std::cout << name << " just appeared!\n";
}

Victim::Victim(const Victim& base)
{
	this->name = base.getName();
	std::cout << "Some random victim called ";
	std::cout << this->name << " just appeared!\n";
}


Victim& Victim::operator=(const Victim& V)
{
	name = V.name;
	std::cout << "Some random victim called ";
	std::cout << name << " just appeared!\n";
	return (*this);
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name;
	std::cout << " just died for no apparent reason!\n";
}

//###############################
//#		MEMBER FUNCTION			#
//###############################

std::string		Victim::getName() const
{
	return (this->name);
}

void			Victim::getPolymorphed() const
{
	std::cout << this->name;
	std::cout << " has been turned into a cute little sheep!\n";
}

//###############################
//#		OVERLOADED OPERATOR		#
//###############################

std::ostream&	operator<<(std::ostream& os, const Victim& V)
{
	os << "I'm " << V.getName() << " and I like otters!\n";
	return (os);
}
