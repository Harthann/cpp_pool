#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::Cure(Cure const& base) : AMateria(base)
{
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
	std::cout << "\033[0;32m*heals " << target.getName();
	std::cout << "'s wounds* \n\033[0m";
	this->setXP(this->getXP() + 10);
}

AMateria* Cure::clone() const
{
	Cure *materia = new Cure();
	*materia = *this;
	return (materia);
}
