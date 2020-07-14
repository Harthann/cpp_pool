#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("Cure")
{}

Cure::Cure(Cure const& base)
{
	this->setXP(base.getXP());
	this->setType(base.getType());
}

Cure const& Cure::operator=(Cure const& base)
{
	this->setXP(base.getXP());
	return (*this);
}

Cure::~Cure()
{}

void	Cure::use(ICharacter& target)
{
	std::cout << "*heals " << target.getName();
	std::cout << "'s wounds* \n";
	this->setXP(this->getXP() + 10);
}

AMateria* Cure::clone() const
{
	Cure *materia = new Cure();
	*materia = *this;
	return (materia);
}