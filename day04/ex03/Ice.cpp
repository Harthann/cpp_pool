#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::Ice(Ice const& base)
{
	this->setXP(base.getXP());
	this->setType(base.getType());
}

Ice const& Ice::operator=(Ice const& base)
{
	this->setXP(base.getXP());
	return (*this);
}

Ice::~Ice()
{}


void Ice::use(ICharacter& target)
{
	std::cout << "*Shoots an ice bolt at " << target.getName();
	std::cout << " *\n";
	this->setXP(this->getXP() + 10);
}

AMateria* Ice::clone() const
{
	Ice *materia = new Ice();
	*materia = *this;
	return (materia);
}